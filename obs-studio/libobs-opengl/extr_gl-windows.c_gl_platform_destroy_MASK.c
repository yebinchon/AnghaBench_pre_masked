
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwnd; scalar_t__ hdc; } ;
struct gl_platform {TYPE_1__ window; scalar_t__ hrc; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct gl_platform*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct gl_platform *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->hrc) {
   FUNC_4(((void*)0), ((void*)0));
   FUNC_3(VAR_0->hrc);
  }

  if (VAR_0->window.hdc)
   FUNC_1(VAR_0->window.hwnd, VAR_0->window.hdc);
  if (VAR_0->window.hwnd)
   FUNC_0(VAR_0->window.hwnd);

  FUNC_2(VAR_0);
 }
}
