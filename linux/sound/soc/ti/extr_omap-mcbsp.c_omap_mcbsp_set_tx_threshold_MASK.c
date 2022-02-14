
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_mcbsp {scalar_t__ max_tx_thres; } ;


 int FUNC_0 (struct omap_mcbsp*,int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct omap_mcbsp *VAR_1, u16 VAR_2)
{
 if (VAR_2 && VAR_2 <= VAR_1->max_tx_thres)
  FUNC_0(VAR_1, VAR_0, VAR_2 - 1);
}
