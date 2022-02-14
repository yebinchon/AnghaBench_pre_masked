
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ident; char* name; int * grammar; } ;
typedef TYPE_1__ mpca_stmt_t ;
typedef TYPE_1__ mpc_val_t ;
typedef int mpc_parser_t ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static mpc_val_t *FUNC_2(int VAR_0, mpc_val_t **VAR_1) {
  mpca_stmt_t *VAR_2 = FUNC_1(sizeof(mpca_stmt_t));
  VAR_2->ident = ((char**)VAR_1)[0];
  VAR_2->name = ((char**)VAR_1)[1];
  VAR_2->grammar = ((mpc_parser_t**)VAR_1)[3];
  (void) VAR_0;
  FUNC_0(((char**)VAR_1)[2]);
  FUNC_0(((char**)VAR_1)[4]);

  return VAR_2;
}
