
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;
typedef int npy_uint64 ;
typedef size_t npy_intp ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(npy_uint64 VAR_0, npy_uint64 VAR_1, npy_intp VAR_2,
                      npy_uint64 *VAR_3, rk_state *VAR_4) {
  npy_uint64 VAR_5, VAR_6 = VAR_1;
  npy_intp VAR_7;

  if (VAR_1 == 0) {
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
      VAR_3[VAR_7] = VAR_0;
    }
    return;
  }


  VAR_6 |= VAR_6 >> 1;
  VAR_6 |= VAR_6 >> 2;
  VAR_6 |= VAR_6 >> 4;
  VAR_6 |= VAR_6 >> 8;
  VAR_6 |= VAR_6 >> 16;
  VAR_6 |= VAR_6 >> 32;

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    if (VAR_1 <= 0xffffffffUL) {
      while ((VAR_5 = (FUNC_0(VAR_4) & VAR_6)) > VAR_1)
        ;
    } else {
      while ((VAR_5 = (FUNC_1(VAR_4) & VAR_6)) > VAR_1)
        ;
    }
    VAR_3[VAR_7] = VAR_0 + VAR_5;
  }
}
