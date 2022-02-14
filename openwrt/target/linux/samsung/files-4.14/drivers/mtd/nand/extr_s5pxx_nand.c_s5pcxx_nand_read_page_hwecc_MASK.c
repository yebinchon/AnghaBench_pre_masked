
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int bytes; int steps; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int (* calculate ) (struct mtd_info*,int *,int *) ;int (* hwctl ) (struct mtd_info*,int ) ;int (* read_oob ) (struct mtd_info*,struct nand_chip*,int) ;} ;
struct nand_chip {TYPE_1__ ecc; int (* write_buf ) (struct mtd_info*,int *,int) ;int (* read_buf ) (struct mtd_info*,int *,int) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;int * oob_poi; } ;
struct mtd_oob_region {int offset; } ;
struct TYPE_4__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int) ;
 int FUNC_2 (struct mtd_info*,int ,int,int) ;
 int FUNC_3 (struct mtd_info*,int ) ;
 int FUNC_4 (struct mtd_info*,int *,int) ;
 int FUNC_5 (struct mtd_info*,int *,int) ;
 int FUNC_6 (struct mtd_info*,int *,int *) ;
 int FUNC_7 (struct mtd_info*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_2, struct nand_chip *VAR_3,
    uint8_t *VAR_4, int VAR_5, int VAR_6)
{
 struct mtd_oob_region VAR_7 = { };
  int VAR_8, VAR_9 = VAR_3->ecc.size;
    int VAR_10 = VAR_3->ecc.bytes;
    int VAR_11 = VAR_3->ecc.steps;
    uint8_t *VAR_12;
    int VAR_13, VAR_14;


    VAR_3->ecc.read_oob(VAR_2, VAR_3, VAR_6);
    FUNC_0(VAR_2, 0, &VAR_7);
  VAR_12 = VAR_3->oob_poi + VAR_7.offset;

    for (VAR_8 = 0, VAR_13 = 0; VAR_11; VAR_11--, VAR_8 += VAR_10, VAR_4 += VAR_9, VAR_13 += VAR_9) {
        VAR_3->cmdfunc(VAR_2, VAR_0, VAR_13, -1);
        VAR_3->ecc.hwctl(VAR_2, VAR_1);
        VAR_3->read_buf(VAR_2, VAR_4, VAR_9);
        VAR_3->write_buf(VAR_2, VAR_12 + VAR_8, VAR_10);
        VAR_3->ecc.calculate(VAR_2, ((void*)0), ((void*)0));
        VAR_14 = VAR_3->ecc.correct(VAR_2, VAR_4, ((void*)0), ((void*)0));
        if (VAR_14 < 0)
            VAR_2->ecc_stats.failed++;
        else
            VAR_2->ecc_stats.corrected += VAR_14;
    }
    return 0;
}
