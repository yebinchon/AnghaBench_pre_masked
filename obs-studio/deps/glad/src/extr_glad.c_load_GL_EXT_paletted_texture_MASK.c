
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNGLCOLORTABLEEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_5) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLCOLORTABLEEXTPROC)VAR_5("glColorTableEXT");
 VAR_2 = (PFNGLGETCOLORTABLEEXTPROC)VAR_5("glGetColorTableEXT");
 VAR_4 = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)VAR_5("glGetColorTableParameterivEXT");
 VAR_3 = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)VAR_5("glGetColorTableParameterfvEXT");
}
