
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; struct TYPE_5__* d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BIGNUM *VAR_3)
 {
 if (VAR_3 == ((void*)0)) return;
 if ((VAR_3->d != ((void*)0)) && !(FUNC_0(VAR_3,VAR_2)))
  FUNC_1(VAR_3->d);
 VAR_3->flags|=VAR_0;
 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_3);
 }
