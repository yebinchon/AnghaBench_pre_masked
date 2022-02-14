
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current; scalar_t__ linenumber; } ;
typedef TYPE_1__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4 (LexState *VAR_1) {
  int VAR_2 = VAR_1->current;
  FUNC_2(FUNC_0(VAR_1));
  FUNC_3(VAR_1);
  if (FUNC_0(VAR_1) && VAR_1->current != VAR_2)
    FUNC_3(VAR_1);
  if (++VAR_1->linenumber >= VAR_0)
    FUNC_1(VAR_1, "chunk has too many lines", 0);
}
