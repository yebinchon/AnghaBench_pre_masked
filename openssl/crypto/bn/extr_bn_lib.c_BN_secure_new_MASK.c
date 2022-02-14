
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

BIGNUM *FUNC_1(void)
 {
     BIGNUM *VAR_1 = FUNC_0();
     if (VAR_1 != ((void*)0))
         VAR_1->flags |= VAR_0;
     return VAR_1;
 }
