
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static mpc_val_t *FUNC_1(int VAR_0, mpc_val_t **VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_3 != VAR_2) { FUNC_0(VAR_1[VAR_3]); }
  }
  return VAR_1[VAR_2];
}
