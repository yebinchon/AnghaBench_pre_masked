
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_windowinfo {scalar_t__ hdc; int hwnd; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct gl_windowinfo*) ;

void FUNC_2(struct gl_windowinfo *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->hdc)
   FUNC_0(VAR_0->hwnd, VAR_0->hdc);
  FUNC_1(VAR_0);
 }
}
