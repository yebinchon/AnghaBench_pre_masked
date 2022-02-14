
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBIVEXTPROC ;
typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBFVEXTPROC ;
typedef scalar_t__ PFNWGLCHOOSEPIXELFORMATEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)VAR_4("wglGetPixelFormatAttribivEXT");
 VAR_2 = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)VAR_4("wglGetPixelFormatAttribfvEXT");
 VAR_1 = (PFNWGLCHOOSEPIXELFORMATEXTPROC)VAR_4("wglChoosePixelFormatEXT");
}
