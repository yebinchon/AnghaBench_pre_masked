
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_12__ {int tag; } ;
struct TYPE_11__ {int key; int tag; } ;
typedef TYPE_1__ TTree ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,size_t,char const*) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int,size_t*) ;
 int FUNC_8 (int *,int) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 TYPE_1__* FUNC_10 (int *,int ) ;
 TYPE_1__* FUNC_11 (int *,int) ;
 TYPE_1__* FUNC_12 (int *,int) ;
 TYPE_2__* FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static TTree *FUNC_14 (lua_State *VAR_4, int VAR_5, int *VAR_6) {
  TTree *VAR_7;
  switch (FUNC_8(VAR_4, VAR_5)) {
    case 129: {
      size_t VAR_8;
      const char *VAR_9 = FUNC_7(VAR_4, VAR_5, &VAR_8);
      if (VAR_8 == 0)
        VAR_7 = FUNC_10(VAR_4, VAR_3);
      else {
        VAR_7 = FUNC_11(VAR_4, 2 * (VAR_8 - 1) + 1);
        FUNC_1(VAR_7, VAR_0, VAR_8, VAR_9);
      }
      break;
    }
    case 130: {
      int VAR_10 = FUNC_6(VAR_4, VAR_5);
      VAR_7 = FUNC_12(VAR_4, VAR_10);
      break;
    }
    case 132: {
      VAR_7 = (FUNC_5(VAR_4, VAR_5) ? FUNC_10(VAR_4, VAR_3) : FUNC_10(VAR_4, VAR_1));
      break;
    }
    case 128: {
      VAR_7 = FUNC_9(VAR_4, VAR_5);
      break;
    }
    case 131: {
      VAR_7 = FUNC_11(VAR_4, 2);
      VAR_7->tag = VAR_2;
      VAR_7->key = FUNC_0(VAR_4, 0, VAR_5);
      FUNC_13(VAR_7)->tag = VAR_3;
      break;
    }
    default: {
      return FUNC_3(VAR_4, VAR_5, VAR_6);
    }
  }
  FUNC_4(VAR_4, VAR_5);
  if (VAR_6)
    *VAR_6 = FUNC_2(VAR_4, VAR_5);
  return VAR_7;
}
