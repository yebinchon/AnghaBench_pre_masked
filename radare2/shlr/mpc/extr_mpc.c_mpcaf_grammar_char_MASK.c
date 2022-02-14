
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ mpca_grammar_st_t ;
typedef int mpc_val_t ;
typedef int mpc_parser_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (char) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static mpc_val_t *FUNC_7(mpc_val_t *VAR_2, void *VAR_3) {
  mpca_grammar_st_t *VAR_4 = VAR_3;
  char *VAR_5 = FUNC_6(VAR_2);
  mpc_parser_t *VAR_6 = (VAR_4->flags & VAR_0) ? FUNC_2(VAR_5[0]) : FUNC_3(FUNC_2(VAR_5[0]));
  FUNC_0(VAR_5);
  return FUNC_4(FUNC_5(FUNC_1(VAR_6, VAR_1), "char"));
}
