
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESETMINMAXEXTPROC ;
typedef scalar_t__ PFNGLRESETHISTOGRAMEXTPROC ;
typedef scalar_t__ PFNGLMINMAXEXTPROC ;
typedef scalar_t__ PFNGLHISTOGRAMEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMEXTPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETHISTOGRAMEXTPROC)VAR_11("glGetHistogramEXT");
 VAR_2 = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)VAR_11("glGetHistogramParameterfvEXT");
 VAR_3 = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)VAR_11("glGetHistogramParameterivEXT");
 VAR_4 = (PFNGLGETMINMAXEXTPROC)VAR_11("glGetMinmaxEXT");
 VAR_5 = (PFNGLGETMINMAXPARAMETERFVEXTPROC)VAR_11("glGetMinmaxParameterfvEXT");
 VAR_6 = (PFNGLGETMINMAXPARAMETERIVEXTPROC)VAR_11("glGetMinmaxParameterivEXT");
 VAR_7 = (PFNGLHISTOGRAMEXTPROC)VAR_11("glHistogramEXT");
 VAR_8 = (PFNGLMINMAXEXTPROC)VAR_11("glMinmaxEXT");
 VAR_9 = (PFNGLRESETHISTOGRAMEXTPROC)VAR_11("glResetHistogramEXT");
 VAR_10 = (PFNGLRESETMINMAXEXTPROC)VAR_11("glResetMinmaxEXT");
}
