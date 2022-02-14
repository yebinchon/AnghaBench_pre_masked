
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mtd_partition {size_t offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; int erasesize; } ;
struct lzma_header {int* props; int size_high; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (scalar_t__) ;
 struct mtd_partition* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mtd_info*,int ,size_t,size_t*,int *) ;
 int FUNC_4 (struct mtd_info*,int ,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_7,
          const struct mtd_partition **VAR_8,
          struct mtd_part_parser_data *VAR_9)
{
 struct lzma_header VAR_10;
 size_t VAR_11, VAR_12;
 size_t VAR_13;
 u32 VAR_14;
 struct mtd_partition *VAR_15;
 int VAR_16;

 VAR_11 = sizeof(VAR_10);
 VAR_16 = FUNC_4(VAR_7, 0, VAR_11, &VAR_12, (void *) &VAR_10);
 if (VAR_16)
  return VAR_16;

 if (VAR_12 != VAR_11)
  return -VAR_1;


 if (VAR_10.props[0] >= (9 * 5 * 5))
  return -VAR_0;

 VAR_14 = FUNC_0(&VAR_10.props[1]);
 if (!FUNC_1(VAR_14))
  return -VAR_0;

 VAR_14 = FUNC_0(&VAR_10.size_high);
 if (VAR_14)
  return -VAR_0;

 VAR_16 = FUNC_3(VAR_7, VAR_7->erasesize, VAR_7->size,
       &VAR_13, ((void*)0));
 if (VAR_16)
  return VAR_16;

 VAR_15 = FUNC_2(VAR_5 * sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15[0].name = VAR_4;
 VAR_15[0].offset = 0;
 VAR_15[0].size = VAR_13;

 VAR_15[1].name = VAR_6;
 VAR_15[1].offset = VAR_13;
 VAR_15[1].size = VAR_7->size - VAR_13;

 *VAR_8 = VAR_15;
 return VAR_5;
}
