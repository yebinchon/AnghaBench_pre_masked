
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int * buff; } ;
typedef int CompileState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ FUNC_1 (int *,int) ;
 size_t VAR_1 ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (CompileState *VAR_2, const byte *VAR_3) {
  int VAR_4 = FUNC_0(VAR_2);
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < (int)VAR_0 - 1; VAR_5++)
    FUNC_3(VAR_2);

  FUNC_2(VAR_1, FUNC_1(VAR_2, VAR_4).buff[VAR_1] = VAR_3[VAR_1]);
}
