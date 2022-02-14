
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;
typedef int npy_uint32 ;
typedef size_t npy_intp ;
typedef int npy_bool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(npy_bool VAR_0, npy_bool VAR_1, npy_intp VAR_2, npy_bool *VAR_3,
                    rk_state *VAR_4) {
  npy_intp VAR_5;
  npy_uint32 VAR_6;
  int VAR_7 = 0;

  if (VAR_1 == 0) {
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
      VAR_3[VAR_5] = VAR_0;
    }
    return;
  }


  FUNC_0(VAR_1 == 1 && VAR_0 == 0);
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    if (!VAR_7) {
      VAR_6 = FUNC_1(VAR_4);
      VAR_7 = 31;
    } else {
      VAR_6 >>= 1;
      VAR_7--;
    }
    VAR_3[VAR_5] = (VAR_6 & 0x00000001) != 0;
  }
}
