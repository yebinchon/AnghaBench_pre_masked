
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int* cs; } ;
struct TYPE_15__ {int tag; } ;
typedef TYPE_1__ TTree ;
typedef TYPE_2__ Charset ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7 (TTree *VAR_2, const Charset *VAR_3, Charset *VAR_4) {
 tailcall:
  switch (VAR_2->tag) {
    case 138: case 129: case 142: {
      FUNC_6(VAR_2, VAR_4);
      return 0;
    }
    case 128: {
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] = VAR_3->cs[VAR_1]);
      return 1;
    }
    case 136: {
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] = 0);
      return 0;
    }
    case 137: {
      Charset VAR_5;
      int VAR_6 = FUNC_7(FUNC_4(VAR_2), VAR_3, VAR_4);
      int VAR_7 = FUNC_7(FUNC_5(VAR_2), VAR_3, &VAR_5);
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] |= VAR_5.cs[VAR_1]);
      return VAR_6 | VAR_7;
    }
    case 130: {
      if (!FUNC_3(FUNC_4(VAR_2))) {


        VAR_2 = FUNC_4(VAR_2); VAR_3 = VAR_0; goto tailcall;
      }
      else {
        Charset VAR_8;
        int VAR_9 = FUNC_7(FUNC_5(VAR_2), VAR_3, &VAR_8);
        int VAR_10 = FUNC_7(FUNC_4(VAR_2), &VAR_8, VAR_4);
        if (VAR_10 == 0) return 0;
        else if ((VAR_10 | VAR_9) & 2)
          return 2;
        else return VAR_9;
      }
    }
    case 133: {
      FUNC_7(FUNC_4(VAR_2), VAR_3, VAR_4);
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] |= VAR_3->cs[VAR_1]);
      return 1;
    }
    case 139: case 135: case 132: {

      VAR_2 = FUNC_4(VAR_2); goto tailcall;
    }
    case 131: {
      int VAR_11 = FUNC_7(FUNC_4(VAR_2), VAR_0, VAR_4);
      if (VAR_11) return 2;
      else return 0;
    }
    case 140: {

      VAR_2 = FUNC_5(VAR_2); goto tailcall;
    }
    case 143: {
      int VAR_12 = FUNC_7(FUNC_4(VAR_2), VAR_3, VAR_4);
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] &= VAR_3->cs[VAR_1]);
      return VAR_12;
    }
    case 134: {
      if (FUNC_6(FUNC_4(VAR_2), VAR_4)) {
        FUNC_1(VAR_4);
        return 1;
      }

    }
    case 141: {

      int VAR_13 = FUNC_7(FUNC_4(VAR_2), VAR_3, VAR_4);
      FUNC_2(VAR_1, VAR_4->cs[VAR_1] = VAR_3->cs[VAR_1]);
      return VAR_13 | 1;
    }
    default: FUNC_0(0); return 0;
  }
}
