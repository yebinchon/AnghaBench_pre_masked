
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int VP8LHashChain ;
typedef int VP8LBackwardRefs ;


 int FUNC_0 (int,int,int const* const,int,int const* const,int const* const,int *) ;
 int FUNC_1 (int const* const,int,int *,int,int const* const,int * const) ;
 int FUNC_2 (int *,int const,int **,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const,int) ;

int FUNC_5(int VAR_0, int VAR_1,
                                         const uint32_t* const VAR_2,
                                         int VAR_3,
                                         const VP8LHashChain* const VAR_4,
                                         const VP8LBackwardRefs* const VAR_5,
                                         VP8LBackwardRefs* const VAR_6) {
  int VAR_7 = 0;
  const int VAR_8 = VAR_0 * VAR_1;
  uint16_t* VAR_9 = ((void*)0);
  int VAR_10 = 0;
  uint16_t* VAR_11 =
      (uint16_t*)FUNC_4(VAR_8, sizeof(*VAR_11));

  if (VAR_11 == ((void*)0)) goto Error;

  if (!FUNC_0(
          VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_11)) {
    goto Error;
  }
  FUNC_2(VAR_11, VAR_8, &VAR_9, &VAR_10);
  if (!FUNC_1(
          VAR_2, VAR_3, VAR_9, VAR_10, VAR_4,
          VAR_6)) {
    goto Error;
  }
  VAR_7 = 1;
 Error:
  FUNC_3(VAR_11);
  return VAR_7;
}
