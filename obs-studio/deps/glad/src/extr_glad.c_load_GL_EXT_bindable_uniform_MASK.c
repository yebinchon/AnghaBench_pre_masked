
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBUFFEREXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMOFFSETEXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBUFFERSIZEEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLUNIFORMBUFFEREXTPROC)VAR_4("glUniformBufferEXT");
 VAR_1 = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)VAR_4("glGetUniformBufferSizeEXT");
 VAR_2 = (PFNGLGETUNIFORMOFFSETEXTPROC)VAR_4("glGetUniformOffsetEXT");
}
