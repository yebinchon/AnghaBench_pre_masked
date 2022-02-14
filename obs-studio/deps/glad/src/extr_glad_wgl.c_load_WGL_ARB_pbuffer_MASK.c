
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLRELEASEPBUFFERDCARBPROC ;
typedef scalar_t__ PFNWGLQUERYPBUFFERARBPROC ;
typedef scalar_t__ PFNWGLGETPBUFFERDCARBPROC ;
typedef scalar_t__ PFNWGLDESTROYPBUFFERARBPROC ;
typedef scalar_t__ PFNWGLCREATEPBUFFERARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLCREATEPBUFFERARBPROC)VAR_6("wglCreatePbufferARB");
 VAR_3 = (PFNWGLGETPBUFFERDCARBPROC)VAR_6("wglGetPbufferDCARB");
 VAR_5 = (PFNWGLRELEASEPBUFFERDCARBPROC)VAR_6("wglReleasePbufferDCARB");
 VAR_2 = (PFNWGLDESTROYPBUFFERARBPROC)VAR_6("wglDestroyPbufferARB");
 VAR_4 = (PFNWGLQUERYPBUFFERARBPROC)VAR_6("wglQueryPbufferARB");
}
