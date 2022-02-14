
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;
typedef int npy_uint32 ;
typedef scalar_t__ npy_uint16 ;
typedef size_t npy_intp ;


 int FUNC_0 (int *) ;

void FUNC_1(npy_uint16 VAR_0, npy_uint16 VAR_1, npy_intp VAR_2,
                      npy_uint16 *VAR_3, rk_state *VAR_4) {
  npy_uint16 VAR_5, VAR_6 = VAR_1;
  npy_intp VAR_7;
  npy_uint32 VAR_8;
  int VAR_9 = 0;

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

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    do {
      if (!VAR_9) {
        VAR_8 = FUNC_0(VAR_4);
        VAR_9 = 1;
      } else {
        VAR_8 >>= 16;
        VAR_9--;
      }
      VAR_5 = (npy_uint16)VAR_8 & VAR_6;
    } while (VAR_5 > VAR_1);
    VAR_3[VAR_7] = VAR_0 + VAR_5;
  }
}
