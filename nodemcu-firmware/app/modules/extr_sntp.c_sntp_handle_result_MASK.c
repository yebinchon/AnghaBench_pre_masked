
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rtc_timeval {scalar_t__ tv_sec; int tv_usec; } ;
typedef int lua_State ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int stratum; int delta; int when; int delay_frac; int root_delay; int root_dispersion; int root_maxerr; int LI; int server; int server_pos; } ;
struct TYPE_4__ {scalar_t__ sync_cb_ref; TYPE_1__ best; scalar_t__ is_on_timeout; int last_server_pos; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_timeval*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,int,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct rtc_timeval*) ;
 int FUNC_14 (struct rtc_timeval*) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (char*,int ,int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(lua_State *VAR_10) {
  const uint32_t VAR_11 = 1000000;

  if (VAR_9->best.stratum == 0) {


    VAR_8 = 0;
    FUNC_4(VAR_10, VAR_3, ((void*)0));
    return;
  }

  bool VAR_12 = (VAR_9->sync_cb_ref != VAR_0 && VAR_9->sync_cb_ref != VAR_1);

  VAR_9->last_server_pos = VAR_9->best.server_pos;
  if (VAR_12)
  {
    FUNC_10(VAR_10, VAR_2, VAR_9->sync_cb_ref);
    int VAR_13 = FUNC_16() - VAR_9->best.when;
    int VAR_14 = VAR_9->best.delta >> 32;
    int VAR_15 = (int) (((VAR_9->best.delta & 0xffffffff) * VAR_11) >> 32) + VAR_13;
    while (VAR_15 >= 1000000) {
      VAR_15 -= 1000000;
      VAR_14++;
    }
    FUNC_8(VAR_10, VAR_14);
    FUNC_8(VAR_10, VAR_15);
    FUNC_9(VAR_10, FUNC_5 (&VAR_9->best.server));
    FUNC_7(VAR_10);

    if (VAR_9->best.delay_frac > 0) {
      FUNC_8(VAR_10, FUNC_0(VAR_9->best.delay_frac));
      FUNC_11(VAR_10, -2, "delay_us");
    }
    FUNC_8(VAR_10, FUNC_0(VAR_9->best.root_delay));
    FUNC_11(VAR_10, -2, "root_delay_us");
    FUNC_8(VAR_10, FUNC_0(VAR_9->best.root_dispersion));
    FUNC_11(VAR_10, -2, "root_dispersion_us");
    FUNC_8(VAR_10, FUNC_0(VAR_9->best.root_maxerr + VAR_9->best.delay_frac / 2));
    FUNC_11(VAR_10, -2, "root_maxerr_us");
    FUNC_8(VAR_10, VAR_9->best.stratum);
    FUNC_11(VAR_10, -2, "stratum");
    FUNC_8(VAR_10, VAR_9->best.LI);
    FUNC_11(VAR_10, -2, "leap");
    FUNC_8(VAR_10, VAR_6);
    FUNC_11(VAR_10, -2, "pending_leap");
  }

  FUNC_2 (VAR_10);

  if (VAR_12)
  {
    FUNC_6 (VAR_10, 4, 0);
  }
}
