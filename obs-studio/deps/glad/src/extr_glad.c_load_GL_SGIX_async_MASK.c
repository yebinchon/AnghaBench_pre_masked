
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPOLLASYNCSGIXPROC ;
typedef scalar_t__ PFNGLISASYNCMARKERSGIXPROC ;
typedef scalar_t__ PFNGLGENASYNCMARKERSSGIXPROC ;
typedef scalar_t__ PFNGLFINISHASYNCSGIXPROC ;
typedef scalar_t__ PFNGLDELETEASYNCMARKERSSGIXPROC ;
typedef scalar_t__ PFNGLASYNCMARKERSGIXPROC ;
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
 VAR_1 = (PFNGLASYNCMARKERSGIXPROC)VAR_7("glAsyncMarkerSGIX");
 VAR_3 = (PFNGLFINISHASYNCSGIXPROC)VAR_7("glFinishAsyncSGIX");
 VAR_6 = (PFNGLPOLLASYNCSGIXPROC)VAR_7("glPollAsyncSGIX");
 VAR_4 = (PFNGLGENASYNCMARKERSSGIXPROC)VAR_7("glGenAsyncMarkersSGIX");
 VAR_2 = (PFNGLDELETEASYNCMARKERSSGIXPROC)VAR_7("glDeleteAsyncMarkersSGIX");
 VAR_5 = (PFNGLISASYNCMARKERSGIXPROC)VAR_7("glIsAsyncMarkerSGIX");
}
