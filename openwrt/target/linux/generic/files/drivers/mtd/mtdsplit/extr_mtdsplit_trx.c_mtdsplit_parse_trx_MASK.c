
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {scalar_t__ magic; size_t* offset; int len; } ;
struct mtd_partition {size_t offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; int name; scalar_t__ erasesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mtd_partition*) ;
 struct mtd_partition* FUNC_2 (int,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct mtd_info*,size_t,struct trx_header*) ;

__attribute__((used)) static int
FUNC_6(struct mtd_info *VAR_6,
     const struct mtd_partition **VAR_7,
     struct mtd_part_parser_data *VAR_8)
{
 struct mtd_partition *VAR_9;
 struct trx_header VAR_10;
 int VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 size_t VAR_14 = 0;
 size_t VAR_15;
 size_t VAR_16 = 0;
 int VAR_17;

 VAR_11 = 2;
 VAR_9 = FUNC_2(VAR_11 * sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;


 for (VAR_12 = 0; VAR_12 < VAR_6->size; VAR_12 += VAR_6->erasesize) {
  VAR_14 = 0;

  VAR_17 = FUNC_5(VAR_6, VAR_12, &VAR_10);
  if (VAR_17)
   continue;

  if (VAR_10.magic != FUNC_0(VAR_5)) {
   FUNC_4("no valid trx header found in \"%s\" at offset %llx\n",
     VAR_6->name, (unsigned long long) VAR_12);
   continue;
  }

  VAR_14 = FUNC_3(VAR_10.len);
  if ((VAR_12 + VAR_14) > VAR_6->size) {
   FUNC_4("trx image exceeds MTD device \"%s\"\n",
     VAR_6->name);
   continue;
  }
  break;
 }

 if (VAR_14 == 0) {
  FUNC_4("no trx header found in \"%s\"\n", VAR_6->name);
  VAR_17 = -VAR_0;
  goto err;
 }

 VAR_13 = VAR_12 + VAR_10.offset[0];
 VAR_15 = VAR_12 + VAR_10.offset[1];
 VAR_16 = VAR_6->size - VAR_15;
 VAR_14 = VAR_15 - VAR_13;

 if (VAR_16 == 0) {
  FUNC_4("no rootfs found in \"%s\"\n", VAR_6->name);
  VAR_17 = -VAR_0;
  goto err;
 }

 VAR_9[0].name = VAR_3;
 VAR_9[0].offset = VAR_13;
 VAR_9[0].size = VAR_14;

 VAR_9[1].name = VAR_4;
 VAR_9[1].offset = VAR_15;
 VAR_9[1].size = VAR_16;

 *VAR_7 = VAR_9;
 return VAR_11;

err:
 FUNC_1(VAR_9);
 return VAR_17;
}
