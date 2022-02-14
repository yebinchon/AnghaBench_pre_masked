
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int VP8LHashChain ;
typedef int VP8LColorCache ;
struct TYPE_15__ {int error_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;
struct TYPE_16__ {double* literal_; float* costs_; } ;
typedef TYPE_2__ CostModel ;
typedef TYPE_2__ CostManager ;


 int FUNC_0 (int const* const,int *,TYPE_2__* const,int,int const,float const,float*,scalar_t__* const) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__* const,int const,TYPE_2__* const) ;
 int FUNC_3 (TYPE_2__* const,int,int,TYPE_1__ const* const) ;
 double FUNC_4 (TYPE_2__* const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,float const,int,int) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int const* const,int,int*,int*) ;
 scalar_t__ FUNC_11 (unsigned long long,size_t const) ;
 int FUNC_12 (TYPE_2__* const) ;
 scalar_t__ FUNC_13 (unsigned long long,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(
    int VAR_3, int VAR_4, const uint32_t* const VAR_5, int VAR_6,
    const VP8LHashChain* const VAR_7, const VP8LBackwardRefs* const VAR_8,
    uint16_t* const VAR_9) {
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  const int VAR_13 = VAR_3 * VAR_4;
  const int VAR_14 = (VAR_6 > 0);
  const size_t VAR_15 =
      sizeof(double) * (VAR_2 + VAR_1 +
                        ((VAR_6 > 0) ? (1 << VAR_6) : 0));
  const size_t VAR_16 = sizeof(CostModel) + VAR_15;
  CostModel* const VAR_17 =
      (CostModel*)FUNC_11(1ULL, VAR_16);
  VP8LColorCache VAR_18;
  CostManager* VAR_19 =
      (CostManager*)FUNC_13(1ULL, sizeof(*VAR_19));
  int VAR_20 = -1, VAR_21 = -1;
  double VAR_22 = -1;
  int VAR_23 = -1;
  int VAR_24 = 0;

  if (VAR_17 == ((void*)0) || VAR_19 == ((void*)0)) goto Error;

  VAR_17->literal_ = (double*)(VAR_17 + 1);
  if (VAR_14) {
    VAR_12 = FUNC_8(&VAR_18, VAR_6);
    if (!VAR_12) goto Error;
  }

  if (!FUNC_3(VAR_17, VAR_3, VAR_6, VAR_8)) {
    goto Error;
  }

  if (!FUNC_2(VAR_19, VAR_9, VAR_13, VAR_17)) {
    goto Error;
  }



  VAR_9[0] = 0;

  FUNC_0(VAR_5, &VAR_18, VAR_17, 0, VAR_14,
                                0.f, VAR_19->costs_, VAR_9);

  for (VAR_10 = 1; VAR_10 < VAR_13; ++VAR_10) {
    const float VAR_25 = VAR_19->costs_[VAR_10 - 1];
    int VAR_26, VAR_27;
    FUNC_10(VAR_7, VAR_10, &VAR_26, &VAR_27);


    FUNC_0(VAR_5, &VAR_18, VAR_17, VAR_10,
                                  VAR_14, VAR_25,
                                  VAR_19->costs_, VAR_9);


    if (VAR_27 >= 2) {
      if (VAR_26 != VAR_20) {
        const int VAR_28 = FUNC_9(VAR_3, VAR_26);
        VAR_22 = FUNC_4(VAR_17, VAR_28);
        VAR_23 = 1;
        FUNC_5(VAR_19, VAR_25 + VAR_22, VAR_10, VAR_27);
      } else {
        FUNC_14(VAR_22 >= 0);
        FUNC_14(VAR_21 >= 0);
        FUNC_14(VAR_23 == 0 || VAR_23 == 1);





        if (VAR_23) {
          VAR_24 = VAR_10 - 1 + VAR_21 - 1;
          VAR_23 = 0;
        }

        if (VAR_10 + VAR_27 - 1 > VAR_24) {
          int VAR_29, VAR_30 = 0;
          int VAR_31;
          FUNC_14(VAR_27 == VAR_0 || VAR_27 == VAR_13 - VAR_10);


          for (VAR_31 = VAR_10; VAR_31 <= VAR_24; ++VAR_31) {
            FUNC_10(VAR_7, VAR_31 + 1, &VAR_29, &VAR_30);
            if (VAR_29 != VAR_26) {
              FUNC_10(VAR_7, VAR_31, &VAR_29, &VAR_30);
              break;
            }
          }

          FUNC_6(VAR_19, VAR_31 - 1, 0);
          FUNC_6(VAR_19, VAR_31, 0);

          FUNC_5(VAR_19, VAR_19->costs_[VAR_31 - 1] + VAR_22,
                       VAR_31, VAR_30);
          VAR_24 = VAR_31 + VAR_30 - 1;
        }
      }
    }

    FUNC_6(VAR_19, VAR_10, 1);
    VAR_20 = VAR_26;
    VAR_21 = VAR_27;
  }

  VAR_11 = !VAR_8->error_;
Error:
  if (VAR_12) FUNC_7(&VAR_18);
  FUNC_1(VAR_19);
  FUNC_12(VAR_17);
  FUNC_12(VAR_19);
  return VAR_11;
}
