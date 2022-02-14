
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
typedef int mrb_state ;
struct TYPE_9__ {int flags; int ilen; TYPE_5__* lv; int nlocals; int * syms; struct TYPE_9__** reps; scalar_t__ iseq; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 void* FUNC_0 (int*) ;
 size_t FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (TYPE_5__*,size_t,int,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int,int,TYPE_1__*) ;
 size_t FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_5, mrb_irep *VAR_6, int VAR_7, mrb_irep *VAR_8)
{
  int VAR_9;
  uint32_t VAR_10;
  uint16_t VAR_11;
  uint8_t VAR_12;
  mrb_code VAR_13;
  int VAR_14 = FUNC_2(VAR_6);
  mrb_code *VAR_15 = (mrb_code *)VAR_6->iseq;

  FUNC_3((VAR_6->flags & VAR_0) == 0);

  for (VAR_9 = 0; VAR_9 < VAR_6->ilen; ) {
    VAR_13 = VAR_15[VAR_9];
    switch(VAR_13){
    case 136:
      VAR_11 = FUNC_1(VAR_15+VAR_9+1);
      FUNC_7(VAR_5, VAR_6->reps[VAR_11], VAR_7 + 1, VAR_8);
      break;

    case 131:
    case 137:
      VAR_10 = FUNC_0(VAR_15+VAR_9+1);
      VAR_11 = FUNC_0(VAR_15+VAR_9+2);
      FUNC_7(VAR_5, VAR_6->reps[VAR_11], VAR_7 + 1, VAR_8);
      break;

    case 129:
      VAR_11 = FUNC_0(VAR_15+VAR_9+2);
      VAR_12 = FUNC_0(VAR_15+VAR_9+3);
      if (VAR_12 != 0) {
        break;
      }
      else {
        uint16_t VAR_16 = FUNC_6(VAR_5, VAR_6->syms[VAR_11], VAR_7);
        if (VAR_16 != 0) {

          VAR_15[VAR_9] = 132;
          VAR_15[VAR_9+2] = VAR_16 >> 8;
          VAR_15[VAR_9+3] = VAR_16 & 0xff;
        }
      }
      break;

    case 130:
      VAR_10 = FUNC_0(VAR_15+VAR_9+1);
      VAR_11 = FUNC_0(VAR_15+VAR_9+2);

      if (FUNC_4(VAR_6->lv, VAR_11, VAR_14, VAR_6->nlocals)) {
        uint16_t VAR_17 = FUNC_6(VAR_5, VAR_6->lv[VAR_11 - 1].name, VAR_7);
        if (VAR_17 != 0) {

          VAR_15[VAR_9] = VAR_13 = 132;
          VAR_15[VAR_9+2] = VAR_17 >> 8;
          VAR_15[VAR_9+3] = VAR_17 & 0xff;
        }
      }

      if (FUNC_4(VAR_6->lv, VAR_10, VAR_14, VAR_6->nlocals)) {
        uint16_t VAR_18 = FUNC_6(VAR_5, VAR_6->lv[VAR_10 - 1].name, VAR_7);
        if (VAR_18 != 0) {

          VAR_15[VAR_9] = VAR_13 = 128;
          VAR_15[VAR_9+1] = (mrb_code)VAR_11;
          VAR_15[VAR_9+2] = VAR_18 >> 8;
          VAR_15[VAR_9+3] = VAR_18 & 0xff;
        }
      }
      break;

    case 132:
      VAR_10 = FUNC_0(VAR_15+VAR_9+1);
      VAR_11 = FUNC_0(VAR_15+VAR_9+2);
      VAR_12 = FUNC_0(VAR_15+VAR_9+3);
      {
        int VAR_19 = VAR_12+1;
        mrb_irep *VAR_20 = FUNC_5(VAR_8, VAR_7, VAR_19, VAR_6);
        if (FUNC_4(VAR_20->lv, VAR_11, FUNC_2(VAR_20), VAR_20->nlocals)) {
          uint16_t VAR_21 = FUNC_6(VAR_5, VAR_20->lv[VAR_11-1].name, VAR_7);
          if (VAR_21 != 0) {

            VAR_15[VAR_9] = 132;
            VAR_15[VAR_9+2] = VAR_21 >> 8;
            VAR_15[VAR_9+3] = VAR_21 & 0xff;
          }
        }
      }
      break;

    case 128:
      VAR_10 = FUNC_0(VAR_15+VAR_9+1);
      VAR_11 = FUNC_0(VAR_15+VAR_9+2);
      VAR_12 = FUNC_0(VAR_15+VAR_9+3);
      {
        int VAR_22 = VAR_12+1;
        mrb_irep *VAR_23 = FUNC_5(VAR_8, VAR_7, VAR_22, VAR_6);
        if (FUNC_4(VAR_23->lv, VAR_11, FUNC_2(VAR_23), VAR_23->nlocals)) {
          uint16_t VAR_24 = FUNC_6(VAR_5, VAR_23->lv[VAR_11-1].name, VAR_7);
          if (VAR_24 != 0) {

            VAR_15[VAR_9] = 128;
            VAR_15[VAR_9+1] = VAR_10;
            VAR_15[VAR_9+2] = VAR_24 >> 8;
            VAR_15[VAR_9+3] = VAR_24 & 0xff;
          }
        }
      }
      break;

    case 135:
      VAR_13 = FUNC_0(VAR_15+VAR_9+1);
      VAR_9 += VAR_2[VAR_13]+1;
      continue;
    case 134:
      VAR_13 = FUNC_0(VAR_15+VAR_9+1);
      VAR_9 += VAR_3[VAR_13]+1;
      continue;
    case 133:
      VAR_13 = FUNC_0(VAR_15+VAR_9+1);
      VAR_9 += VAR_4[VAR_13]+1;
      continue;
    }
    VAR_9+=VAR_1[VAR_13];
  }
}
