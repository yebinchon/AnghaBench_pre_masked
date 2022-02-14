
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vt; int idx; int t; } ;
struct TYPE_9__ {TYPE_1__ ind; int info; } ;
struct TYPE_10__ {scalar_t__ k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4 (FuncState *VAR_3, expdesc *VAR_4, expdesc *VAR_5) {
  FUNC_2(!FUNC_0(VAR_4) && (FUNC_3(VAR_4->k) || VAR_4->k == VAR_2));
  VAR_4->u.ind.t = VAR_4->u.info;
  VAR_4->u.ind.idx = FUNC_1(VAR_3, VAR_5);
  VAR_4->u.ind.vt = (VAR_4->k == VAR_2) ? VAR_2 : VAR_1;
  VAR_4->k = VAR_0;
}
