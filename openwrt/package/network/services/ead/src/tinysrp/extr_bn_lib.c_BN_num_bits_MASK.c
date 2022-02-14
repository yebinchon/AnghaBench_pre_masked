
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; scalar_t__* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const BIGNUM *VAR_1)
 {
 BN_ULONG VAR_2;
 int VAR_3;

 FUNC_2(VAR_1);

 if (VAR_1->top == 0) return(0);
 VAR_2=VAR_1->d[VAR_1->top-1];
 FUNC_1(VAR_2 != 0);
 VAR_3=(VAR_1->top-1)*VAR_0;
 return(VAR_3+FUNC_0(VAR_2));
 }
