
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {int buff; TYPE_1__ i; } ;
typedef int Opcode ;
typedef int CompileState ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const,int) ;
 int FUNC_2 (int const*,int*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int const*,int ) ;
 TYPE_2__ FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6 (CompileState *VAR_2, const byte *VAR_3, int VAR_4) {
  int VAR_5 = 0;
  Opcode VAR_6 = FUNC_2(VAR_3, &VAR_5);
  switch (VAR_6) {
    case 129: FUNC_3(VAR_2, VAR_5, VAR_4); break;
    case 128: {
      if (VAR_4 >= 0 && FUNC_5(VAR_2, VAR_4).i.code == VAR_1 &&
          FUNC_4(VAR_3, FUNC_5(VAR_2, VAR_4 + 2).buff))
        FUNC_1(VAR_2, VAR_0, 0);
      else {
        FUNC_1(VAR_2, 128, 0);
        FUNC_0(VAR_2, VAR_3);
      }
      break;
    }
    default: FUNC_1(VAR_2, VAR_6, VAR_5); break;
  }
}
