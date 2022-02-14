
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mcbsp_reg_cfg {int spcr2; int spcr1; int rcr2; int rcr1; int xcr2; int xcr1; int srgr2; int srgr1; int mcr2; int mcr1; int pcr0; int xccr; int rccr; } ;
struct omap_mcbsp {scalar_t__ irq; TYPE_1__* pdata; int phys_base; int id; int dev; } ;
struct TYPE_2__ {scalar_t__ has_wakeup; scalar_t__ has_ccr; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_mcbsp*,int ,int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct omap_mcbsp *VAR_23,
         const struct omap_mcbsp_reg_cfg *VAR_24)
{
 FUNC_1(VAR_23->dev, "Configuring McBSP%d  phys_base: 0x%08lx\n",
  VAR_23->id, VAR_23->phys_base);


 FUNC_0(VAR_23, VAR_12, VAR_24->spcr2);
 FUNC_0(VAR_23, VAR_11, VAR_24->spcr1);
 FUNC_0(VAR_23, VAR_6, VAR_24->rcr2);
 FUNC_0(VAR_23, VAR_5, VAR_24->rcr1);
 FUNC_0(VAR_23, VAR_18, VAR_24->xcr2);
 FUNC_0(VAR_23, VAR_17, VAR_24->xcr1);
 FUNC_0(VAR_23, VAR_14, VAR_24->srgr2);
 FUNC_0(VAR_23, VAR_13, VAR_24->srgr1);
 FUNC_0(VAR_23, VAR_2, VAR_24->mcr2);
 FUNC_0(VAR_23, VAR_1, VAR_24->mcr1);
 FUNC_0(VAR_23, VAR_3, VAR_24->pcr0);
 if (VAR_23->pdata->has_ccr) {
  FUNC_0(VAR_23, VAR_16, VAR_24->xccr);
  FUNC_0(VAR_23, VAR_4, VAR_24->rccr);
 }

 if (VAR_23->pdata->has_wakeup)
  FUNC_0(VAR_23, VAR_15, VAR_20 | VAR_8);


 if (VAR_23->irq)
  FUNC_0(VAR_23, VAR_0, VAR_9 | VAR_21 |
       VAR_10 | VAR_7 | VAR_22 | VAR_19);
}
