
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dxgi_swap; int gl_dxobj; int gl_device; int texture; } ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
 GLint VAR_5;
 GLint VAR_6;

 FUNC_6(VAR_4.gl_device, 1, &VAR_4.gl_dxobj);

 FUNC_3(VAR_1, &VAR_5);
 if (FUNC_5("gl_shtex_capture", "failed to get last fbo")) {
  return;
 }

 FUNC_3(VAR_3, &VAR_6);
 if (FUNC_5("gl_shtex_capture", "failed to get last texture")) {
  return;
 }

 FUNC_4(VAR_4.texture);

 FUNC_2(VAR_2, VAR_6);
 FUNC_1(VAR_0, VAR_5);

 FUNC_7(VAR_4.gl_device, 1, &VAR_4.gl_dxobj);

 FUNC_0(VAR_4.dxgi_swap, 0, 0);
}
