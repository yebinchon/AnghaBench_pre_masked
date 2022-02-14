
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* aux; void* info; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_8__ {int k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 void* VAR_4 ;


 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,int ,int ,void*,void*) ;
 void* FUNC_2 (int *,int ,int ,void*) ;
 int FUNC_3 (int *,TYPE_3__*) ;

void FUNC_4 (FuncState *VAR_5, expdesc *VAR_6) {
  switch (VAR_6->k) {
    case 130: {
      VAR_6->k = VAR_3;
      break;
    }
    case 129: {
      VAR_6->u.s.info = FUNC_1(VAR_5, VAR_2, 0, VAR_6->u.s.info, 0);
      VAR_6->k = VAR_4;
      break;
    }
    case 132: {
      VAR_6->u.s.info = FUNC_2(VAR_5, VAR_0, 0, VAR_6->u.s.info);
      VAR_6->k = VAR_4;
      break;
    }
    case 131: {
      FUNC_0(VAR_5, VAR_6->u.s.aux);
      FUNC_0(VAR_5, VAR_6->u.s.info);
      VAR_6->u.s.info = FUNC_1(VAR_5, VAR_1, 0, VAR_6->u.s.info, VAR_6->u.s.aux);
      VAR_6->k = VAR_4;
      break;
    }
    case 128:
    case 133: {
      FUNC_3(VAR_5, VAR_6);
      break;
    }
    default: break;
  }
}
