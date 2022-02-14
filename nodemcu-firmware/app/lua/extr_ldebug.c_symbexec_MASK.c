
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sizecode; int sizek; int nups; int sizep; int is_vararg; int * code; TYPE_1__** p; int * k; } ;
struct TYPE_8__ {int nups; } ;
typedef TYPE_2__ Proto ;
typedef int OpCode ;
typedef int Instruction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__ const*,int,int ) ;
 int FUNC_8 (TYPE_2__ const*,int) ;
 int FUNC_9 (TYPE_2__ const*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;



 int FUNC_13 (TYPE_2__ const*) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static Instruction FUNC_17 (const Proto *VAR_8, int VAR_9, int VAR_10) {
  int VAR_11;
  int VAR_12;
  VAR_12 = VAR_8->sizecode-1;
  FUNC_6(FUNC_13(VAR_8));
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
    Instruction VAR_13 = VAR_8->code[VAR_11];
    OpCode VAR_14 = FUNC_5(VAR_13);
    int VAR_15 = FUNC_0(VAR_13);
    int VAR_16 = 0;
    int VAR_17 = 0;
    FUNC_6(VAR_14 < VAR_2);
    FUNC_9(VAR_8, VAR_15);
    switch (FUNC_12(VAR_14)) {
      case 130: {
        VAR_16 = FUNC_1(VAR_13);
        VAR_17 = FUNC_3(VAR_13);
        FUNC_6(FUNC_7(VAR_8, VAR_16, FUNC_10(VAR_14)));
        FUNC_6(FUNC_7(VAR_8, VAR_17, FUNC_11(VAR_14)));
        break;
      }
      case 129: {
        VAR_16 = FUNC_2(VAR_13);
        if (FUNC_10(VAR_14) == VAR_4) FUNC_6(VAR_16 < VAR_8->sizek);
        break;
      }
      case 128: {
        VAR_16 = FUNC_4(VAR_13);
        if (FUNC_10(VAR_14) == VAR_5) {
          int VAR_18 = VAR_11+1+VAR_16;
          FUNC_6(0 <= VAR_18 && VAR_18 < VAR_8->sizecode);
          if (VAR_18 > 0) {
            int VAR_19;




            for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
              Instruction VAR_20 = VAR_8->code[VAR_18-1-VAR_19];
              if (!(FUNC_5(VAR_20) == 135 && FUNC_3(VAR_20) == 0)) break;
            }


            FUNC_6((VAR_19&1) == 0);
          }
        }
        break;
      }
    }
    if (FUNC_14(VAR_14)) {
      if (VAR_15 == VAR_10) VAR_12 = VAR_11;
    }
    if (FUNC_15(VAR_14)) {
      FUNC_6(VAR_11+2 < VAR_8->sizecode);
      FUNC_6(FUNC_5(VAR_8->code[VAR_11+1]) == 141);
    }
    switch (VAR_14) {
      case 140: {
        if (VAR_17 == 1) {
          FUNC_6(VAR_11+2 < VAR_8->sizecode);
          FUNC_6(FUNC_5(VAR_8->code[VAR_11+1]) != 135 ||
                FUNC_3(VAR_8->code[VAR_11+1]) != 0);
        }
        break;
      }
      case 139: {
        if (VAR_15 <= VAR_10 && VAR_10 <= VAR_16)
          VAR_12 = VAR_11;
        break;
      }
      case 142:
      case 134: {
        FUNC_6(VAR_16 < VAR_8->nups);
        break;
      }
      case 143:
      case 136: {
        FUNC_6(FUNC_16(&VAR_8->k[VAR_16]));
        break;
      }
      case 137: {
        FUNC_9(VAR_8, VAR_15+1);
        if (VAR_10 == VAR_15+1) VAR_12 = VAR_11;
        break;
      }
      case 146: {
        FUNC_6(VAR_16 < VAR_17);
        break;
      }
      case 132: {
        FUNC_6(VAR_17 >= 1);
        FUNC_9(VAR_8, VAR_15+2+VAR_17);
        if (VAR_10 >= VAR_15+2) VAR_12 = VAR_11;
        break;
      }
      case 145:
      case 144:
        FUNC_9(VAR_8, VAR_15+3);

      case 141: {
        int VAR_21 = VAR_11+1+VAR_16;

        if (VAR_10 != VAR_1 && VAR_11 < VAR_21 && VAR_21 <= VAR_9)
          VAR_11 += VAR_16;
        break;
      }
      case 148:
      case 133: {
        if (VAR_16 != 0) {
          FUNC_9(VAR_8, VAR_15+VAR_16-1);
        }
        VAR_17--;
        if (VAR_17 == VAR_0) {
          FUNC_6(FUNC_8(VAR_8, VAR_11));
        }
        else if (VAR_17 != 0)
          FUNC_9(VAR_8, VAR_15+VAR_17-1);
        if (VAR_10 >= VAR_15) VAR_12 = VAR_11;
        break;
      }
      case 138: {
        VAR_16--;
        if (VAR_16 > 0) FUNC_9(VAR_8, VAR_15+VAR_16-1);
        break;
      }
      case 135: {
        if (VAR_16 > 0) FUNC_9(VAR_8, VAR_15 + VAR_16);
        if (VAR_17 == 0) {
          VAR_11++;
          FUNC_6(VAR_11 < VAR_8->sizecode - 1);
        }
        break;
      }
      case 147: {
        int VAR_22, VAR_23;
        FUNC_6(VAR_16 < VAR_8->sizep);
        VAR_22 = VAR_8->p[VAR_16]->nups;
        FUNC_6(VAR_11 + VAR_22 < VAR_8->sizecode);
        for (VAR_23 = 1; VAR_23 <= VAR_22; VAR_23++) {
          OpCode VAR_24 = FUNC_5(VAR_8->code[VAR_11 + VAR_23]);
          FUNC_6(VAR_24 == 142 || VAR_24 == VAR_3);
        }
        if (VAR_10 != VAR_1)
          VAR_11 += VAR_22;
        break;
      }
      case 131: {
        FUNC_6((VAR_8->is_vararg & VAR_6) &&
             !(VAR_8->is_vararg & VAR_7));
        VAR_16--;
        if (VAR_16 == VAR_0) FUNC_6(FUNC_8(VAR_8, VAR_11));
        FUNC_9(VAR_8, VAR_15+VAR_16-1);
        break;
      }
      default: break;
    }
  }
  return VAR_8->code[VAR_12];
}
