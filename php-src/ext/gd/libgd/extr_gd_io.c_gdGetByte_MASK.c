
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* getC ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (int *VAR_0, gdIOCtx * VAR_1)
{
 int VAR_2;
 VAR_2 = (VAR_1->getC) (VAR_1);
 FUNC_0(VAR_2);
 *VAR_0 = VAR_2;
 return 1;
}
