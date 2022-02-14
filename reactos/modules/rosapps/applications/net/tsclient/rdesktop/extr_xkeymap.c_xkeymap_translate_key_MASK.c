
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_7__ {scalar_t__ seq_keysym; unsigned int modifiers; unsigned int scancode; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ key_translation ;
struct TYPE_6__ {unsigned int remote_modifier_state; int min_keycode; scalar_t__ keymap_loaded; TYPE_2__** keymap; } ;
struct TYPE_8__ {TYPE_1__ xkeymap; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,int ) ;

key_translation
FUNC_5(RDPCLIENT * VAR_7, uint32 VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 key_translation VAR_11 = { 0, 0, 0, 0 };
 key_translation *VAR_12;

 VAR_12 = VAR_7->xkeymap.keymap[VAR_8 & VAR_0];
 if (VAR_12)
 {
  VAR_11 = *VAR_12;
  if (VAR_11.seq_keysym == 0)
  {
   if (FUNC_1(VAR_11.modifiers, VAR_2))
   {
    FUNC_0(("Inhibiting key\n"));
    VAR_11.scancode = 0;
    return VAR_11;
   }

   if (FUNC_1(VAR_11.modifiers, VAR_4))
   {


    if (FUNC_1(VAR_10, VAR_6))
    {
     VAR_11.modifiers = VAR_3;
    }
   }







   if (FUNC_1(VAR_11.modifiers, VAR_5)
       && FUNC_1(VAR_7->xkeymap.remote_modifier_state, VAR_1)
       && !FUNC_1(VAR_10, VAR_6))
   {
    FUNC_0(("Non-physical Shift + Ctrl pressed, releasing Shift\n"));
    FUNC_2(VAR_11.modifiers, VAR_5);
   }

   FUNC_0(("Found scancode translation, scancode=0x%x, modifiers=0x%x\n",
       VAR_11.scancode, VAR_11.modifiers));
  }
 }
 else
 {
  if (VAR_7->xkeymap.keymap_loaded)
   FUNC_4("No translation for (keysym 0x%lx, %s)\n", VAR_8,
    FUNC_3(VAR_8));


  if (((int) VAR_9 >= VAR_7->xkeymap.min_keycode) && (VAR_9 <= 0x60))
  {
   VAR_11.scancode = VAR_9 - VAR_7->xkeymap.min_keycode;




   if (FUNC_1(VAR_10, VAR_6))
   {
    VAR_11.modifiers = VAR_3;
   }

   FUNC_0(("Sending guessed scancode 0x%x\n", VAR_11.scancode));
  }
  else
  {
   FUNC_0(("No good guess for keycode 0x%x found\n", VAR_9));
  }
 }

 return VAR_11;
}
