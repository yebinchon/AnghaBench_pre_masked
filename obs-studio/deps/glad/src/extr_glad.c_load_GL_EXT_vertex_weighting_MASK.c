
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXWEIGHTPOINTEREXTPROC ;
typedef scalar_t__ PFNGLVERTEXWEIGHTFVEXTPROC ;
typedef scalar_t__ PFNGLVERTEXWEIGHTFEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_2 = (PFNGLVERTEXWEIGHTFEXTPROC)VAR_4("glVertexWeightfEXT");
 VAR_3 = (PFNGLVERTEXWEIGHTFVEXTPROC)VAR_4("glVertexWeightfvEXT");
 VAR_1 = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)VAR_4("glVertexWeightPointerEXT");
}
