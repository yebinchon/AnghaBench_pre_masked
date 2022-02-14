
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORM4UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM4UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM3UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM3UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM2UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM2UIEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM1UIVEXTPROC ;
typedef scalar_t__ PFNGLUNIFORM1UIEXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMUIVEXTPROC ;
typedef scalar_t__ PFNGLGETFRAGDATALOCATIONEXTPROC ;
typedef scalar_t__ PFNGLBINDFRAGDATALOCATIONEXTPROC ;
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
 VAR_3 = (PFNGLGETUNIFORMUIVEXTPROC)VAR_12("glGetUniformuivEXT");
 VAR_1 = (PFNGLBINDFRAGDATALOCATIONEXTPROC)VAR_12("glBindFragDataLocationEXT");
 VAR_2 = (PFNGLGETFRAGDATALOCATIONEXTPROC)VAR_12("glGetFragDataLocationEXT");
 VAR_4 = (PFNGLUNIFORM1UIEXTPROC)VAR_12("glUniform1uiEXT");
 VAR_6 = (PFNGLUNIFORM2UIEXTPROC)VAR_12("glUniform2uiEXT");
 VAR_8 = (PFNGLUNIFORM3UIEXTPROC)VAR_12("glUniform3uiEXT");
 VAR_10 = (PFNGLUNIFORM4UIEXTPROC)VAR_12("glUniform4uiEXT");
 VAR_5 = (PFNGLUNIFORM1UIVEXTPROC)VAR_12("glUniform1uivEXT");
 VAR_7 = (PFNGLUNIFORM2UIVEXTPROC)VAR_12("glUniform2uivEXT");
 VAR_9 = (PFNGLUNIFORM3UIVEXTPROC)VAR_12("glUniform3uivEXT");
 VAR_11 = (PFNGLUNIFORM4UIVEXTPROC)VAR_12("glUniform4uivEXT");
}
