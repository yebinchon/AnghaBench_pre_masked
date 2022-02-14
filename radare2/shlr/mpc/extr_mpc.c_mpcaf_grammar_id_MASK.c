
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mpca_grammar_st_t ;
typedef int mpc_val_t ;
struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ mpc_parser_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static mpc_val_t *FUNC_5(mpc_val_t *VAR_0, void *VAR_1) {

  mpca_grammar_st_t *VAR_2 = VAR_1;
  mpc_parser_t *VAR_3 = FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_0);

  if (VAR_3->name) {
    return FUNC_4(FUNC_3(FUNC_1(VAR_3, VAR_3->name)));
  } else {
    return FUNC_4(FUNC_3(VAR_3));
  }
}
