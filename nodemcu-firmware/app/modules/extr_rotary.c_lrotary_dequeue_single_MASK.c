
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pos; scalar_t__ time_us; } ;
typedef TYPE_1__ rotary_event_t ;
typedef int lua_State ;
struct TYPE_8__ {int lastpos; int last_recent_event_was_release; scalar_t__ last_event_time; scalar_t__ click_delay_us; int possible_dbl_click; int last_recent_event_was_press; int id; } ;
typedef TYPE_2__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(lua_State* VAR_5, DATA *VAR_6)
{
  bool VAR_7 = VAR_0;

  if (VAR_6) {

    rotary_event_t VAR_8;

    if (FUNC_2(VAR_6->id, &VAR_8)) {
      int VAR_9 = VAR_8.pos;

      FUNC_1(VAR_6, VAR_8.time_us, 0);

      if (VAR_9 != VAR_6->lastpos) {

 if ((VAR_9 ^ VAR_6->lastpos) & 0x7fffffff) {

   FUNC_0(VAR_5, VAR_6, VAR_4, (VAR_9 << 1) >> 1, VAR_8.time_us);
 }
 if ((VAR_9 ^ VAR_6->lastpos) & 0x80000000) {

   FUNC_0(VAR_5, VAR_6, (VAR_9 & 0x80000000) ? VAR_2 : VAR_3, (VAR_9 << 1) >> 1, VAR_8.time_us);
   if (VAR_9 & 0x80000000) {

     if (VAR_6->last_recent_event_was_release && VAR_8.time_us - VAR_6->last_event_time < VAR_6->click_delay_us) {
       VAR_6->possible_dbl_click = 1;
     }
     VAR_6->last_recent_event_was_press = 1;
     VAR_6->last_recent_event_was_release = 0;
   } else {

     VAR_6->last_recent_event_was_press = 0;
     if (VAR_6->possible_dbl_click) {
       FUNC_0(VAR_5, VAR_6, VAR_1, (VAR_9 << 1) >> 1, VAR_8.time_us);
       VAR_6->possible_dbl_click = 0;

       VAR_6->last_recent_event_was_release = 0;
     } else {
       VAR_6->last_recent_event_was_release = 1;
     }
   }
   VAR_6->last_event_time = VAR_8.time_us;
 }

 VAR_6->lastpos = VAR_9;
      }

      VAR_7 = FUNC_3(VAR_6->id);
    }

    FUNC_1(VAR_6, FUNC_4(), 1);
  }

  return VAR_7;
}
