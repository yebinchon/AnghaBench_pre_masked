
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tag; } ;
typedef TYPE_1__ TTree ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int (*) (TYPE_1__*),int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

int FUNC_4 (TTree *VAR_0) {
  int VAR_1 = 0;
 tailcall:
  switch (VAR_0->tag) {
    case 139: case 129: case 143:
      return VAR_1 + 1;
    case 137: case 128: case 135: case 144: case 142:
      return VAR_1;
    case 133: case 131: case 134:
      return -1;
    case 140: case 132: case 136:

      VAR_0 = FUNC_2(VAR_0); goto tailcall;
    case 141: {
      int VAR_2 = FUNC_1(VAR_0, FUNC_4, -1);
      if (VAR_2 < 0)
        return -1;
      else
        return VAR_1 + VAR_2;
    }
    case 130: {
      int VAR_3 = FUNC_4(FUNC_2(VAR_0));
      if (VAR_3 < 0)
        return -1;

      VAR_1 += VAR_3; VAR_0 = FUNC_3(VAR_0); goto tailcall;
    }
    case 138: {
      int VAR_4 = FUNC_4(FUNC_2(VAR_0));
      int VAR_5 = FUNC_4(FUNC_3(VAR_0));
      if (VAR_4 != VAR_5 || VAR_4 < 0)
        return -1;
      else
        return VAR_1 + VAR_4;
    }
    default: FUNC_0(0); return 0;
  };
}
