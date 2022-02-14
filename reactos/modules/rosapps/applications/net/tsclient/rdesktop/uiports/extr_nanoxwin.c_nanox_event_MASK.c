
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {int changebuttons; int y; int x; } ;
struct TYPE_8__ {scalar_t__ fd; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_1__ GR_EVENT_MOUSE ;
typedef int GR_EVENT_KEYSTROKE ;
typedef TYPE_2__ GR_EVENT_FDINPUT ;
typedef TYPE_3__ GR_EVENT_BUTTON ;
typedef TYPE_4__ GR_EVENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;
 int VAR_19 ;

void FUNC_6(GR_EVENT * VAR_20)
{
  GR_EVENT_MOUSE * VAR_21;
  GR_EVENT_BUTTON * VAR_22;
  GR_EVENT_FDINPUT * VAR_23;
  GR_EVENT_KEYSTROKE * VAR_24;

  do
  {
    if (VAR_20->type == VAR_2)
    {
      VAR_23 = (GR_EVENT_FDINPUT *) VAR_20;
      if (VAR_23->fd == VAR_18)
      {
        if (!FUNC_4(&VAR_16, &VAR_17))
        {
          FUNC_2(VAR_19, "rdp_loop in nanox_event exit codes %d %d\n",
                  VAR_16, VAR_17);
          FUNC_1(1);
        }
      }
    }
    else if (VAR_20->type == VAR_0)
    {
      VAR_22 = (GR_EVENT_BUTTON *) VAR_20;
      if (VAR_22->changebuttons & 4)
      {
        FUNC_5(0, VAR_15, VAR_13 | VAR_11,
                       VAR_22->x, VAR_22->y);
      }
      else if (VAR_22->changebuttons & 1)
      {
        FUNC_5(0, VAR_15, VAR_13 | VAR_12,
                       VAR_22->x, VAR_22->y);
      }
    }
    else if (VAR_20->type == VAR_1)
    {
      VAR_22 = (GR_EVENT_BUTTON *) VAR_20;
      if (VAR_22->changebuttons & 4)
      {
        FUNC_5(0, VAR_15, VAR_11,
                       VAR_22->x, VAR_22->y);
      }
      else if (VAR_22->changebuttons & 1)
      {
        FUNC_5(0, VAR_15, VAR_12,
                       VAR_22->x, VAR_22->y);
      }
    }
    else if (VAR_20->type == VAR_7)
    {
      VAR_21 = (GR_EVENT_MOUSE *) VAR_20;
      FUNC_5(0, VAR_15, VAR_14,
                     VAR_21->x, VAR_21->y);
    }
    else if (VAR_20->type == VAR_8)
    {

    }
    else if (VAR_20->type == VAR_5)
    {
      VAR_24 = (GR_EVENT_KEYSTROKE *) VAR_20;
      FUNC_3(VAR_24, 1);
    }
    else if (VAR_20->type == VAR_6)
    {
      VAR_24 = (GR_EVENT_KEYSTROKE *) VAR_20;
      FUNC_3(VAR_24, 0);
    }
    else if (VAR_20->type == VAR_3)
    {
    }
    else if (VAR_20->type == VAR_4)
    {
    }
    else if (VAR_20->type == VAR_10)
    {
    }
    FUNC_0(VAR_20);
  } while (VAR_20->type != VAR_9);
}
