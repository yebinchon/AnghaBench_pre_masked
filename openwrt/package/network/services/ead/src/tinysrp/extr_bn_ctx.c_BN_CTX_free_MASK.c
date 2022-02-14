
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ depth; int flags; int * bn; } ;
typedef TYPE_1__ BN_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(BN_CTX *VAR_2)
 {
 int VAR_3;

 if (VAR_2 == ((void*)0)) return;
 FUNC_1(VAR_2->depth == 0);

 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&(VAR_2->bn[VAR_3]));
 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_2);
 }
