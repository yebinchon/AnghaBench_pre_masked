
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLISENABLEDINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLGETINTEGERINDEXEDVEXTPROC ;
typedef scalar_t__ PFNGLGETBOOLEANINDEXEDVEXTPROC ;
typedef scalar_t__ PFNGLENABLEINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLDISABLEINDEXEDEXTPROC ;
typedef scalar_t__ PFNGLCOLORMASKINDEXEDEXTPROC ;
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
 VAR_1 = (PFNGLCOLORMASKINDEXEDEXTPROC)VAR_7("glColorMaskIndexedEXT");
 VAR_4 = (PFNGLGETBOOLEANINDEXEDVEXTPROC)VAR_7("glGetBooleanIndexedvEXT");
 VAR_5 = (PFNGLGETINTEGERINDEXEDVEXTPROC)VAR_7("glGetIntegerIndexedvEXT");
 VAR_3 = (PFNGLENABLEINDEXEDEXTPROC)VAR_7("glEnableIndexedEXT");
 VAR_2 = (PFNGLDISABLEINDEXEDEXTPROC)VAR_7("glDisableIndexedEXT");
 VAR_6 = (PFNGLISENABLEDINDEXEDEXTPROC)VAR_7("glIsEnabledIndexedEXT");
}
