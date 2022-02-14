
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MCI_SR; int MCI_IMR; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;

void FUNC_1(void)
{
 int VAR_2;

 VAR_2 = ( VAR_0->MCI_SR & VAR_0->MCI_IMR );

 FUNC_0(&VAR_1,VAR_2);
}
