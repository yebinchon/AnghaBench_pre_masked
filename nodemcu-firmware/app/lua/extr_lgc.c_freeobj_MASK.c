
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int lua_State ;
struct TYPE_15__ {int gch; } ;
struct TYPE_14__ {int nuse; } ;
struct TYPE_13__ {TYPE_1__ strt; int * mainthread; } ;
typedef TYPE_2__ GCObject ;


 TYPE_12__* FUNC_0 (int *) ;







 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,TYPE_2__*,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19 (lua_State *VAR_0, GCObject *VAR_1) {
  switch (FUNC_8(&VAR_1->gch)) {
    case 133:
      FUNC_16(!FUNC_9(&(VAR_1->gch)));
      FUNC_12(VAR_0, FUNC_3(VAR_1));
      break;
    case 134: FUNC_11(VAR_0, FUNC_1(VAR_1)); break;
    case 129: FUNC_13(VAR_0, FUNC_7(VAR_1)); break;
    case 131: FUNC_14(VAR_0, FUNC_2(VAR_1)); break;
    case 130: {
      FUNC_16(FUNC_4(VAR_1) != VAR_0 && FUNC_4(VAR_1) != FUNC_0(VAR_0)->mainthread);
      FUNC_10(VAR_0, FUNC_4(VAR_1));
      break;
    }
    case 132: {
      FUNC_16(!FUNC_9(&(VAR_1->gch)));
      FUNC_0(VAR_0)->strt.nuse--;
      FUNC_15(VAR_0, VAR_1, FUNC_17(FUNC_5(VAR_1)));
      break;
    }
    case 128: {
      FUNC_15(VAR_0, VAR_1, FUNC_18(FUNC_6(VAR_1)));
      break;
    }
    default: FUNC_16(0);
  }
}
