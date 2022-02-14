
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwnd; } ;
struct gs_init_data {TYPE_1__ window; } ;
struct gl_windowinfo {int hdc; int hwnd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gl_windowinfo*) ;
 int FUNC_2 (int ,char*) ;
 struct gl_windowinfo* FUNC_3 (int) ;

__attribute__((used)) static struct gl_windowinfo *FUNC_4(const struct gs_init_data *VAR_1)
{
 struct gl_windowinfo *VAR_2 = FUNC_3(sizeof(struct gl_windowinfo));
 VAR_2->hwnd = VAR_1->window.hwnd;
 VAR_2->hdc = FUNC_0(VAR_2->hwnd);

 if (!VAR_2->hdc) {
  FUNC_2(VAR_0, "Unable to get device context from window");
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
