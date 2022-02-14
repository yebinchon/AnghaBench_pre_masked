
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int oob_poi; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct ar934x_nfc {int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar934x_nfc*) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,int ,int ,int,int ) ;
 int FUNC_3 (struct mtd_info*,struct nand_chip*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const*,int ) ;
 struct ar934x_nfc* FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct ar934x_nfc*,char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
     const u8 *VAR_3, int VAR_4, int VAR_5)
{
 struct ar934x_nfc *VAR_6 = FUNC_6(VAR_1);
 int VAR_7;

 FUNC_7(VAR_6, "write_page: page:%d oob:%d\n", VAR_5, VAR_4);


 if (VAR_4 &&
     !FUNC_4(VAR_2->oob_poi, VAR_1->oobsize)) {
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_5);
  if (VAR_7)
   return VAR_7;
 }


 FUNC_5(VAR_6->buf, VAR_3, VAR_1->writesize);

 FUNC_1(VAR_6);
 VAR_7 = FUNC_2(VAR_6, VAR_0, 0, VAR_5,
        VAR_1->writesize);
 FUNC_0(VAR_6);

 return VAR_7;
}
