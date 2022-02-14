
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expdesc ;
typedef int FuncState ;
typedef int BinOpr ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5 (FuncState *VAR_0, BinOpr VAR_1, expdesc *VAR_2) {
  switch (VAR_1) {
    case 141: {
      FUNC_3(VAR_0, VAR_2);
      break;
    }
    case 132: {
      FUNC_2(VAR_0, VAR_2);
      break;
    }
    case 137: {
      FUNC_1(VAR_0, VAR_2);
      break;
    }
    case 142: case 128:
    case 133: case 136: case 135:
    case 134: case 131:
    case 140: case 139: case 138:
    case 130: case 129: {
      if (!FUNC_4(VAR_2, ((void*)0)))
        FUNC_0(VAR_0, VAR_2);

      break;
    }
    default: {
      FUNC_0(VAR_0, VAR_2);
      break;
    }
  }
}
