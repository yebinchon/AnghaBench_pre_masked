
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__** streaks; } ;
typedef TYPE_1__ VP8LStreaks ;
struct TYPE_8__ {int nonzeros; int nonzero_code; } ;
typedef TYPE_2__ VP8LBitEntropy ;


 double FUNC_0 (TYPE_2__*) ;
 double FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const* const,int,TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static double FUNC_3(const uint32_t* const VAR_1, int VAR_2,
                             uint32_t* const VAR_3,
                             uint8_t* const VAR_4) {
  VP8LBitEntropy VAR_5;
  VP8LStreaks VAR_6;
  FUNC_2(VAR_1, VAR_2, &VAR_5, &VAR_6);
  if (VAR_3 != ((void*)0)) {
    *VAR_3 = (VAR_5.nonzeros == 1) ? VAR_5.nonzero_code
                                               : VAR_0;
  }

  *VAR_4 = (VAR_6.streaks[1][0] != 0 || VAR_6.streaks[1][1] != 0);

  return FUNC_0(&VAR_5) + FUNC_1(&VAR_6);
}
