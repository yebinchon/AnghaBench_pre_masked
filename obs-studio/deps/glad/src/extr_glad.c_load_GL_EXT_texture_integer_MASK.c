
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXPARAMETERIUIVEXTPROC ;
typedef scalar_t__ PFNGLTEXPARAMETERIIVEXTPROC ;
typedef scalar_t__ PFNGLGETTEXPARAMETERIUIVEXTPROC ;
typedef scalar_t__ PFNGLGETTEXPARAMETERIIVEXTPROC ;
typedef scalar_t__ PFNGLCLEARCOLORIUIEXTPROC ;
typedef scalar_t__ PFNGLCLEARCOLORIIEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_5 = (PFNGLTEXPARAMETERIIVEXTPROC)VAR_7("glTexParameterIivEXT");
 VAR_6 = (PFNGLTEXPARAMETERIUIVEXTPROC)VAR_7("glTexParameterIuivEXT");
 VAR_3 = (PFNGLGETTEXPARAMETERIIVEXTPROC)VAR_7("glGetTexParameterIivEXT");
 VAR_4 = (PFNGLGETTEXPARAMETERIUIVEXTPROC)VAR_7("glGetTexParameterIuivEXT");
 VAR_1 = (PFNGLCLEARCOLORIIEXTPROC)VAR_7("glClearColorIiEXT");
 VAR_2 = (PFNGLCLEARCOLORIUIEXTPROC)VAR_7("glClearColorIuiEXT");
}
