
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int lua_State ;
typedef int byte ;
struct TYPE_30__ {char const* s; int ptop; TYPE_4__* ocap; int * L; } ;
struct TYPE_29__ {char const* s; int siz; int kind; int idx; } ;
struct TYPE_26__ {int aux; int key; int code; } ;
struct TYPE_28__ {TYPE_1__ i; int buff; } ;
struct TYPE_27__ {char const* s; int caplevel; TYPE_3__ const* p; } ;
typedef TYPE_2__ Stack ;
typedef int Opcode ;
typedef TYPE_3__ const Instruction ;
typedef TYPE_4__ Capture ;
typedef TYPE_5__ CapState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (char const*,TYPE_4__*,int,int) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int *,TYPE_4__*,int,int,int) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__**,int) ;
 int FUNC_4 (TYPE_3__ const*) ;
 int FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (TYPE_3__ const*) ;
 TYPE_2__* FUNC_7 (int *,int) ;
 TYPE_3__ const VAR_6 ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_14 (int *,TYPE_4__*,int,int) ;
 int FUNC_15 (int *,int,int,int) ;
 int FUNC_16 (TYPE_5__*,TYPE_4__*,char const*,int*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,int) ;

const char *FUNC_19 (lua_State *VAR_7, const char *VAR_8, const char *VAR_9, const char *VAR_10,
                   Instruction *VAR_11, Capture *VAR_12, int VAR_13) {
  Stack VAR_14[VAR_2];
  Stack *VAR_15 = VAR_14 + VAR_2;
  Stack *VAR_16 = VAR_14;
  int VAR_17 = VAR_3;
  int VAR_18 = 0;
  int VAR_19 = 0;
  const Instruction *VAR_20 = VAR_11;
  VAR_16->p = &VAR_6; VAR_16->s = VAR_9; VAR_16->caplevel = 0; VAR_16++;
  FUNC_10(VAR_7, VAR_14);
  for (;;) {







    FUNC_1(FUNC_17(VAR_13) + VAR_19 == FUNC_9(VAR_7) && VAR_19 <= VAR_18);
    switch ((Opcode)VAR_20->i.code) {
      case 141: {
        FUNC_1(VAR_16 == FUNC_7(VAR_7, VAR_13) + 1);
        VAR_12[VAR_18].kind = VAR_1;
        VAR_12[VAR_18].s = ((void*)0);
        return VAR_9;
      }
      case 137: {
        FUNC_1(VAR_16 == FUNC_7(VAR_7, VAR_13));
        return ((void*)0);
      }
      case 133: {
        FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13) && (VAR_16 - 1)->s == ((void*)0));
        VAR_20 = (--VAR_16)->p;
        continue;
      }
      case 150: {
        if (VAR_9 < VAR_10) { VAR_20++; VAR_9++; }
        else goto fail;
        continue;
      }
      case 130: {
        if (VAR_9 < VAR_10) VAR_20 += 2;
        else VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 146: {
        if ((byte)*VAR_9 == VAR_20->i.aux && VAR_9 < VAR_10) { VAR_20++; VAR_9++; }
        else goto fail;
        continue;
      }
      case 129: {
        if ((byte)*VAR_9 == VAR_20->i.aux && VAR_9 < VAR_10) VAR_20 += 2;
        else VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 132: {
        int VAR_21 = (byte)*VAR_9;
        if (FUNC_18((VAR_20+1)->buff, VAR_21) && VAR_9 < VAR_10)
          { VAR_20 += VAR_0; VAR_9++; }
        else goto fail;
        continue;
      }
      case 128: {
        int VAR_22 = (byte)*VAR_9;
        if (FUNC_18((VAR_20 + 2)->buff, VAR_22) && VAR_9 < VAR_10)
          VAR_20 += 1 + VAR_0;
        else VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 148: {
        int VAR_23 = VAR_20->i.aux;
        if (VAR_23 > VAR_9 - VAR_8) goto fail;
        VAR_9 -= VAR_23; VAR_20++;
        continue;
      }
      case 131: {
        for (; VAR_9 < VAR_10; VAR_9++) {
          int VAR_24 = (byte)*VAR_9;
          if (!FUNC_18((VAR_20+1)->buff, VAR_24)) break;
        }
        VAR_20 += VAR_0;
        continue;
      }
      case 136: {
        VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 145: {
        if (VAR_16 == VAR_15)
          VAR_16 = FUNC_3(VAR_7, &VAR_15, VAR_13);
        VAR_16->p = VAR_20 + FUNC_6(VAR_20);
        VAR_16->s = VAR_9;
        VAR_16->caplevel = VAR_18;
        VAR_16++;
        VAR_20 += 2;
        continue;
      }
      case 147: {
        if (VAR_16 == VAR_15)
          VAR_16 = FUNC_3(VAR_7, &VAR_15, VAR_13);
        VAR_16->s = ((void*)0);
        VAR_16->p = VAR_20 + 2;
        VAR_16++;
        VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 142: {
        FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13) && (VAR_16 - 1)->s != ((void*)0));
        VAR_16--;
        VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 134: {
        FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13) && (VAR_16 - 1)->s != ((void*)0));
        (VAR_16 - 1)->s = VAR_9;
        (VAR_16 - 1)->caplevel = VAR_18;
        VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 149: {
        FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13) && (VAR_16 - 1)->s != ((void*)0));
        VAR_9 = (--VAR_16)->s;
        VAR_18 = VAR_16->caplevel;
        VAR_20 += FUNC_6(VAR_20);
        continue;
      }
      case 139:
        FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13));
        VAR_16--;

      case 140:
      fail: {
        do {
          FUNC_1(VAR_16 > FUNC_7(VAR_7, VAR_13));
          VAR_9 = (--VAR_16)->s;
        } while (VAR_9 == ((void*)0));
        if (VAR_19 > 0)
          VAR_19 -= FUNC_14(VAR_7, VAR_12, VAR_16->caplevel, VAR_18);
        VAR_18 = VAR_16->caplevel;
        VAR_20 = VAR_16->p;



        continue;
      }
      case 143: {
        CapState VAR_25;
        int VAR_26, VAR_27, VAR_28;
        int VAR_29 = FUNC_9(VAR_7) + 1;
        VAR_25.s = VAR_8; VAR_25.L = VAR_7; VAR_25.ocap = VAR_12; VAR_25.ptop = VAR_13;
        VAR_28 = FUNC_16(&VAR_25, VAR_12 + VAR_18, VAR_9, &VAR_26);
        VAR_18 -= VAR_28;
        VAR_19 -= VAR_26;
        VAR_29 -= VAR_26;
        VAR_27 = FUNC_15(VAR_7, VAR_29, VAR_9 - VAR_8, VAR_10 - VAR_8);
        if (VAR_27 == -1)
          goto fail;
        VAR_9 = VAR_8 + VAR_27;
        VAR_28 = FUNC_9(VAR_7) - VAR_29 + 1;
        VAR_19 += VAR_28;
        if (VAR_28 > 0) {
          if (VAR_29 + VAR_28 >= VAR_4)
            FUNC_8(VAR_7, "too many results in match-time capture");
          if ((VAR_18 += VAR_28 + 2) >= VAR_17) {
            VAR_12 = FUNC_2(VAR_7, VAR_12, VAR_18, VAR_28 + 2, VAR_13);
            VAR_17 = 2 * VAR_18;
          }

          FUNC_0(VAR_9, VAR_12 + VAR_18 - VAR_28 - 2, VAR_28, VAR_29);
        }
        VAR_20++;
        continue;
      }
      case 144: {
        const char *VAR_30 = VAR_9;
        FUNC_1(VAR_18 > 0);

        if (VAR_12[VAR_18 - 1].siz == 0 &&
            VAR_30 - VAR_12[VAR_18 - 1].s < VAR_5) {
          VAR_12[VAR_18 - 1].siz = VAR_30 - VAR_12[VAR_18 - 1].s + 1;
          VAR_20++;
          continue;
        }
        else {
          VAR_12[VAR_18].siz = 1;
          VAR_12[VAR_18].s = VAR_9;
          goto pushcapture;
        }
      }
      case 135:
        VAR_12[VAR_18].siz = 0;
        VAR_12[VAR_18].s = VAR_9;
        goto pushcapture;
      case 138:
        VAR_12[VAR_18].siz = FUNC_5(VAR_20) + 1;
        VAR_12[VAR_18].s = VAR_9 - FUNC_5(VAR_20);

      pushcapture: {
        VAR_12[VAR_18].idx = VAR_20->i.key;
        VAR_12[VAR_18].kind = FUNC_4(VAR_20);
        if (++VAR_18 >= VAR_17) {
          VAR_12 = FUNC_2(VAR_7, VAR_12, VAR_18, 0, VAR_13);
          VAR_17 = 2 * VAR_18;
        }
        VAR_20++;
        continue;
      }
      default: FUNC_1(0); return ((void*)0);
    }
  }
}
