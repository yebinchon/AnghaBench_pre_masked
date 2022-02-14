
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLISNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLGETNAMEDSTRINGIVARBPROC ;
typedef scalar_t__ PFNGLGETNAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLDELETENAMEDSTRINGARBPROC ;
typedef scalar_t__ PFNGLCOMPILESHADERINCLUDEARBPROC ;
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
 VAR_6 = (PFNGLNAMEDSTRINGARBPROC)VAR_7("glNamedStringARB");
 VAR_2 = (PFNGLDELETENAMEDSTRINGARBPROC)VAR_7("glDeleteNamedStringARB");
 VAR_1 = (PFNGLCOMPILESHADERINCLUDEARBPROC)VAR_7("glCompileShaderIncludeARB");
 VAR_5 = (PFNGLISNAMEDSTRINGARBPROC)VAR_7("glIsNamedStringARB");
 VAR_3 = (PFNGLGETNAMEDSTRINGARBPROC)VAR_7("glGetNamedStringARB");
 VAR_4 = (PFNGLGETNAMEDSTRINGIVARBPROC)VAR_7("glGetNamedStringivARB");
}
