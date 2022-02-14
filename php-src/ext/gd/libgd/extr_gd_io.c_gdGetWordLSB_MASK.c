
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* getC ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(signed short int *VAR_1, gdIOCtx *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 VAR_4 = (VAR_2->getC) (VAR_2);
 if (VAR_4 == VAR_0) {
  return 0;
 }

 VAR_3 = (VAR_2->getC) (VAR_2);
 if (VAR_3 == VAR_0) {
  return 0;
 }

 if (VAR_1) {
  *VAR_1 = (VAR_3 << 8) | VAR_4;
 }

 return 1;
}
