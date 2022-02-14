
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLLOADDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLBINDDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_2 = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)VAR_5("wglCreateDisplayColorTableEXT");
 VAR_4 = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)VAR_5("wglLoadDisplayColorTableEXT");
 VAR_1 = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)VAR_5("wglBindDisplayColorTableEXT");
 VAR_3 = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)VAR_5("wglDestroyDisplayColorTableEXT");
}
