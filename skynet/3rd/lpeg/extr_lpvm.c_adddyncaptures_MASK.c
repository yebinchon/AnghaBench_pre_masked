
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int siz; int idx; char const* s; int kind; } ;
typedef TYPE_1__ Capture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (const char *VAR_3, Capture *VAR_4, int VAR_5, int VAR_6) {
  int VAR_7;
  VAR_4[0].kind = VAR_1;
  VAR_4[0].siz = 0;
  VAR_4[0].idx = 0;
  for (VAR_7 = 1; VAR_7 <= VAR_5; VAR_7++) {
    VAR_4[VAR_7].kind = VAR_2;
    VAR_4[VAR_7].siz = 1;
    VAR_4[VAR_7].idx = VAR_6 + VAR_7 - 1;
    VAR_4[VAR_7].s = VAR_3;
  }
  VAR_4[VAR_7].kind = VAR_0;
  VAR_4[VAR_7].siz = 1;
  VAR_4[VAR_7].s = VAR_3;
}
