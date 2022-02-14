
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_5__ {int formats_data_length; scalar_t__ formats_data; int clipboard_atom; int acquire_time; int primary_atom; } ;
struct TYPE_6__ {scalar_t__ wnd; TYPE_1__ xclip; int display; int last_gesturetime; } ;
typedef TYPE_2__ RDPCLIENT ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

void
FUNC_7(RDPCLIENT * VAR_0, uint8 * VAR_1, uint32 VAR_2)
{
 VAR_0->xclip.acquire_time = VAR_0->last_gesturetime;

 FUNC_1(VAR_0->display, VAR_0->xclip.primary_atom, VAR_0->wnd, VAR_0->xclip.acquire_time);
 if (FUNC_0(VAR_0->display, VAR_0->xclip.primary_atom) != VAR_0->wnd)
  FUNC_3("Failed to aquire ownership of PRIMARY clipboard\n");

 FUNC_1(VAR_0->display, VAR_0->xclip.clipboard_atom, VAR_0->wnd, VAR_0->xclip.acquire_time);
 if (FUNC_0(VAR_0->display, VAR_0->xclip.clipboard_atom) != VAR_0->wnd)
  FUNC_3("Failed to aquire ownership of CLIPBOARD clipboard\n");

 if (VAR_0->xclip.formats_data)
  FUNC_5(VAR_0->xclip.formats_data);
 VAR_0->xclip.formats_data = FUNC_6(VAR_2);
 FUNC_2(VAR_0->xclip.formats_data, VAR_1, VAR_2);
 VAR_0->xclip.formats_data_length = VAR_2;

 FUNC_4(VAR_0);
}
