
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (LexState *VAR_0) {
  FUNC_3(VAR_0);
  FUNC_0 (VAR_0, FUNC_1(VAR_0->current), "hexadecimal digit expected");
  return FUNC_2(VAR_0->current);
}
