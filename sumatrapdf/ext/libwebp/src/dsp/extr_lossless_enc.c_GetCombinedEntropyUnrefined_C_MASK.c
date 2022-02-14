
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ const uint32_t ;
typedef int VP8LStreaks ;
struct TYPE_5__ {int sum; int entropy; } ;
typedef TYPE_1__ VP8LBitEntropy ;


 int FUNC_0 (scalar_t__ const,int,scalar_t__ const*,int*,TYPE_1__* const,int * const) ;
 int FUNC_1 (TYPE_1__* const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_4(const uint32_t VAR_0[],
                                          const uint32_t VAR_1[],
                                          int VAR_2,
                                          VP8LBitEntropy* const VAR_3,
                                          VP8LStreaks* const VAR_4) {
  int VAR_5 = 1;
  int VAR_6 = 0;
  uint32_t VAR_7 = VAR_0[0] + VAR_1[0];

  FUNC_3(VAR_4, 0, sizeof(*VAR_4));
  FUNC_1(VAR_3);

  for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
    const uint32_t VAR_8 = VAR_0[VAR_5] + VAR_1[VAR_5];
    if (VAR_8 != VAR_7) {
      FUNC_0(VAR_8, VAR_5, &VAR_7, &VAR_6, VAR_3, VAR_4);
    }
  }
  FUNC_0(0, VAR_5, &VAR_7, &VAR_6, VAR_3, VAR_4);

  VAR_3->entropy += FUNC_2(VAR_3->sum);
}
