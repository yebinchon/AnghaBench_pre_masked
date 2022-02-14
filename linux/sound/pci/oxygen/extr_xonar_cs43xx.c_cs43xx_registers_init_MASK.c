
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_cs43xx {int* cs4398_regs; int* cs4362a_regs; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct oxygen*,int,int) ;
 int FUNC_1 (struct oxygen*,int,int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_12)
{
 struct xonar_cs43xx *VAR_13 = VAR_12->model_data;
 unsigned int VAR_14;


 FUNC_1(VAR_12, 8, VAR_10 | VAR_11);
 FUNC_0(VAR_12, 0x01, VAR_4 | VAR_1);

 FUNC_1(VAR_12, 2, VAR_13->cs4398_regs[2]);
 FUNC_1(VAR_12, 3, VAR_9 | VAR_8);
 FUNC_1(VAR_12, 4, VAR_13->cs4398_regs[4]);
 FUNC_1(VAR_12, 5, VAR_13->cs4398_regs[5]);
 FUNC_1(VAR_12, 6, VAR_13->cs4398_regs[6]);
 FUNC_1(VAR_12, 7, VAR_13->cs4398_regs[7]);
 FUNC_0(VAR_12, 0x02, VAR_2);
 FUNC_0(VAR_12, 0x03, VAR_3 | VAR_0 |
        VAR_5 | VAR_7 | VAR_6);
 FUNC_0(VAR_12, 0x04, VAR_13->cs4362a_regs[0x04]);
 FUNC_0(VAR_12, 0x05, 0);
 for (VAR_14 = 6; VAR_14 <= 14; ++VAR_14)
  FUNC_0(VAR_12, VAR_14, VAR_13->cs4362a_regs[VAR_14]);

 FUNC_1(VAR_12, 8, VAR_10);
 FUNC_0(VAR_12, 0x01, VAR_1);
}
