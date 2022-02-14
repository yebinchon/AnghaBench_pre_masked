
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct ar934x_nfc {int read_id; int buf_index; int rndout_page_addr; unsigned int rndout_read_cmd; int erase1_page_addr; int seqin_read_cmd; int seqin_column; int seqin_page_addr; int parent; int small_page; struct nand_chip nand_chip; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,unsigned int) ;
 int FUNC_3 (struct ar934x_nfc*,unsigned int,int,int) ;
 int FUNC_4 (struct ar934x_nfc*,int const,int,int,int) ;
 int FUNC_5 (struct ar934x_nfc*,unsigned int) ;
 int FUNC_6 (struct ar934x_nfc*,unsigned int,int,int,int) ;
 int FUNC_7 (int ,char*,unsigned int,int,int) ;
 struct ar934x_nfc* FUNC_8 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_9(struct mtd_info *VAR_1, unsigned int VAR_2,
          int VAR_3, int VAR_4)
{
 struct ar934x_nfc *VAR_5 = FUNC_8(VAR_1);
 struct nand_chip *VAR_6 = &VAR_5->nand_chip;

 VAR_5->read_id = 0;
 if (VAR_2 != 136)
  VAR_5->buf_index = 0;

 switch (VAR_2) {
 case 131:
  FUNC_2(VAR_5, VAR_2);
  break;

 case 133:
  VAR_5->read_id = 1;
  FUNC_5(VAR_5, VAR_2);
  break;

 case 135:
 case 134:
  if (VAR_5->small_page) {
   FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4,
          VAR_1->writesize + VAR_1->oobsize);
  } else {
   FUNC_4(VAR_5, VAR_2, 0, VAR_4,
          VAR_1->writesize + VAR_1->oobsize);
   VAR_5->buf_index = VAR_3;
   VAR_5->rndout_page_addr = VAR_4;
   VAR_5->rndout_read_cmd = VAR_2;
  }
  break;

 case 132:
  if (VAR_5->small_page)
   FUNC_4(VAR_5, 132,
          VAR_3, VAR_4,
          VAR_1->oobsize);
  else
   FUNC_4(VAR_5, 135,
          VAR_1->writesize, VAR_4,
          VAR_1->oobsize);
  break;

 case 130:
  if (FUNC_0(VAR_5->small_page))
   break;


  FUNC_4(VAR_5, VAR_5->rndout_read_cmd, 0,
         VAR_5->rndout_page_addr,
         VAR_1->writesize + VAR_1->oobsize);
  VAR_5->buf_index = VAR_3;
  break;

 case 138:
  VAR_5->erase1_page_addr = VAR_4;
  break;

 case 137:
  FUNC_3(VAR_5, VAR_2, -1, VAR_5->erase1_page_addr);
  break;

 case 128:
  FUNC_1(VAR_5);
  break;

 case 129:
  if (VAR_5->small_page) {

   if (VAR_3 >= VAR_1->writesize) {
    VAR_3 -= VAR_1->writesize;
    VAR_5->seqin_read_cmd = 132;
   } else if (VAR_3 < 256) {
    VAR_5->seqin_read_cmd = 135;
   } else {
    VAR_3 -= 256;
    VAR_5->seqin_read_cmd = 134;
   }
  } else {
   VAR_5->seqin_read_cmd = 135;
  }
  VAR_5->seqin_column = VAR_3;
  VAR_5->seqin_page_addr = VAR_4;
  break;

 case 136:
  if (VAR_6->ecc.mode == VAR_0) {

   break;
  }

  if (VAR_5->small_page)
   FUNC_2(VAR_5, VAR_5->seqin_read_cmd);

  FUNC_6(VAR_5, VAR_2, VAR_5->seqin_column,
          VAR_5->seqin_page_addr,
          VAR_5->buf_index);
  break;

 default:
  FUNC_7(VAR_5->parent,
   "unsupported command: %x, column:%d page_addr=%d\n",
   VAR_2, VAR_3, VAR_4);
  break;
 }
}
