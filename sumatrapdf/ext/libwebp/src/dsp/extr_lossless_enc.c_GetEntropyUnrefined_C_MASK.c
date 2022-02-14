
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint32_t ;
typedef int VP8LStreaks ;
struct TYPE_5__ {int sum; int entropy; } ;
typedef TYPE_1__ VP8LBitEntropy ;


 int FUNC_0 (int const,int,int const*,int*,TYPE_1__* const,int * const) ;
 int FUNC_1 (TYPE_1__* const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int * const,int ,int) ;

__attribute__((used)) static void FUNC_4(const uint32_t VAR_0[], int VAR_1,
                                  VP8LBitEntropy* const VAR_2,
                                  VP8LStreaks* const VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  uint32_t VAR_6 = VAR_0[0];

  FUNC_3(VAR_3, 0, sizeof(*VAR_3));
  FUNC_1(VAR_2);

  for (VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4) {
    const uint32_t VAR_7 = VAR_0[VAR_4];
    if (VAR_7 != VAR_6) {
      FUNC_0(VAR_7, VAR_4, &VAR_6, &VAR_5, VAR_2, VAR_3);
    }
  }
  FUNC_0(0, VAR_4, &VAR_6, &VAR_5, VAR_2, VAR_3);

  VAR_2->entropy += FUNC_2(VAR_2->sum);
}
