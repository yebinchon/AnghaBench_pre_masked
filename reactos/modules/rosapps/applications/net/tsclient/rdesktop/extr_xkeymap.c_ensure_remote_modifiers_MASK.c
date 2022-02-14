
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_9__ {scalar_t__ modifiers; int scancode; } ;
typedef TYPE_2__ key_translation ;
struct TYPE_8__ {scalar_t__ remote_modifier_state; } ;
struct TYPE_10__ {TYPE_1__ xkeymap; int numlock_sync; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;

void
FUNC_5(RDPCLIENT * VAR_12, uint32 VAR_13, key_translation VAR_14)
{

 if (FUNC_2(VAR_14.scancode))
  return;

 if (!VAR_12->numlock_sync)
 {

  if (FUNC_1(VAR_14.modifiers, VAR_3)
      != FUNC_1(VAR_12->xkeymap.remote_modifier_state, VAR_3))
  {

   uint16 VAR_15;

   if (FUNC_1(VAR_14.modifiers, VAR_3))
   {
    FUNC_0(("Remote NumLock state is incorrect, activating NumLock.\n"));
    VAR_15 = VAR_0;
    VAR_12->xkeymap.remote_modifier_state = VAR_3;
   }
   else
   {
    FUNC_0(("Remote NumLock state is incorrect, deactivating NumLock.\n"));
    VAR_15 = 0;
    VAR_12->xkeymap.remote_modifier_state = 0;
   }

   FUNC_3(VAR_12, 0, VAR_6, 0, VAR_15, 0);
  }
 }



 if (FUNC_1(VAR_14.modifiers, VAR_5)
     != FUNC_1(VAR_12->xkeymap.remote_modifier_state, VAR_5))
 {

  if (FUNC_1(VAR_14.modifiers, VAR_2))
  {

   FUNC_4(VAR_12, VAR_13, VAR_7, VAR_9);
  }
  else if (FUNC_1(VAR_14.modifiers, VAR_4))
  {

   FUNC_4(VAR_12, VAR_13, VAR_7, VAR_11);
  }
  else
  {

   if (FUNC_1(VAR_12->xkeymap.remote_modifier_state, VAR_2))

    FUNC_4(VAR_12, VAR_13, VAR_8, VAR_9);
   else

    FUNC_4(VAR_12, VAR_13, VAR_8, VAR_11);
  }
 }


 if (FUNC_1(VAR_14.modifiers, VAR_1)
     != FUNC_1(VAR_12->xkeymap.remote_modifier_state, VAR_1))
 {

  if (FUNC_1(VAR_14.modifiers, VAR_1))
  {

   FUNC_4(VAR_12, VAR_13, VAR_7, VAR_10);
  }
  else
  {

   FUNC_4(VAR_12, VAR_13, VAR_8, VAR_10);
  }
 }


}
