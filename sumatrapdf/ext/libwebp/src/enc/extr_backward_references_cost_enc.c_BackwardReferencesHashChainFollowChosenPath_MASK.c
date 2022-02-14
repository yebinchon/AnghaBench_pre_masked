
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int VP8LHashChain ;
typedef int VP8LColorCache ;
struct TYPE_5__ {int error_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;
typedef int PixOrCopy ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__* const,int ) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int const) ;
 int FUNC_9 (int const* const,int) ;

__attribute__((used)) static int FUNC_10(
    const uint32_t* const VAR_0, int VAR_1,
    const uint16_t* const VAR_2, int VAR_3,
    const VP8LHashChain* const VAR_4, VP8LBackwardRefs* const VAR_5) {
  const int VAR_6 = (VAR_1 > 0);
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  VP8LColorCache VAR_11;

  if (VAR_6) {
    VAR_10 = FUNC_7(&VAR_11, VAR_1);
    if (!VAR_10) goto Error;
  }

  FUNC_4(VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
    const int VAR_12 = VAR_2[VAR_7];
    if (VAR_12 != 1) {
      int VAR_13;
      const int VAR_14 = FUNC_9(VAR_4, VAR_8);
      FUNC_3(VAR_5, FUNC_1(VAR_14, VAR_12));
      if (VAR_6) {
        for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13) {
          FUNC_8(&VAR_11, VAR_0[VAR_8 + VAR_13]);
        }
      }
      VAR_8 += VAR_12;
    } else {
      PixOrCopy VAR_15;
      const int VAR_16 =
          VAR_6 ? FUNC_6(&VAR_11, VAR_0[VAR_8]) : -1;
      if (VAR_16 >= 0) {


        VAR_15 = FUNC_0(VAR_16);
      } else {
        if (VAR_6) FUNC_8(&VAR_11, VAR_0[VAR_8]);
        VAR_15 = FUNC_2(VAR_0[VAR_8]);
      }
      FUNC_3(VAR_5, VAR_15);
      ++VAR_8;
    }
  }
  VAR_9 = !VAR_5->error_;
 Error:
  if (VAR_10) FUNC_5(&VAR_11);
  return VAR_9;
}
