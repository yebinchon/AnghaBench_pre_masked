
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ effect_type; int effect_int_param1; int counter_mode_step; int mode_delay; int counter_mode_call; int running; int os_t; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_18 ;
 int FUNC_2 (int ,int,int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void *VAR_19)
{

  if (VAR_18->effect_type == VAR_4)
  {
    FUNC_3();
  }
  else if (VAR_18->effect_type == VAR_14)
  {
    FUNC_8();
  }
  else if (VAR_18->effect_type == VAR_15)
  {

    FUNC_2(VAR_18->buffer, 1, VAR_2, 1, -1);
  }
  else if (VAR_18->effect_type == VAR_11)
  {
    int VAR_20 = VAR_18->effect_int_param1 != VAR_0 ? VAR_18->effect_int_param1 : 100;
    if (VAR_20 == 0) {
      VAR_20 = 50;
    }
    FUNC_6(VAR_20);
    VAR_18->counter_mode_step = (VAR_18->counter_mode_step + 1) % 256;
  }
  else if (VAR_18->effect_type == VAR_8)
  {
    FUNC_6(110);
    VAR_18->counter_mode_step = (VAR_18->counter_mode_step + 1) % 256;
  }
  else if (VAR_18->effect_type == VAR_10)
  {
    FUNC_6(70);
    VAR_18->counter_mode_step = (VAR_18->counter_mode_step + 1) % 256;
  }
  else if (VAR_18->effect_type == VAR_9)
  {
    FUNC_6(170);
    VAR_18->counter_mode_step = (VAR_18->counter_mode_step + 1) % 256;
  }
  else if (VAR_18->effect_type == VAR_16)
  {
    FUNC_9();
  }
  else if (VAR_18->effect_type == VAR_12)
  {
    FUNC_2(VAR_18->buffer, 1, VAR_2, 1, -1);
  }
  else if (VAR_18->effect_type == VAR_5)
  {
    FUNC_2(VAR_18->buffer, 1, VAR_2, 1, -1);
  }
  else if (VAR_18->effect_type == VAR_13)
  {
    FUNC_7();
  }
  else if (VAR_18->effect_type == VAR_7)
  {
    FUNC_2(VAR_18->buffer, VAR_18->effect_int_param1, VAR_2, 1, -1);
  }
  else if (VAR_18->effect_type == VAR_6)
  {
    FUNC_4();
  }
  else if (VAR_18->effect_type == VAR_17)
  {
    uint8_t VAR_21 = VAR_18->effect_int_param1 != VAR_0 ? VAR_18->effect_int_param1 : 1;
    FUNC_10(VAR_21);
  }


  VAR_18->mode_delay = FUNC_5();

  VAR_18->counter_mode_call = (VAR_18->counter_mode_call + 1) % VAR_3;

  FUNC_11(VAR_18->buffer);

  if (VAR_18->running == 1 && VAR_18->mode_delay >= 10)
  {
    FUNC_1(&(VAR_18->os_t));
    FUNC_0(&(VAR_18->os_t), VAR_18->mode_delay, VAR_1);
  }
}
