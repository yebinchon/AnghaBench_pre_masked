
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nval; } ;
struct TYPE_10__ {TYPE_1__ u; int k; int f; int t; } ;
typedef TYPE_2__ expdesc ;
typedef int UnOpr ;
typedef int FuncState ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ) ;

void FUNC_5 (FuncState *VAR_4, UnOpr VAR_5, expdesc *VAR_6) {
  expdesc VAR_7;
  VAR_7 = VAR_7 = VAR_0; VAR_7 = VAR_3; VAR_7 = 0;
  switch (VAR_5) {
    case 129: {
      if (!FUNC_2(VAR_6))
        FUNC_3(VAR_4, VAR_6);
      FUNC_0(VAR_4, VAR_2, VAR_6, &VAR_7);
      break;
    }
    case 128: FUNC_1(VAR_4, VAR_6); break;
    case 130: {
      FUNC_3(VAR_4, VAR_6);
      FUNC_0(VAR_4, VAR_1, VAR_6, &VAR_7);
      break;
    }
    default: FUNC_4(0);
  }
}
