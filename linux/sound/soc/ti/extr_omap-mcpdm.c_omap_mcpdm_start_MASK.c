
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_mcpdm {TYPE_1__* config; } ;
struct TYPE_2__ {int link_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_mcpdm*,int ) ;
 int FUNC_1 (struct omap_mcpdm*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct omap_mcpdm *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);
 u32 VAR_5 = VAR_3->config[0].link_mask | VAR_3->config[1].link_mask;

 VAR_4 |= (VAR_1 | VAR_2);
 FUNC_1(VAR_3, VAR_0, VAR_4);

 VAR_4 |= VAR_5;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 VAR_4 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
