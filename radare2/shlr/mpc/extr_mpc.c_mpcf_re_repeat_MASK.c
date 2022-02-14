
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ,int *,int (*) (int *)) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static mpc_val_t *FUNC_6(int VAR_2, mpc_val_t **VAR_3) {
  int VAR_4;
  (void) VAR_2;
  if (!VAR_3[1]) { return VAR_3[0]; }
  if (FUNC_5(VAR_3[1], "*") == 0) { FUNC_0(VAR_3[1]); return FUNC_2(VAR_1, VAR_3[0]); }
  if (FUNC_5(VAR_3[1], "+") == 0) { FUNC_0(VAR_3[1]); return FUNC_3(VAR_1, VAR_3[0]); }
  if (FUNC_5(VAR_3[1], "?") == 0) { FUNC_0(VAR_3[1]); return FUNC_4(VAR_3[0], VAR_0); }
  VAR_4 = *(int*)VAR_3[1];
  FUNC_0(VAR_3[1]);

  return FUNC_1(VAR_4, VAR_1, VAR_3[0], FUNC_0);
}
