
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrgg03_header {int magic1; int size; } ;
struct wrg_header {int size; } ;
struct mtd_partition {size_t offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; } ;
typedef int hdr ;
typedef enum mtdsplit_part_type { ____Placeholder_mtdsplit_part_type } mtdsplit_part_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (int ) ;
 struct mtd_partition* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mtd_info*,int ,size_t,size_t*,int*) ;
 int FUNC_4 (struct mtd_info*,int ,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_10,
          const struct mtd_partition **VAR_11,
          struct mtd_part_parser_data *VAR_12)
{
 struct wrgg03_header VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 size_t VAR_17;
 struct mtd_partition *VAR_18;
 enum mtdsplit_part_type VAR_19;
 int VAR_20;

 VAR_14 = sizeof(VAR_13);
 VAR_20 = FUNC_4(VAR_10, 0, VAR_14, &VAR_15, (void *) &VAR_13);
 if (VAR_20)
  return VAR_20;

 if (VAR_15 != VAR_14)
  return -VAR_1;


 if (FUNC_2(VAR_13.magic1) == VAR_6) {
  VAR_16 = VAR_14 + FUNC_0(VAR_13.size);




  if (VAR_16 > VAR_10->size)
   VAR_16 = VAR_14 + FUNC_2(VAR_13.size);


  if (VAR_16 > VAR_10->size)
   return -VAR_0;
 } else if (FUNC_2(VAR_13.magic1) == VAR_9) {
  VAR_16 = sizeof(struct wrg_header) + FUNC_2(
                    ((struct wrg_header*)&VAR_13)->size);
 } else {
  return -VAR_0;
 }

 if (VAR_16 > VAR_10->size)
  return -VAR_0;





 VAR_20 = FUNC_3(VAR_10, VAR_7,
       VAR_10->size, &VAR_17, &VAR_19);
 if (VAR_20)
  return VAR_20;

 VAR_18 = FUNC_1(VAR_8 * sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18[0].name = VAR_4;
 VAR_18[0].offset = 0;
 VAR_18[0].size = VAR_17;

 VAR_18[1].name = VAR_5;
 VAR_18[1].offset = VAR_17;
 VAR_18[1].size = VAR_10->size - VAR_17;

 *VAR_11 = VAR_18;
 return VAR_8;
}
