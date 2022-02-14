
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)VAR_4("glDrawArraysInstancedBaseInstance");
 VAR_2 = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)VAR_4("glDrawElementsInstancedBaseInstance");
 VAR_3 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)VAR_4("glDrawElementsInstancedBaseVertexBaseInstance");
}
