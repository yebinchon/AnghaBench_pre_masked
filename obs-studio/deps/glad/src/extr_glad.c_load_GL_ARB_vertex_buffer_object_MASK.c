
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPBUFFERARBPROC ;
typedef scalar_t__ PFNGLMAPBUFFERARBPROC ;
typedef scalar_t__ PFNGLISBUFFERARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERSUBDATAARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERPOINTERVARBPROC ;
typedef scalar_t__ PFNGLGETBUFFERPARAMETERIVARBPROC ;
typedef scalar_t__ PFNGLGENBUFFERSARBPROC ;
typedef scalar_t__ PFNGLDELETEBUFFERSARBPROC ;
typedef scalar_t__ PFNGLBUFFERSUBDATAARBPROC ;
typedef scalar_t__ PFNGLBUFFERDATAARBPROC ;
typedef scalar_t__ PFNGLBINDBUFFERARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_12) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBINDBUFFERARBPROC)VAR_12("glBindBufferARB");
 VAR_4 = (PFNGLDELETEBUFFERSARBPROC)VAR_12("glDeleteBuffersARB");
 VAR_5 = (PFNGLGENBUFFERSARBPROC)VAR_12("glGenBuffersARB");
 VAR_9 = (PFNGLISBUFFERARBPROC)VAR_12("glIsBufferARB");
 VAR_2 = (PFNGLBUFFERDATAARBPROC)VAR_12("glBufferDataARB");
 VAR_3 = (PFNGLBUFFERSUBDATAARBPROC)VAR_12("glBufferSubDataARB");
 VAR_8 = (PFNGLGETBUFFERSUBDATAARBPROC)VAR_12("glGetBufferSubDataARB");
 VAR_10 = (PFNGLMAPBUFFERARBPROC)VAR_12("glMapBufferARB");
 VAR_11 = (PFNGLUNMAPBUFFERARBPROC)VAR_12("glUnmapBufferARB");
 VAR_6 = (PFNGLGETBUFFERPARAMETERIVARBPROC)VAR_12("glGetBufferParameterivARB");
 VAR_7 = (PFNGLGETBUFFERPOINTERVARBPROC)VAR_12("glGetBufferPointervARB");
}
