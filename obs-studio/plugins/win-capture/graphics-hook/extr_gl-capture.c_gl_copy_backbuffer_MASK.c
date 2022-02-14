
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cy; int cx; int base_cy; int base_cx; int fbo; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(GLuint VAR_10)
{
 FUNC_1(VAR_3, VAR_8.fbo);
 if (FUNC_8("gl_copy_backbuffer", "failed to bind FBO")) {
  return;
 }

 FUNC_2(VAR_6, VAR_10);
 if (FUNC_8("gl_copy_backbuffer", "failed to bind texture")) {
  return;
 }

 FUNC_5(VAR_3, VAR_1,
          VAR_6, VAR_10, 0);
 if (FUNC_8("gl_copy_backbuffer", "failed to set frame buffer")) {
  return;
 }

 FUNC_7(VAR_0);


 VAR_7 = FUNC_6() == VAR_4 &&
         FUNC_0(VAR_9, "Darkest.exe") == 0;

 FUNC_4(VAR_1);
 if (FUNC_8("gl_copy_backbuffer", "failed to set draw buffer")) {
  return;
 }

 FUNC_3(0, 0, VAR_8.base_cx, VAR_8.base_cy, 0, 0, VAR_8.cx,
     VAR_8.cy, VAR_2, VAR_5);
 FUNC_8("gl_copy_backbuffer", "failed to blit");
}
