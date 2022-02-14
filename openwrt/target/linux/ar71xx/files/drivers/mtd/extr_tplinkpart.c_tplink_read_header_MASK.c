
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tplink_fw_header {int kernel_ofs; int version; } ;
struct mtd_info {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct mtd_info*,size_t,size_t,size_t*,unsigned char*) ;
 int FUNC_2 (struct tplink_fw_header*) ;
 struct tplink_fw_header* FUNC_3 (int) ;

__attribute__((used)) static struct tplink_fw_header *
FUNC_4(struct mtd_info *VAR_2, size_t VAR_3)
{
 struct tplink_fw_header *VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 if (!VAR_4)
  goto err;

 VAR_5 = sizeof(struct tplink_fw_header);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_6,
         (unsigned char *) VAR_4);
 if (VAR_7)
  goto err_free_header;

 if (VAR_6 != VAR_5)
  goto err_free_header;


 VAR_8 = FUNC_0(VAR_4->version);
 if ((VAR_8 != VAR_0) && (VAR_8 != VAR_1))
  goto err_free_header;

 VAR_8 = FUNC_0(VAR_4->kernel_ofs);
 if (VAR_8 != VAR_5)
  goto err_free_header;

 return VAR_4;

err_free_header:
 FUNC_2(VAR_4);
err:
 return ((void*)0);
}
