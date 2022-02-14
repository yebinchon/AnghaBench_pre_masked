
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct ar934x_nfc {int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar934x_nfc*,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct ar934x_nfc* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct ar934x_nfc*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
       int VAR_3)
{
 struct ar934x_nfc *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(VAR_4, "write_oob: page:%d\n", VAR_3);

 FUNC_1(VAR_4->buf, VAR_2->oob_poi, VAR_1->oobsize);

 return FUNC_0(VAR_4, VAR_0, VAR_1->writesize,
         VAR_3, VAR_1->oobsize);
}
