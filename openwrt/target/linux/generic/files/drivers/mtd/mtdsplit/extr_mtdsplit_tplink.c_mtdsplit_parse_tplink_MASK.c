
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rootfs_ofs; int kernel_len; int kernel_ofs; } ;
struct TYPE_3__ {int rootfs_ofs; int kernel_len; int kernel_ofs; } ;
struct tplink_fw_header {TYPE_2__ v2; TYPE_1__ v1; int version; } ;
struct mtd_partition {size_t offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct mtd_partition* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mtd_info*,size_t,int *) ;
 int FUNC_4 (struct mtd_info*,int ,size_t,size_t*,int *) ;
 int FUNC_5 (struct mtd_info*,int ,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_8,
     const struct mtd_partition **VAR_9,
     struct mtd_part_parser_data *VAR_10)
{
 struct tplink_fw_header VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 size_t VAR_15;
 struct mtd_partition *VAR_16;
 int VAR_17;

 VAR_12 = sizeof(VAR_11);
 VAR_17 = FUNC_5(VAR_8, 0, VAR_12, &VAR_13, (void *) &VAR_11);
 if (VAR_17)
  return VAR_17;

 if (VAR_13 != VAR_12)
  return -VAR_1;

 switch (FUNC_2(VAR_11.version)) {
 case 1:
  if (FUNC_0(VAR_11.v1.kernel_ofs) != sizeof(VAR_11))
   return -VAR_0;

  VAR_14 = sizeof(VAR_11) + FUNC_0(VAR_11.v1.kernel_len);
  VAR_15 = FUNC_0(VAR_11.v1.rootfs_ofs);
  break;
 case 2:
 case 3:
  if (FUNC_0(VAR_11.v2.kernel_ofs) != sizeof(VAR_11))
   return -VAR_0;

  VAR_14 = sizeof(VAR_11) + FUNC_0(VAR_11.v2.kernel_len);
  VAR_15 = FUNC_0(VAR_11.v2.rootfs_ofs);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14 > VAR_8->size)
  return -VAR_0;


 VAR_17 = FUNC_3(VAR_8, VAR_15, ((void*)0));
 if (VAR_17) {




  VAR_17 = FUNC_4(VAR_8, VAR_6,
        VAR_8->size, &VAR_15, ((void*)0));
  if (VAR_17)
   return VAR_17;
 }

 VAR_16 = FUNC_1(VAR_7 * sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16[0].name = VAR_4;
 VAR_16[0].offset = 0;
 VAR_16[0].size = VAR_14;

 VAR_16[1].name = VAR_5;
 VAR_16[1].offset = VAR_15;
 VAR_16[1].size = VAR_8->size - VAR_15;

 *VAR_9 = VAR_16;
 return VAR_7;
}
