
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSETSTEREOEMITTERSTATE3DLPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_2) {
 if(!VAR_0) return;
 VAR_1 = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)VAR_2("wglSetStereoEmitterState3DL");
}
