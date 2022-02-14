
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algo; int mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct ar934x_nfc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct ar934x_nfc* FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_4(VAR_5);
 struct ar934x_nfc *VAR_7 = FUNC_3(VAR_5);
 struct device *VAR_8 = VAR_6->dev.parent;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->ecc.mode == VAR_3) {
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9)
   return VAR_9;
 } else if (VAR_5->ecc.mode != VAR_4) {
  FUNC_2(VAR_8, "unknown ECC mode %d\n", VAR_5->ecc.mode);
  return -VAR_0;
 } else if ((VAR_5->ecc.algo != VAR_1) &&
     (VAR_5->ecc.algo != VAR_2)) {
  FUNC_2(VAR_8, "unknown software ECC algo %d\n", VAR_5->ecc.algo);
  return -VAR_0;
 }

 return 0;
}
