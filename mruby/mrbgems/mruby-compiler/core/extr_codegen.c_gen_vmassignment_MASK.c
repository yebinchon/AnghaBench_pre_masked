
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* cdr; struct TYPE_4__* car; } ;
typedef TYPE_1__ node ;
typedef int codegen_scope ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int *,int ,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(codegen_scope *VAR_3, node *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7 = 0, VAR_8 = 0;
  node *VAR_9, *VAR_10;

  if (VAR_4->car) {
    VAR_9 = VAR_4->car;
    VAR_7 = 0;
    while (VAR_9) {
      int VAR_11 = FUNC_0();

      FUNC_3(VAR_3, VAR_2, VAR_11, VAR_5, VAR_7);
      FUNC_6();
      FUNC_1(VAR_3, VAR_9->car, VAR_11, VAR_0);
      FUNC_4();
      VAR_7++;
      VAR_9 = VAR_9->cdr;
    }
  }
  VAR_9 = VAR_4->cdr;
  if (VAR_9) {
    if (VAR_9->cdr) {
      VAR_10 = VAR_9->cdr->car;
      while (VAR_10) {
        VAR_8++;
        VAR_10 = VAR_10->cdr;
      }
    }
    FUNC_2(VAR_3, FUNC_0(), VAR_5, VAR_6);
    FUNC_7(VAR_8+1);
    FUNC_5(VAR_8+1);
    FUNC_3(VAR_3, VAR_1, FUNC_0(), VAR_7, VAR_8);
    VAR_7 = 1;
    if (VAR_9->car && VAR_9->car != (node*)-1) {
      FUNC_1(VAR_3, VAR_9->car, FUNC_0(), VAR_0);
    }
    if (VAR_9->cdr && VAR_9->cdr->car) {
      VAR_9 = VAR_9->cdr->car;
      while (VAR_9) {
        FUNC_1(VAR_3, VAR_9->car, FUNC_0()+VAR_7, VAR_0);
        VAR_9 = VAR_9->cdr;
        VAR_7++;
      }
    }
    if (VAR_6) {
      FUNC_2(VAR_3, FUNC_0(), VAR_5, 0);
    }
  }
}
