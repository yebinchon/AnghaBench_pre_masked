
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_parser_t ;


 int * FUNC_0 () ;
 int * FUNC_1 (int,int *,int *) ;

__attribute__((used)) static mpc_val_t *FUNC_2(int VAR_0, mpc_val_t **VAR_1) {
  int VAR_2;
  mpc_parser_t *VAR_3 = FUNC_0();
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    if (VAR_1[VAR_2] != ((void*)0)) { VAR_3 = FUNC_1(2, VAR_3, VAR_1[VAR_2]); }
  }
  return VAR_3;
}
