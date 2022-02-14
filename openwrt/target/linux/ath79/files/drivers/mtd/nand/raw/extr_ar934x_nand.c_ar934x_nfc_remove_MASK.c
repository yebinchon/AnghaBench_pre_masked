
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtd_info {int dummy; } ;
struct ar934x_nfc {int dummy; } ;


 int FUNC_0 (struct ar934x_nfc*) ;
 struct mtd_info* FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct mtd_info*) ;
 struct ar934x_nfc* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ar934x_nfc *VAR_1;
 struct mtd_info *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2);
  FUNC_0(VAR_1);
 }

 return 0;
}
