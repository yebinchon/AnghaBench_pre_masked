
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {int k; void* f; int t; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;



 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,void*) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_1, expdesc *VAR_2) {
  int VAR_3;
  FUNC_2(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 128: case 130: {
      VAR_3 = VAR_0;
      break;
    }
    case 129: {
      VAR_3 = VAR_2->u.s.info;
      break;
    }
    default: {
      VAR_3 = FUNC_0(VAR_1, VAR_2, 1);
      break;
    }
  }
  FUNC_1(VAR_1, &VAR_2->t, VAR_3);
  FUNC_3(VAR_1, VAR_2->f);
  VAR_2->f = VAR_0;
}
