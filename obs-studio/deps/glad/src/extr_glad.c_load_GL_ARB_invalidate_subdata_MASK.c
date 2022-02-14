
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLINVALIDATETEXSUBIMAGEPROC ;
typedef scalar_t__ PFNGLINVALIDATETEXIMAGEPROC ;
typedef scalar_t__ PFNGLINVALIDATESUBFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLINVALIDATEFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLINVALIDATEBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLINVALIDATEBUFFERDATAPROC ;
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
 VAR_6 = (PFNGLINVALIDATETEXSUBIMAGEPROC)VAR_7("glInvalidateTexSubImage");
 VAR_5 = (PFNGLINVALIDATETEXIMAGEPROC)VAR_7("glInvalidateTexImage");
 VAR_2 = (PFNGLINVALIDATEBUFFERSUBDATAPROC)VAR_7("glInvalidateBufferSubData");
 VAR_1 = (PFNGLINVALIDATEBUFFERDATAPROC)VAR_7("glInvalidateBufferData");
 VAR_3 = (PFNGLINVALIDATEFRAMEBUFFERPROC)VAR_7("glInvalidateFramebuffer");
 VAR_4 = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)VAR_7("glInvalidateSubFramebuffer");
}
