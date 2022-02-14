
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int l_noret ;
struct TYPE_4__ {int L; int linenumber; int source; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ,char const*,int ,int ) ;
 int FUNC_2 (int ,char*,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static l_noret FUNC_4 (LexState *VAR_1, const char *VAR_2, int VAR_3) {
  VAR_2 = FUNC_1(VAR_1->L, VAR_2, VAR_1->source, VAR_1->linenumber);
  if (VAR_3)
    FUNC_2(VAR_1->L, "%s near %s", VAR_2, FUNC_3(VAR_1, VAR_3));
  FUNC_0(VAR_1->L, VAR_0);
}
