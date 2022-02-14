
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVSGIPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVSGIPROC ;
typedef scalar_t__ PFNGLCOPYCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLESGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERIVSGIPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERFVSGIPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLCOLORTABLESGIPROC)VAR_8("glColorTableSGI");
 VAR_1 = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)VAR_8("glColorTableParameterfvSGI");
 VAR_2 = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)VAR_8("glColorTableParameterivSGI");
 VAR_4 = (PFNGLCOPYCOLORTABLESGIPROC)VAR_8("glCopyColorTableSGI");
 VAR_7 = (PFNGLGETCOLORTABLESGIPROC)VAR_8("glGetColorTableSGI");
 VAR_5 = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)VAR_8("glGetColorTableParameterfvSGI");
 VAR_6 = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)VAR_8("glGetColorTableParameterivSGI");
}
