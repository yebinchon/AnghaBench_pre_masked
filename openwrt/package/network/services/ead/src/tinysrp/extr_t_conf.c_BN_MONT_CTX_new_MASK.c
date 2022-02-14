
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ BN_MONT_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

BN_MONT_CTX *FUNC_2(void)
 {
 BN_MONT_CTX *VAR_1;

 if ((VAR_1=(BN_MONT_CTX *)FUNC_1(sizeof(BN_MONT_CTX))) == ((void*)0))
  return(((void*)0));

 FUNC_0(VAR_1);
 VAR_1->flags=VAR_0;
 return(VAR_1);
 }
