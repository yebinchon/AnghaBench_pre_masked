
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_ssi_regvals {int srcr; int stcr; int sier; int scr; } ;
struct fsl_ssi {int streams; int regs; int dev; scalar_t__ use_dma; TYPE_1__* soc; struct fsl_ssi_regvals* regvals; } ;
struct TYPE_2__ {scalar_t__ offline_config; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct fsl_ssi *VAR_9, bool VAR_10)
{
 struct fsl_ssi_regvals *VAR_11 = VAR_9->regvals;
 int VAR_12 = VAR_10 ? VAR_8 : VAR_6;
 u32 VAR_13, VAR_14, VAR_15;


 FUNC_5(VAR_9->regs, VAR_3,
      FUNC_2(VAR_10), FUNC_2(VAR_10));






 if (VAR_9->soc->offline_config && VAR_9->streams)
  goto enable_scr;

 if (VAR_9->soc->offline_config) {




  VAR_14 = VAR_11[VAR_6].srcr | VAR_11[VAR_8].srcr;
  VAR_15 = VAR_11[VAR_6].stcr | VAR_11[VAR_8].stcr;
  VAR_13 = VAR_11[VAR_6].sier | VAR_11[VAR_8].sier;
 } else {

  VAR_14 = VAR_11[VAR_12].srcr;
  VAR_15 = VAR_11[VAR_12].stcr;
  VAR_13 = VAR_11[VAR_12].sier;
 }


 FUNC_5(VAR_9->regs, VAR_4, VAR_14, VAR_14);
 FUNC_5(VAR_9->regs, VAR_5, VAR_15, VAR_15);
 FUNC_5(VAR_9->regs, VAR_2, VAR_13, VAR_13);

enable_scr:






 if (VAR_9->use_dma && VAR_10) {
  int VAR_16 = 100;
  u32 VAR_17;


  FUNC_5(VAR_9->regs, VAR_0,
       VAR_7, VAR_7);


  do {
   FUNC_4(VAR_9->regs, VAR_1, &VAR_17);
   if (FUNC_1(VAR_17))
    break;
  } while (--VAR_16);


  if (!FUNC_1(VAR_17))
   FUNC_3(VAR_9->dev, "Timeout waiting TX FIFO filling\n");
 }

 FUNC_5(VAR_9->regs, VAR_0,
      VAR_11[VAR_12].scr, VAR_11[VAR_12].scr);


 VAR_9->streams |= FUNC_0(VAR_12);
}
