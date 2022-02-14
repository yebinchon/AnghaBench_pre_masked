
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {unsigned long offset; unsigned long size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {unsigned long size; } ;
struct eva_image_header {int size; int magic; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mtd_partition* FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*,unsigned long,int *) ;
 int FUNC_3 (struct mtd_info*,int ,int,size_t*,void*) ;
 unsigned long FUNC_4 (unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_10,
    const struct mtd_partition **VAR_11,
    struct mtd_part_parser_data *VAR_12)
{
 struct mtd_partition *VAR_13;
 struct eva_image_header VAR_14;
 size_t VAR_15;
 unsigned long VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = FUNC_3(VAR_10, 0, sizeof(VAR_14), &VAR_15, (void *) &VAR_14);
 if (VAR_18)
  return VAR_18;

 if (VAR_15 != sizeof(VAR_14))
  return -VAR_1;

 if (FUNC_1(VAR_14.magic) != VAR_5)
  return -VAR_0;

 VAR_16 = FUNC_1(VAR_14.size) + VAR_4;


 VAR_17 = FUNC_4(VAR_16, 0x10000);


 VAR_17 += VAR_3;

 if (VAR_17 >= VAR_10->size)
  return -VAR_0;

 VAR_18 = FUNC_2(VAR_10, VAR_17, ((void*)0));
 if (VAR_18)
  return VAR_18;

 VAR_13 = FUNC_0(VAR_6 * sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_2;

 VAR_13[0].name = VAR_8;
 VAR_13[0].offset = 0;
 VAR_13[0].size = VAR_16;

 VAR_13[1].name = VAR_9;
 VAR_13[1].offset = VAR_17;
 VAR_13[1].size = VAR_10->size - VAR_17;

 *VAR_11 = VAR_13;
 return VAR_6;
}
