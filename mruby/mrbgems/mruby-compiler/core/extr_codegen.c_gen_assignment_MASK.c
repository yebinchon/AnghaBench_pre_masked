
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* car; struct TYPE_21__* cdr; } ;
typedef TYPE_1__ node ;
struct TYPE_22__ {struct TYPE_22__* prev; } ;
typedef TYPE_2__ codegen_scope ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int,int ,int) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_18(codegen_scope *VAR_10, node *VAR_11, int VAR_12, int VAR_13)
{
  int VAR_14;
  int VAR_15 = FUNC_12(VAR_11->car);

  VAR_11 = VAR_11->cdr;
  switch (VAR_15) {
  case 133:
    VAR_14 = FUNC_11(VAR_10, FUNC_13(VAR_11));
    FUNC_8(VAR_10, VAR_4, VAR_12, VAR_14);
    break;
  case 138:
  case 131:
    VAR_14 = FUNC_10(VAR_10, FUNC_13(VAR_11));
    if (VAR_14 > 0) {
      if (VAR_14 != VAR_12) {
        FUNC_5(VAR_10, VAR_14, VAR_12, VAR_13);
        if (VAR_13 && FUNC_14(VAR_10)) FUNC_7(VAR_10, VAR_1);
      }
      break;
    }
    else {
      int VAR_16 = 0;
      codegen_scope *VAR_17 = VAR_10->prev;

      while (VAR_17) {
        VAR_14 = FUNC_10(VAR_17, FUNC_13(VAR_11));
        if (VAR_14 > 0) {
          FUNC_9(VAR_10, VAR_7, VAR_12, VAR_14, VAR_16);
          break;
        }
        VAR_16++;
        VAR_17 = VAR_17->prev;
      }
    }
    break;
  case 132:
    VAR_14 = FUNC_11(VAR_10, FUNC_13(VAR_11));
    FUNC_8(VAR_10, VAR_5, VAR_12, VAR_14);
    break;
  case 134:
    VAR_14 = FUNC_11(VAR_10, FUNC_13(VAR_11));
    FUNC_8(VAR_10, VAR_3, VAR_12, VAR_14);
    break;
  case 135:
    VAR_14 = FUNC_11(VAR_10, FUNC_13(VAR_11));
    FUNC_8(VAR_10, VAR_2, VAR_12, VAR_14);
    break;
  case 136:
    FUNC_5(VAR_10, FUNC_2(), VAR_12, 0);
    FUNC_17();
    FUNC_1(VAR_10, VAR_11->car, VAR_8);
    FUNC_16(2);
    VAR_14 = FUNC_11(VAR_10, FUNC_13(VAR_11->cdr));
    FUNC_8(VAR_10, VAR_6, VAR_12, VAR_14);
    break;

  case 137:
  case 128:
    FUNC_17();
    FUNC_4(VAR_10, VAR_11, FUNC_0(VAR_10, FUNC_13(VAR_11->cdr->car)), VAR_12, VAR_0,
             VAR_15 == 128);
    FUNC_15();
    if (VAR_13) {
      FUNC_5(VAR_10, FUNC_2(), VAR_12, 0);
    }
    break;

  case 130:
    FUNC_6(VAR_10, VAR_11->car, VAR_12, VAR_13);
    break;


  case 129:
    break;

  default:

    FUNC_3(VAR_9, "unknown lhs %d\n", VAR_15);

    break;
  }
  if (VAR_13) FUNC_17();
}
