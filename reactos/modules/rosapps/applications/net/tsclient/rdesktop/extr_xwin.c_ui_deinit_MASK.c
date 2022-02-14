
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int wnd; } ;
struct TYPE_8__ {int gc; int backstore; int mod_map; int * null_cursor; int * IM; TYPE_7__* seamless_windows; } ;
struct TYPE_9__ {int * display; TYPE_1__ xwin; scalar_t__ ownbackstore; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;

void
FUNC_9(RDPCLIENT * VAR_0)
{
 while (VAR_0->xwin.seamless_windows)
 {
  FUNC_2(VAR_0->display, VAR_0->xwin.seamless_windows->wnd);
  FUNC_6(VAR_0, VAR_0->xwin.seamless_windows);
 }

 FUNC_8(VAR_0);

 if (VAR_0->xwin.IM != ((void*)0))
  FUNC_1(VAR_0->xwin.IM);

 if (VAR_0->xwin.null_cursor != ((void*)0))
  FUNC_7(VAR_0, VAR_0->xwin.null_cursor);

 FUNC_4(VAR_0->xwin.mod_map);

 if (VAR_0->ownbackstore)
  FUNC_5(VAR_0->display, VAR_0->xwin.backstore);

 FUNC_3(VAR_0->display, VAR_0->xwin.gc);
 FUNC_0(VAR_0->display);
 VAR_0->display = ((void*)0);
}
