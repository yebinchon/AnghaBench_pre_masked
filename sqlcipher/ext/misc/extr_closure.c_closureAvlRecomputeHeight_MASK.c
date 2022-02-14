
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {short imbalance; short height; TYPE_2__* pAfter; TYPE_1__* pBefore; } ;
typedef TYPE_3__ closure_avl ;
struct TYPE_6__ {short height; } ;
struct TYPE_5__ {short height; } ;



__attribute__((used)) static void FUNC_0(closure_avl *VAR_0){
  short int VAR_1 = VAR_0->pBefore ? VAR_0->pBefore->height : 0;
  short int VAR_2 = VAR_0->pAfter ? VAR_0->pAfter->height : 0;
  VAR_0->imbalance = VAR_1 - VAR_2;
  VAR_0->height = (VAR_1>VAR_2 ? VAR_1 : VAR_2)+1;
}
