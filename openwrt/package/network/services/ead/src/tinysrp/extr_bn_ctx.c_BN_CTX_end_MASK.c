
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ depth; int * pos; int tos; scalar_t__ too_many; } ;
typedef TYPE_1__ BN_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

void FUNC_2(BN_CTX *VAR_1)
 {
 if (VAR_1 == ((void*)0)) return;
 FUNC_1(VAR_1->depth > 0);
 if (VAR_1->depth == 0)



  FUNC_0(VAR_1);

 VAR_1->too_many = 0;
 VAR_1->depth--;
 if (VAR_1->depth < VAR_0)
  VAR_1->tos = VAR_1->pos[VAR_1->depth];
 }
