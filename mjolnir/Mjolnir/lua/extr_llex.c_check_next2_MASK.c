
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const current; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (LexState *VAR_0, const char *VAR_1) {
  FUNC_0(VAR_1[2] == '\0');
  if (VAR_0->current == VAR_1[0] || VAR_0->current == VAR_1[1]) {
    FUNC_1(VAR_0);
    return 1;
  }
  else return 0;
}
