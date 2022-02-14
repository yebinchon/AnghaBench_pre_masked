
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* cdr; TYPE_3__* car; } ;
typedef TYPE_1__ node ;
typedef int codegen_scope ;
struct TYPE_5__ {int car; struct TYPE_5__* cdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(codegen_scope *VAR_9, node *VAR_10, int VAR_11, int VAR_12)
{
  int VAR_13 = 0;
  int VAR_14;

  while (VAR_10) {
    VAR_14 = FUNC_4(VAR_10->car->car) == VAR_2;
    if (
      VAR_13+VAR_12 >= VAR_0 - 1
      || VAR_14) {
      if (VAR_11) {
        if (VAR_14 && VAR_13 == 0 && FUNC_4(VAR_10->car->cdr->car) == VAR_1) {
          FUNC_0(VAR_9, VAR_10->car->cdr, VAR_8);
          FUNC_5();
        }
        else {
          FUNC_6(VAR_13);
          if (VAR_13 == 0 && VAR_14) {
            FUNC_2(VAR_9, VAR_7, FUNC_1());
          }
          else {
            FUNC_3(VAR_9, VAR_4, FUNC_1(), VAR_13);
          }
          FUNC_7();
          FUNC_0(VAR_9, VAR_10->car, VAR_8);
          FUNC_5(); FUNC_5();
          if (VAR_14) {
            FUNC_2(VAR_9, VAR_5, FUNC_1());
          }
          else {
            FUNC_2(VAR_9, VAR_6, FUNC_1());
          }
        }
        VAR_10 = VAR_10->cdr;
        while (VAR_10) {
          FUNC_7();
          FUNC_0(VAR_9, VAR_10->car, VAR_8);
          FUNC_5(); FUNC_5();
          if (FUNC_4(VAR_10->car->car) == VAR_2) {
            FUNC_2(VAR_9, VAR_5, FUNC_1());
          }
          else {
            FUNC_2(VAR_9, VAR_6, FUNC_1());
          }
          VAR_10 = VAR_10->cdr;
        }
      }
      else {
        while (VAR_10) {
          FUNC_0(VAR_9, VAR_10->car, VAR_3);
          VAR_10 = VAR_10->cdr;
        }
      }
      return -1;
    }

    FUNC_0(VAR_9, VAR_10->car, VAR_11);
    VAR_13++;
    VAR_10 = VAR_10->cdr;
  }
  return VAR_13;
}
