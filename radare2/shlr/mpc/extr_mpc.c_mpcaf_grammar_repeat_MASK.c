
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static mpc_val_t *FUNC_7(int VAR_0, mpc_val_t **VAR_1) {
  int VAR_2;
  (void) VAR_0;
  if (!VAR_1[1]) { return VAR_1[0]; }
  if (FUNC_6(VAR_1[1], "*") == 0) { FUNC_0(VAR_1[1]); return FUNC_2(VAR_1[0]); }
  if (FUNC_6(VAR_1[1], "+") == 0) { FUNC_0(VAR_1[1]); return FUNC_3(VAR_1[0]); }
  if (FUNC_6(VAR_1[1], "?") == 0) { FUNC_0(VAR_1[1]); return FUNC_4(VAR_1[0]); }
  if (FUNC_6(VAR_1[1], "!") == 0) { FUNC_0(VAR_1[1]); return FUNC_5(VAR_1[0]); }
  VAR_2 = *((int*)VAR_1[1]);
  FUNC_0(VAR_1[1]);
  return FUNC_1(VAR_2, VAR_1[0]);
}
