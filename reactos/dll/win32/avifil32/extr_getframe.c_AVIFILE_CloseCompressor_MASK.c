
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hic; scalar_t__ bResize; int * lpInFormat; int * lpOutFormat; } ;
typedef TYPE_1__ IGetFrameImpl ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(IGetFrameImpl *VAR_0)
{
  if (VAR_0->lpInFormat != VAR_0->lpOutFormat) {
    FUNC_1(FUNC_0(), 0, VAR_0->lpOutFormat);
    VAR_0->lpOutFormat = ((void*)0);
  }
  FUNC_1(FUNC_0(), 0, VAR_0->lpInFormat);
  VAR_0->lpInFormat = ((void*)0);
  if (VAR_0->hic != ((void*)0)) {
    if (VAR_0->bResize)
      FUNC_4(VAR_0->hic);
    else
      FUNC_3(VAR_0->hic);
    FUNC_2(VAR_0->hic);
    VAR_0->hic = ((void*)0);
  }
}
