
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int map_tmp ;
typedef int VP8LHistogramSet ;
typedef int VP8LHistogram ;
typedef int VP8LBackwardRefs ;


 int VAR_0 ;
 double FUNC_0 (int const,int) ;
 int FUNC_1 (int * const,int * const,int) ;
 int FUNC_2 (int,int,int const* const,int * const) ;
 int FUNC_3 (int * const,int*,int * const,int * const,int * const,int * const,int const,double const,int) ;
 int FUNC_4 (int * const,int*) ;
 int FUNC_5 (int * const,int*,int const,int*) ;
 int FUNC_6 (int * const,int * const,int*,int * const) ;
 int FUNC_7 (int * const,int * const,int * const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int * const,int * const,int const,int * const,int * const) ;
 int FUNC_9 (int * const) ;
 int * FUNC_10 (int const,int) ;
 int FUNC_11 (int * const) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int * const) ;
 int * FUNC_14 (int,int) ;

int FUNC_15(int VAR_3, int VAR_4,
                             const VP8LBackwardRefs* const VAR_5,
                             int VAR_6, int VAR_7,
                             int VAR_8, int VAR_9,
                             VP8LHistogramSet* const VAR_10,
                             VP8LHistogram* const VAR_11,
                             uint16_t* const VAR_12) {
  int VAR_13 = 0;
  const int VAR_14 = VAR_8 ? FUNC_12(VAR_3, VAR_8) : 1;
  const int VAR_15 = VAR_8 ? FUNC_12(VAR_4, VAR_8) : 1;
  const int VAR_16 = VAR_14 * VAR_15;
  VP8LHistogramSet* const VAR_17 =
      FUNC_10(VAR_16, VAR_9);



  const int VAR_18 = VAR_7 ? VAR_2 : VAR_0;
  int VAR_19;
  uint16_t* const VAR_20 =
      FUNC_14(2 * VAR_16, sizeof(VAR_20));
  uint16_t* const VAR_21 = VAR_20 + VAR_16;
  int VAR_22 = VAR_16;
  if (VAR_17 == ((void*)0) || VAR_20 == ((void*)0)) goto Error;


  FUNC_2(VAR_3, VAR_8, VAR_5, VAR_17);


  FUNC_6(VAR_17, VAR_10, &VAR_22,
                          VAR_12);

  VAR_19 =
      (VAR_22 > VAR_18 * 2) && (VAR_6 < 100);

  if (VAR_19) {
    uint16_t* const VAR_23 = VAR_20;
    const double VAR_24 =
        FUNC_0(VAR_16, VAR_6);
    const uint32_t VAR_25 = VAR_22;

    FUNC_1(VAR_10, VAR_23, VAR_7);

    FUNC_3(VAR_10, &VAR_22, VAR_12,
                               VAR_21, VAR_11, VAR_23,
                               VAR_18, VAR_24,
                               VAR_7);
    FUNC_8(VAR_10, VAR_21, VAR_25,
                             VAR_20, VAR_12);
  }



  if (!VAR_7 || !VAR_19) {
    const float VAR_26 = VAR_6 / 100.f;

    const int VAR_27 = (int)(1 + (VAR_26 * VAR_26 * VAR_26) * (VAR_1 - 1));
    int VAR_28;
    if (!FUNC_5(VAR_10, &VAR_22, VAR_27,
                                    &VAR_28)) {
      goto Error;
    }
    if (VAR_28) {
      FUNC_9(VAR_10);
      if (!FUNC_4(VAR_10, &VAR_22)) {
        goto Error;
      }
    }
  }


  FUNC_9(VAR_10);
  FUNC_7(VAR_17, VAR_10, VAR_12);

  VAR_13 = 1;

 Error:
  FUNC_11(VAR_17);
  FUNC_13(VAR_20);
  return VAR_13;
}
