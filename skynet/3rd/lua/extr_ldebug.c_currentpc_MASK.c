
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int p; } ;
struct TYPE_8__ {int savedpc; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__ CallInfo ;


 TYPE_6__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4 (CallInfo *VAR_0) {
  FUNC_2(FUNC_1(VAR_0));
  return FUNC_3(VAR_0->u.l.savedpc, FUNC_0(VAR_0)->p);
}
