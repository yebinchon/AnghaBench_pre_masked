
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ (* AccumulateFunc ) (int const*,int,int const*,int,int,int) ;


 scalar_t__ FUNC_0 (int const*,int,int const*,int,int,int) ;
 scalar_t__ FUNC_1 (int const*,int,int const*,int,int,int) ;
 scalar_t__ FUNC_2 (int const*,int,int const*,int,int,int) ;
 scalar_t__ FUNC_3 (float,double) ;
 scalar_t__ FUNC_4 (float,double) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned long long,int) ;

int FUNC_8(const uint8_t* VAR_0, size_t VAR_1,
                        const uint8_t* VAR_2, size_t VAR_3,
                        int VAR_4, int VAR_5, size_t VAR_6,
                        int VAR_7, float* VAR_8, float* VAR_9) {
  uint8_t* VAR_10 = ((void*)0);
  const AccumulateFunc VAR_11 = (VAR_7 == 0) ? FUNC_1 :
                                (VAR_7 == 1) ? FUNC_2 :
                                              FUNC_0;
  if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) ||
      VAR_1 < VAR_6 * VAR_4 || VAR_3 < VAR_6 * VAR_4 ||
      VAR_9 == ((void*)0) || VAR_8 == ((void*)0)) {
    return 0;
  }

  FUNC_5();
  if (VAR_6 != 1) {
    int VAR_12, VAR_13;
    uint8_t* VAR_14;
    uint8_t* VAR_15;
    VAR_10 =
        (uint8_t*)FUNC_7(2ULL * VAR_4 * VAR_5, sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) return 0;
    VAR_14 = VAR_10;
    VAR_15 = VAR_14 + (size_t)VAR_4 * VAR_5;
    for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13) {
      for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
        VAR_14[VAR_12 + VAR_13 * VAR_4] = VAR_0[VAR_12 * VAR_6 + VAR_13 * VAR_1];
        VAR_15[VAR_12 + VAR_13 * VAR_4] = VAR_2[VAR_12 * VAR_6 + VAR_13 * VAR_3];
      }
    }
    VAR_0 = VAR_14;
    VAR_2 = VAR_15;
  }
  *VAR_8 = (float)VAR_11(VAR_0, VAR_4, VAR_2, VAR_4, VAR_4, VAR_5);
  FUNC_6(VAR_10);

  *VAR_9 = (VAR_7 == 1) ? (float)FUNC_3(*VAR_8, (double)VAR_4 * VAR_5)
                        : (float)FUNC_4(*VAR_8, (double)VAR_4 * VAR_5);
  return 1;
}
