
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ last_event_time; int timer_running; scalar_t__ longpress_delay_us; int lastpos; scalar_t__ click_delay_us; int timer; scalar_t__ last_recent_event_was_release; scalar_t__ last_recent_event_was_press; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(DATA *VAR_2, uint32_t VAR_3, bool VAR_4)
{
  uint32_t VAR_5 = VAR_3 - VAR_2->last_event_time;
  if (VAR_2->timer_running) {
    FUNC_3(&VAR_2->timer);
    VAR_2->timer_running = 0;
  }

  int VAR_6 = -1;

  if (VAR_2->last_recent_event_was_press) {
    if (VAR_5 > VAR_2->longpress_delay_us) {
      FUNC_0(FUNC_1(), VAR_2, VAR_1, (VAR_2->lastpos << 1) >> 1, VAR_2->last_event_time + VAR_2->longpress_delay_us);
      VAR_2->last_recent_event_was_press = 0;
    } else {
      VAR_6 = (VAR_2->longpress_delay_us - VAR_5) / 1000;
    }
  }
  if (VAR_2->last_recent_event_was_release) {
    if (VAR_5 > VAR_2->click_delay_us) {
      FUNC_0(FUNC_1(), VAR_2, VAR_0, (VAR_2->lastpos << 1) >> 1, VAR_2->last_event_time + VAR_2->click_delay_us);
      VAR_2->last_recent_event_was_release = 0;
    } else {
      VAR_6 = (VAR_2->click_delay_us - VAR_5) / 1000;
    }
  }

  if (VAR_4 && VAR_6 >= 0) {
    VAR_2->timer_running = 1;
    FUNC_2(&VAR_2->timer, VAR_6 + 1, 0);
  }
}
