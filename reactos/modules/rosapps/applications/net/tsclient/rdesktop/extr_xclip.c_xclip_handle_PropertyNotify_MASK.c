
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_12__ {int your_event_mask; } ;
typedef TYPE_2__ XWindowAttributes ;
struct TYPE_13__ {scalar_t__ state; scalar_t__ atom; scalar_t__ window; } ;
typedef TYPE_3__ XPropertyEvent ;
struct TYPE_11__ {scalar_t__ clip_buflen; scalar_t__ rdesktop_selection_notify_atom; int rdesktop_clipboard_target_atom; int * clip_buffer; int incr_target; scalar_t__ waiting_for_INCR; } ;
struct TYPE_14__ {int display; TYPE_1__ xclip; int wnd; } ;
typedef TYPE_4__ RDPCLIENT ;
typedef int Atom ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,unsigned long,long,int ,int ,int *,int*,unsigned long*,unsigned long*,int **) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int *,unsigned long) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int *,scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,scalar_t__) ;

void
FUNC_13(RDPCLIENT * VAR_5, XPropertyEvent * VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 1;
 int VAR_10;
 XWindowAttributes VAR_11;
 uint8 *VAR_12;
 Atom VAR_13;

 if (VAR_6->state == VAR_3 && VAR_5->xclip.waiting_for_INCR)
 {
  FUNC_0(("x_clip_handle_PropertyNotify: This->xclip.waiting_for_INCR != 0\n"));

  while (VAR_9 > 0)
  {


   if ((FUNC_5
        (VAR_5->display, VAR_5->wnd, VAR_5->xclip.rdesktop_clipboard_target_atom, VAR_8, 4096L,
         VAR_1, VAR_0, &VAR_13, &VAR_10, &VAR_7, &VAR_9,
         &VAR_12) != VAR_4))
   {
    FUNC_3(VAR_12);
    return;
   }

   if (VAR_7 == 0)
   {

    FUNC_4(VAR_5->display, VAR_5->wnd, &VAR_11);
    FUNC_6(VAR_5->display, VAR_5->wnd,
          (VAR_11.your_event_mask ^ VAR_2));
    FUNC_3(VAR_12);
    VAR_5->xclip.waiting_for_INCR = 0;

    if (VAR_5->xclip.clip_buflen > 0)
    {
     if (!FUNC_10
         (VAR_5, VAR_5->xclip.clip_buffer, VAR_5->xclip.clip_buflen, VAR_5->xclip.incr_target))
     {
      FUNC_7(VAR_5);
     }
     FUNC_11(VAR_5->xclip.clip_buffer);
     VAR_5->xclip.clip_buffer = ((void*)0);
     VAR_5->xclip.clip_buflen = 0;
    }
   }
   else
   {

    VAR_8 += (VAR_7 / 4);
    VAR_5->xclip.clip_buffer = FUNC_12(VAR_5->xclip.clip_buffer, VAR_5->xclip.clip_buflen + VAR_7);
    FUNC_8(VAR_5->xclip.clip_buffer + VAR_5->xclip.clip_buflen, VAR_12, VAR_7);
    VAR_5->xclip.clip_buflen += VAR_7;

    FUNC_3(VAR_12);
   }
  }
  FUNC_2(VAR_5->display, VAR_5->wnd, VAR_5->xclip.rdesktop_clipboard_target_atom);
  return;
 }

 if ((VAR_6->atom == VAR_5->xclip.rdesktop_selection_notify_atom) &&
     (VAR_6->window == FUNC_1(VAR_5->display)))
  FUNC_9(VAR_5);
}
