
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t depth; int tos; int * pos; } ;
typedef TYPE_1__ BN_CTX ;


 size_t VAR_0 ;

void FUNC_0(BN_CTX *VAR_1)
 {
 if (VAR_1->depth < VAR_0)
  VAR_1->pos[VAR_1->depth] = VAR_1->tos;
 VAR_1->depth++;
 }
