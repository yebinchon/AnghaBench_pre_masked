
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int lifs_period; int symbol_duration; int sifs_period; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wpan_phy *VAR_2)
{




 VAR_2->lifs_period = VAR_0 *
    VAR_2->symbol_duration;
 VAR_2->sifs_period = VAR_1 *
    VAR_2->symbol_duration;
}
