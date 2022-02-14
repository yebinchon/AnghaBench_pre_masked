
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* PagePrecedes ) (int,int) ;} ;
typedef TYPE_1__* SlruCtl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

bool
FUNC_1(SlruCtl VAR_1, char *VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5 = *(int *) VAR_4;

 VAR_5 -= VAR_5 % VAR_0;

 if (VAR_1->PagePrecedes(VAR_3, VAR_5))
  return 1;

 return 0;
}
