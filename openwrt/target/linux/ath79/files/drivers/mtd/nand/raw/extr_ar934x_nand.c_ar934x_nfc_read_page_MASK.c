
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int strength; int steps; int total; } ;
struct nand_chip {TYPE_1__ ecc; int * oob_poi; } ;
struct TYPE_4__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; int writesize; int oobsize; } ;
struct ar934x_nfc {size_t ecc_oob_pos; int ecc_thres; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar934x_nfc*) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,int ) ;
 int FUNC_3 (struct ar934x_nfc*,int ,int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 struct ar934x_nfc* FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct ar934x_nfc*,char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_5, struct nand_chip *VAR_6,
    u8 *VAR_7, int VAR_8, int VAR_9)
{
 struct ar934x_nfc *VAR_10 = FUNC_6(VAR_5);
 u32 VAR_11;
 int VAR_12 = 0;
 bool VAR_13;
 bool VAR_14;
 int VAR_15;

 FUNC_7(VAR_10, "read_page: page:%d oob:%d\n", VAR_9, VAR_8);

 FUNC_1(VAR_10);
 VAR_15 = FUNC_3(VAR_10, VAR_4, 0, VAR_9,
       VAR_5->writesize);
 FUNC_0(VAR_10);

 if (VAR_15)
  return VAR_15;


 FUNC_5(VAR_7, VAR_10->buf, VAR_5->writesize);


 VAR_11 = FUNC_2(VAR_10, VAR_3);
 VAR_13 = VAR_11 & VAR_2;
 VAR_14 = VAR_11 & VAR_0;

 if (VAR_8 || VAR_13) {
  VAR_15 = FUNC_3(VAR_10, VAR_4, VAR_5->writesize,
        VAR_9, VAR_5->oobsize);
  if (VAR_15)
   return VAR_15;

  if (VAR_8)
   FUNC_5(VAR_6->oob_poi, VAR_10->buf, VAR_5->oobsize);
 }

 if (VAR_13) {
  if (!FUNC_4(&VAR_10->buf[VAR_10->ecc_oob_pos], VAR_6->ecc.total) ||
      !FUNC_4(VAR_7, VAR_5->writesize))
    VAR_5->ecc_stats.failed++;
 } else if (VAR_14) {





  if (VAR_11 & VAR_1) {




   VAR_12 = VAR_6->ecc.strength * VAR_6->ecc.steps;
  } else {
   VAR_12 = VAR_10->ecc_thres * VAR_6->ecc.steps;
  }

  VAR_5->ecc_stats.corrected += VAR_12;
 }

 return VAR_12;
}
