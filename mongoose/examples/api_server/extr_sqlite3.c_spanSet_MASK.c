
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n; int * z; } ;
typedef TYPE_1__ Token ;
struct TYPE_7__ {int * zEnd; int * zStart; } ;
typedef TYPE_2__ ExprSpan ;



__attribute__((used)) static void FUNC_0(ExprSpan *VAR_0, Token *VAR_1, Token *VAR_2){
    VAR_0->zStart = VAR_1->z;
    VAR_0->zEnd = &VAR_2->z[VAR_2->n];
  }
