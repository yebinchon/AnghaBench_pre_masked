
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSTOPINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLSTARTINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLREADINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLPOLLINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLINSTRUMENTSBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLGETINSTRUMENTSSGIXPROC ;
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
 VAR_1 = (PFNGLGETINSTRUMENTSSGIXPROC)VAR_7("glGetInstrumentsSGIX");
 VAR_2 = (PFNGLINSTRUMENTSBUFFERSGIXPROC)VAR_7("glInstrumentsBufferSGIX");
 VAR_3 = (PFNGLPOLLINSTRUMENTSSGIXPROC)VAR_7("glPollInstrumentsSGIX");
 VAR_4 = (PFNGLREADINSTRUMENTSSGIXPROC)VAR_7("glReadInstrumentsSGIX");
 VAR_5 = (PFNGLSTARTINSTRUMENTSSGIXPROC)VAR_7("glStartInstrumentsSGIX");
 VAR_6 = (PFNGLSTOPINSTRUMENTSSGIXPROC)VAR_7("glStopInstrumentsSGIX");
}
