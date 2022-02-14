
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dmax; struct TYPE_6__* d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(BIGNUM *VAR_2)
 {
 int VAR_3;

 if (VAR_2 == ((void*)0)) return;
 if (VAR_2->d != ((void*)0))
  {
  FUNC_2(VAR_2->d,0,VAR_2->dmax*sizeof(VAR_2->d[0]));
  if (!(FUNC_0(VAR_2,VAR_1)))
   FUNC_1(VAR_2->d);
  }
 VAR_3=FUNC_0(VAR_2,VAR_0);
 FUNC_2(VAR_2,0,sizeof(BIGNUM));
 if (VAR_3)
  FUNC_1(VAR_2);
 }
