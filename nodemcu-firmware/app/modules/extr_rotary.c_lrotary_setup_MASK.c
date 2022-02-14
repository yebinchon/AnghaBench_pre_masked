
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {unsigned int id; int click_delay_us; int longpress_delay_us; int * callback; int timer; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int,int,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int *,int ,void*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int,int,int,int,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13( lua_State* VAR_10 )
{
  unsigned int VAR_11;

  VAR_11 = FUNC_5( VAR_10, 1 );
  FUNC_0( VAR_8, VAR_11 );

  if (FUNC_11(VAR_11)) {
    return FUNC_6( VAR_10, "Unable to close switch." );
  }
  FUNC_2(VAR_10, VAR_11, VAR_4);

  if (!VAR_6[VAR_11]) {
    VAR_6[VAR_11] = (DATA *) FUNC_3(1, sizeof(DATA));
    if (!VAR_6[VAR_11]) {
      return -1;
    }
  }

  DATA *VAR_12 = VAR_6[VAR_11];
  FUNC_8(VAR_12, 0, sizeof(*VAR_12));

  VAR_12->id = VAR_11;

  FUNC_9(&VAR_12->timer, VAR_7, (void *) VAR_12);
  FUNC_1(VAR_7, VAR_5);





  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
    VAR_12->callback[VAR_13] = VAR_3;
  }

  VAR_12->click_delay_us = VAR_1;
  VAR_12->longpress_delay_us = VAR_2;

  int VAR_14 = FUNC_5(VAR_10, 2);
  FUNC_4(VAR_10, FUNC_10(VAR_14) && VAR_14 > 0, 2, "Invalid pin");
  int VAR_15 = FUNC_5(VAR_10, 3);
  FUNC_4(VAR_10, FUNC_10(VAR_15) && VAR_15 > 0, 3, "Invalid pin");
  int VAR_16;
  if (FUNC_7(VAR_10) >= 4) {
    VAR_16 = FUNC_5(VAR_10, 4);
    FUNC_4(VAR_10, FUNC_10(VAR_16) && VAR_16 > 0, 4, "Invalid pin");
  } else {
    VAR_16 = -1;
  }

  if (FUNC_7(VAR_10) >= 5) {
    VAR_12->longpress_delay_us = 1000 * FUNC_5(VAR_10, 5);
    FUNC_4(VAR_10, VAR_12->longpress_delay_us > 0, 5, "Invalid timeout");
  }

  if (FUNC_7(VAR_10) >= 6) {
    VAR_12->click_delay_us = 1000 * FUNC_5(VAR_10, 6);
    FUNC_4(VAR_10, VAR_12->click_delay_us > 0, 6, "Invalid timeout");
  }

  if (FUNC_12(VAR_11, VAR_14, VAR_15, VAR_16, VAR_9)) {
    return FUNC_6(VAR_10, "Unable to setup rotary switch.");
  }
  return 0;
}
