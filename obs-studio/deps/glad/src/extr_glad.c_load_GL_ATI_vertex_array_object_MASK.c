
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVARIANTARRAYOBJECTATIPROC ;
typedef scalar_t__ PFNGLUPDATEOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLNEWOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLISOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLGETVARIANTARRAYOBJECTIVATIPROC ;
typedef scalar_t__ PFNGLGETVARIANTARRAYOBJECTFVATIPROC ;
typedef scalar_t__ PFNGLGETOBJECTBUFFERIVATIPROC ;
typedef scalar_t__ PFNGLGETOBJECTBUFFERFVATIPROC ;
typedef scalar_t__ PFNGLGETARRAYOBJECTIVATIPROC ;
typedef scalar_t__ PFNGLGETARRAYOBJECTFVATIPROC ;
typedef scalar_t__ PFNGLFREEOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLARRAYOBJECTATIPROC ;
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
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_13) {
 if(!VAR_0) return;
 VAR_10 = (PFNGLNEWOBJECTBUFFERATIPROC)VAR_13("glNewObjectBufferATI");
 VAR_9 = (PFNGLISOBJECTBUFFERATIPROC)VAR_13("glIsObjectBufferATI");
 VAR_11 = (PFNGLUPDATEOBJECTBUFFERATIPROC)VAR_13("glUpdateObjectBufferATI");
 VAR_5 = (PFNGLGETOBJECTBUFFERFVATIPROC)VAR_13("glGetObjectBufferfvATI");
 VAR_6 = (PFNGLGETOBJECTBUFFERIVATIPROC)VAR_13("glGetObjectBufferivATI");
 VAR_2 = (PFNGLFREEOBJECTBUFFERATIPROC)VAR_13("glFreeObjectBufferATI");
 VAR_1 = (PFNGLARRAYOBJECTATIPROC)VAR_13("glArrayObjectATI");
 VAR_3 = (PFNGLGETARRAYOBJECTFVATIPROC)VAR_13("glGetArrayObjectfvATI");
 VAR_4 = (PFNGLGETARRAYOBJECTIVATIPROC)VAR_13("glGetArrayObjectivATI");
 VAR_12 = (PFNGLVARIANTARRAYOBJECTATIPROC)VAR_13("glVariantArrayObjectATI");
 VAR_7 = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)VAR_13("glGetVariantArrayObjectfvATI");
 VAR_8 = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)VAR_13("glGetVariantArrayObjectivATI");
}
