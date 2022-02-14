
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEPBUFFERDCEXTPROC ;
typedef scalar_t__ PFNWGLQUERYPBUFFEREXTPROC ;
typedef scalar_t__ PFNWGLGETPBUFFERDCEXTPROC ;
typedef scalar_t__ PFNWGLDESTROYPBUFFEREXTPROC ;
typedef scalar_t__ PFNWGLCREATEPBUFFEREXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLCREATEPBUFFEREXTPROC)VAR_6("wglCreatePbufferEXT");
 VAR_3 = (PFNWGLGETPBUFFERDCEXTPROC)VAR_6("wglGetPbufferDCEXT");
 VAR_5 = (PFNWGLRELEASEPBUFFERDCEXTPROC)VAR_6("wglReleasePbufferDCEXT");
 VAR_2 = (PFNWGLDESTROYPBUFFEREXTPROC)VAR_6("wglDestroyPbufferEXT");
 VAR_4 = (PFNWGLQUERYPBUFFEREXTPROC)VAR_6("wglQueryPbufferEXT");
}
