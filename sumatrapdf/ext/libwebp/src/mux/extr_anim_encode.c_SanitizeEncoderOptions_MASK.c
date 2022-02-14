
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int verbose; int kmax; int kmin; scalar_t__ minimize_size; } ;
typedef TYPE_1__ WebPAnimEncoderOptions ;


 int FUNC_0 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(WebPAnimEncoderOptions* const VAR_2) {
  int VAR_3 = VAR_2->verbose;

  if (VAR_2->minimize_size) {
    FUNC_0(VAR_2);
  }

  if (VAR_2->kmax == 1) {
    VAR_2->kmin = 0;
    VAR_2->kmax = 0;
    return;
  } else if (VAR_2->kmax <= 0) {
    FUNC_0(VAR_2);
    VAR_3 = 0;
  }

  if (VAR_2->kmin >= VAR_2->kmax) {
    VAR_2->kmin = VAR_2->kmax - 1;
    if (VAR_3) {
      FUNC_2(VAR_1, "WARNING: Setting kmin = %d, so that kmin < kmax.\n",
              VAR_2->kmin);
    }
  } else {
    const int VAR_4 = VAR_2->kmax / 2 + 1;
    if (VAR_2->kmin < VAR_4 && VAR_4 < VAR_2->kmax) {


      VAR_2->kmin = VAR_4;
      if (VAR_3) {
        FUNC_2(VAR_1,
                "WARNING: Setting kmin = %d, so that kmin >= kmax / 2 + 1.\n",
                VAR_2->kmin);
      }
    }
  }

  if (VAR_2->kmax - VAR_2->kmin > VAR_0) {
    VAR_2->kmin = VAR_2->kmax - VAR_0;
    if (VAR_3) {
      FUNC_2(VAR_1,
              "WARNING: Setting kmin = %d, so that kmax - kmin <= %d.\n",
              VAR_2->kmin, VAR_0);
    }
  }
  FUNC_1(VAR_2->kmin < VAR_2->kmax);
}
