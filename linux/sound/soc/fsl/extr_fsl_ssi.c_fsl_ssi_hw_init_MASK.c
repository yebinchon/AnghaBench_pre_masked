
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_ssi {int dai_fmt; int regs; scalar_t__ use_dual_fifo; int fifo_watermark; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fsl_ssi*,int ) ;
 scalar_t__ FUNC_5 (struct fsl_ssi*) ;
 int FUNC_6 (struct fsl_ssi*) ;
 int FUNC_7 (struct fsl_ssi*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct fsl_ssi *VAR_3)
{
 u32 VAR_4 = VAR_3->fifo_watermark;


 FUNC_7(VAR_3);


 FUNC_9(VAR_3->regs, VAR_1,
       FUNC_2(VAR_4) | FUNC_0(VAR_4) |
       FUNC_3(VAR_4) | FUNC_1(VAR_4));


 if (VAR_3->use_dual_fifo)
  FUNC_8(VAR_3->regs, VAR_0,
       VAR_2, VAR_2);


 if (FUNC_5(VAR_3)) {
  FUNC_4(VAR_3, VAR_3->dai_fmt);
  FUNC_6(VAR_3);
 }

 return 0;
}
