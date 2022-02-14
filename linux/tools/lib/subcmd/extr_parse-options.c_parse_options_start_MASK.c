
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int argc; char const** argv; char const** out; int cpidx; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct parse_opt_ctx_t *VAR_3,
    int VAR_4, const char **VAR_5, int VAR_6)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->argc = VAR_4 - 1;
 VAR_3->argv = VAR_5 + 1;
 VAR_3->out = VAR_5;
 VAR_3->cpidx = ((VAR_6 & VAR_0) != 0);
 VAR_3->flags = VAR_6;
 if ((VAR_6 & VAR_1) &&
     (VAR_6 & VAR_2))
  FUNC_0("STOP_AT_NON_OPTION and KEEP_UNKNOWN don't go together");
}
