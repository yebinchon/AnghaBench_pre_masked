
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdc; int hwnd; } ;
struct gl_platform {TYPE_1__ window; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_5(struct gl_platform *VAR_3)
{
 VAR_3->window.hwnd = FUNC_0(0, VAR_0,
         "OpenGL Dummy Window", VAR_2, 0,
         0, 1, 1, ((void*)0), ((void*)0),
         FUNC_3(((void*)0)), ((void*)0));
 if (!VAR_3->window.hwnd) {
  FUNC_4(VAR_1, "Failed to create dummy GL window, %lu",
       FUNC_2());
  return 0;
 }

 VAR_3->window.hdc = FUNC_1(VAR_3->window.hwnd);
 if (!VAR_3->window.hdc) {
  FUNC_4(VAR_1, "Failed to get dummy GL window DC (%lu)",
       FUNC_2());
  return 0;
 }

 return 1;
}
