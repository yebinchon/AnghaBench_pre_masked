
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int wnd; } ;
struct TYPE_5__ {int * colmap; } ;
struct TYPE_6__ {int display; int wnd; TYPE_1__ xwin; int owncolmap; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef scalar_t__ HCOLOURMAP ;
typedef int Colormap ;


 int FUNC_0 (int (*) (int ,int ,int ),int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3(RDPCLIENT * VAR_1, HCOLOURMAP VAR_2)
{
 if (!VAR_1->owncolmap)
 {
  if (VAR_1->xwin.colmap)
   FUNC_2(VAR_1->xwin.colmap);

  VAR_1->xwin.colmap = (uint32 *) VAR_2;
 }
 else
 {
  FUNC_1(VAR_1->display, VAR_1->wnd, (Colormap) VAR_2);
  FUNC_0(FUNC_1, (VAR_1->display, VAR_0->wnd, (Colormap) VAR_2));
 }
}
