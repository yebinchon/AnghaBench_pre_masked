
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_8__ {int tag; int key; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int*,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1, TTree *VAR_2, int *VAR_3, int VAR_4,
                       int VAR_5) {
 tailcall:
  switch (VAR_2->tag) {
    case 138: case 129: case 142:
    case 136:
      return VAR_5;
    case 128:
    case 141:
      return 1;
    case 134: case 143: case 133:

      VAR_2 = FUNC_2(VAR_2); VAR_5 = 1; goto tailcall;
    case 139: case 131:

      VAR_2 = FUNC_2(VAR_2); goto tailcall;
    case 140:

      VAR_2 = FUNC_3(VAR_2); goto tailcall;
    case 130:
      if (!FUNC_5(VAR_1, FUNC_2(VAR_2), VAR_3, VAR_4, 0))
        return VAR_5;

      VAR_2 = FUNC_3(VAR_2); goto tailcall;
    case 137:
      VAR_5 = FUNC_5(VAR_1, FUNC_2(VAR_2), VAR_3, VAR_4, VAR_5);

      VAR_2 = FUNC_3(VAR_2); goto tailcall;
    case 132:
      if (VAR_4 >= VAR_0)
        return FUNC_4(VAR_1, VAR_3, VAR_4);
      else {
        VAR_3[VAR_4++] = VAR_2->key;

        VAR_2 = FUNC_2(VAR_2); goto tailcall;
      }
    case 135:
      return FUNC_1(VAR_2);
    default: FUNC_0(0); return 0;
  }
}
