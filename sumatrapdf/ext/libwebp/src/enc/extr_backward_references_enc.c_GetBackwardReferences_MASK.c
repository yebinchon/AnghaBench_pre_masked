
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int hash_chain_box ;
typedef int VP8LHistogram ;
typedef int const VP8LHashChain ;
typedef int VP8LBackwardRefs ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int,int const* const,int ,int const* const,int *) ;
 int FUNC_2 (int,int,int const* const,int ,int const* const,int const*,int *) ;
 int FUNC_3 (int,int,int const* const,int ,int *) ;
 int FUNC_4 (int const* const,int,int *) ;
 int FUNC_5 (int const* const,int,int *,int*) ;
 int VAR_0 ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int,int const* const,int,int const* const,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int) ;
 int FUNC_11 (int *,int *,int) ;
 double FUNC_12 (int *) ;
 int FUNC_13 (int) ;



 int FUNC_14 (int const*,int ,int) ;

__attribute__((used)) static VP8LBackwardRefs* FUNC_15(
    int VAR_1, int VAR_2, const uint32_t* const VAR_3, int VAR_4,
    int VAR_5, int* const VAR_6,
    const VP8LHashChain* const VAR_7, VP8LBackwardRefs* VAR_8,
    VP8LBackwardRefs* VAR_9) {
  const int VAR_10 = *VAR_6;
  double VAR_11 = -1;
  VP8LHistogram* VAR_12 = ((void*)0);
  int VAR_13, VAR_14 = 0;
  VP8LHashChain VAR_15;
  FUNC_14(&VAR_15, 0, sizeof(VAR_15));

  VAR_12 = FUNC_6(VAR_0);
  if (VAR_12 == ((void*)0)) goto Error;

  for (VAR_13 = 1; VAR_5;
       VAR_5 &= ~VAR_13, VAR_13 <<= 1) {
    int VAR_16 = 0;
    double VAR_17;
    int VAR_18 = VAR_10;
    if ((VAR_5 & VAR_13) == 0) continue;
    switch (VAR_13) {
      case 129:
        VAR_16 = FUNC_3(VAR_1, VAR_2, VAR_3, 0, VAR_9);
        break;
      case 128:


        VAR_16 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, VAR_7, VAR_9);
        break;
      case 130:
        if (!FUNC_10(&VAR_15, VAR_1 * VAR_2)) goto Error;
        VAR_16 = FUNC_2(VAR_1, VAR_2, VAR_3, 0, VAR_7,
                                        &VAR_15, VAR_9);
        break;
      default:
        FUNC_13(0);
    }
    if (!VAR_16) goto Error;


    if (!FUNC_5(VAR_3, VAR_4, VAR_9, &VAR_18)) {
      goto Error;
    }
    if (VAR_18 > 0) {
      if (!FUNC_4(VAR_3, VAR_18, VAR_9)) {
        goto Error;
      }
    }


    FUNC_11(VAR_12, VAR_9, VAR_18);
    VAR_17 = FUNC_12(VAR_12);
    if (VAR_14 == 0 || VAR_17 < VAR_11) {
      VP8LBackwardRefs* const VAR_19 = VAR_9;
      VAR_9 = VAR_8;
      VAR_8 = VAR_19;
      VAR_11 = VAR_17;
      *VAR_6 = VAR_18;
      VAR_14 = VAR_13;
    }
  }
  FUNC_13(VAR_14 > 0);



  if ((VAR_14 == 128 || VAR_14 == 130) &&
      VAR_4 >= 25) {
    const VP8LHashChain* const VAR_20 =
        (VAR_14 == 128) ? VAR_7 : &VAR_15;
    if (FUNC_7(VAR_1, VAR_2, VAR_3, *VAR_6,
                                             VAR_20, VAR_8, VAR_9)) {
      double VAR_21;
      FUNC_11(VAR_12, VAR_9, *VAR_6);
      VAR_21 = FUNC_12(VAR_12);
      if (VAR_21 < VAR_11) VAR_8 = VAR_9;
    }
  }

  FUNC_0(VAR_1, VAR_8);

Error:
  FUNC_9(&VAR_15);
  FUNC_8(VAR_12);
  return VAR_8;
}
