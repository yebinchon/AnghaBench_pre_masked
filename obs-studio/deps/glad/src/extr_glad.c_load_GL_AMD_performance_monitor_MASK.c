
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSELECTPERFMONITORCOUNTERSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORGROUPSTRINGAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORGROUPSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERINFOAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERDATAAMDPROC ;
typedef scalar_t__ PFNGLGENPERFMONITORSAMDPROC ;
typedef scalar_t__ PFNGLENDPERFMONITORAMDPROC ;
typedef scalar_t__ PFNGLDELETEPERFMONITORSAMDPROC ;
typedef scalar_t__ PFNGLBEGINPERFMONITORAMDPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_12) {
 if(!VAR_0) return;
 VAR_10 = (PFNGLGETPERFMONITORGROUPSAMDPROC)VAR_12("glGetPerfMonitorGroupsAMD");
 VAR_8 = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)VAR_12("glGetPerfMonitorCountersAMD");
 VAR_9 = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)VAR_12("glGetPerfMonitorGroupStringAMD");
 VAR_7 = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)VAR_12("glGetPerfMonitorCounterStringAMD");
 VAR_6 = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)VAR_12("glGetPerfMonitorCounterInfoAMD");
 VAR_4 = (PFNGLGENPERFMONITORSAMDPROC)VAR_12("glGenPerfMonitorsAMD");
 VAR_2 = (PFNGLDELETEPERFMONITORSAMDPROC)VAR_12("glDeletePerfMonitorsAMD");
 VAR_11 = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)VAR_12("glSelectPerfMonitorCountersAMD");
 VAR_1 = (PFNGLBEGINPERFMONITORAMDPROC)VAR_12("glBeginPerfMonitorAMD");
 VAR_3 = (PFNGLENDPERFMONITORAMDPROC)VAR_12("glEndPerfMonitorAMD");
 VAR_5 = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)VAR_12("glGetPerfMonitorCounterDataAMD");
}
