
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct uboot_args {scalar_t__ magic; } ;
struct erase_info_user {int length; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct uboot_args*) ;
 int FUNC_3 (int,int ,struct erase_info_user*) ;
 struct uboot_args* FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int,struct uboot_args*,int ,int ) ;
 int FUNC_7 (int,struct uboot_args*,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 () ;

int FUNC_9(const char *VAR_5, const bool VAR_6)
{
 struct erase_info_user VAR_7;
 struct uboot_args *VAR_8;
 uint32_t VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_8 = FUNC_4(VAR_3);
 if (!VAR_8) {
  FUNC_1(VAR_4, "Could not allocate memory!\n");
  return -1;
 }

 VAR_11 = FUNC_5(VAR_5);
 if (VAR_11 < 0) {
  FUNC_1(VAR_4, "Could not open mtd device: %s\n", VAR_5);
  VAR_10 = -1;
  goto out;
 }


 FUNC_6(VAR_11, VAR_8, VAR_3, 0);


 VAR_9 = VAR_2;
 if (!VAR_6)
  VAR_9 = VAR_1;


 if (VAR_9 == VAR_8->magic)
  goto out;


 VAR_7.start = 0;
 VAR_7.length = VAR_3;

 VAR_10 = FUNC_3(VAR_11, VAR_0, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_1(VAR_4, "failed to erase block: %i\n", VAR_10);
  goto out;
 }


 VAR_8->magic = VAR_9;

 VAR_10 = FUNC_7(VAR_11, VAR_8, VAR_3, 0);
 if (VAR_10 < 0)
  FUNC_1(VAR_4, "failed to write: %i\n", VAR_10);

 FUNC_8();
out:
 FUNC_2(VAR_8);
 FUNC_0(VAR_11);

 return VAR_10;
}
