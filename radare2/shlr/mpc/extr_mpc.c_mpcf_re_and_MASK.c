
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_parser_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int *,int *,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static mpc_val_t *FUNC_2(int VAR_3, mpc_val_t **VAR_4) {
  int VAR_5;
  mpc_parser_t *VAR_6 = FUNC_1(VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    VAR_6 = FUNC_0(2, VAR_2, VAR_6, VAR_4[VAR_5], VAR_0);
  }
  return VAR_6;
}
