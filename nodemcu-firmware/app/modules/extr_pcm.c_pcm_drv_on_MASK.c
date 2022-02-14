
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ vu_freq; void* cb_vu_ref; void* cb_stopped_ref; void* cb_paused_ref; void* cb_drained_ref; void* cb_data_ref; } ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int *,int,int,char*) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int ,void*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_6 )
{
  size_t VAR_7;
  const char *VAR_8;
  uint8_t VAR_9 = VAR_0;

  FUNC_1();

  VAR_8 = FUNC_3( VAR_6, 2, &VAR_7 );

  if ((FUNC_9( VAR_6, 3 ) == VAR_2) ||
      (FUNC_9( VAR_6, 3 ) == VAR_3)) {
    FUNC_8( VAR_6, 3 );
    VAR_9 = VAR_4;
  }

  if ((VAR_7 == 4) && (FUNC_10( VAR_8, "data" ) == 0)) {
    FUNC_6( VAR_6, VAR_1, VAR_5->cb_data_ref);
    VAR_5->cb_data_ref = FUNC_0( VAR_9 );
  } else if ((VAR_7 == 7) && (FUNC_10( VAR_8, "drained" ) == 0)) {
    FUNC_6( VAR_6, VAR_1, VAR_5->cb_drained_ref);
    VAR_5->cb_drained_ref = FUNC_0( VAR_9 );
  } else if ((VAR_7 == 6) && (FUNC_10( VAR_8, "paused" ) == 0)) {
    FUNC_6( VAR_6, VAR_1, VAR_5->cb_paused_ref);
    VAR_5->cb_paused_ref = FUNC_0( VAR_9 );
  } else if ((VAR_7 == 7) && (FUNC_10( VAR_8, "stopped" ) == 0)) {
    FUNC_6( VAR_6, VAR_1, VAR_5->cb_stopped_ref);
    VAR_5->cb_stopped_ref = FUNC_0( VAR_9 );
  } else if ((VAR_7 == 2) && (FUNC_10( VAR_8, "vu" ) == 0)) {
    FUNC_6( VAR_6, VAR_1, VAR_5->cb_vu_ref);
    VAR_5->cb_vu_ref = FUNC_0( VAR_9 );

    int VAR_10 = FUNC_5( VAR_6, 4, 10 );
    FUNC_2( VAR_6, (VAR_10 > 0) && (VAR_10 <= 200), 4, "invalid range" );
    VAR_5->vu_freq = (uint8_t)VAR_10;
  } else {
    if (VAR_9) {

      FUNC_7( VAR_6, 1 );
    }
    return FUNC_4( VAR_6, "method not supported" );
  }

  return 0;
}
