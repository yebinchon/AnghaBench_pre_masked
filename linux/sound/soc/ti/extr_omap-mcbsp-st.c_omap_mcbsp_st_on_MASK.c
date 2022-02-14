
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_mcbsp {TYPE_2__* st_data; TYPE_1__* pdata; } ;
struct TYPE_4__ {int mcbsp_iclk; } ;
struct TYPE_3__ {int (* force_ick_on ) (int ,int) ;} ;


 unsigned int FUNC_0 (struct omap_mcbsp*,int ) ;
 unsigned int FUNC_1 (struct omap_mcbsp*,int ) ;
 int FUNC_2 (struct omap_mcbsp*,int ,unsigned int) ;
 int FUNC_3 (struct omap_mcbsp*,int ,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct omap_mcbsp *VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5->pdata->force_ick_on)
  VAR_5->pdata->force_ick_on(VAR_5->st_data->mcbsp_iclk, 1);


 VAR_6 = FUNC_1(VAR_5, VAR_4);
 FUNC_2(VAR_5, VAR_4, VAR_6 & ~(VAR_2));


 VAR_6 = FUNC_0(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_1, VAR_6 | VAR_0);


 VAR_6 = FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_5, VAR_1, VAR_6 | VAR_3);
}
