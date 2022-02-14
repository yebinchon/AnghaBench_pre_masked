
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETPERFQUERYINFOINTELPROC ;
typedef scalar_t__ PFNGLGETPERFQUERYIDBYNAMEINTELPROC ;
typedef scalar_t__ PFNGLGETPERFQUERYDATAINTELPROC ;
typedef scalar_t__ PFNGLGETPERFCOUNTERINFOINTELPROC ;
typedef scalar_t__ PFNGLGETNEXTPERFQUERYIDINTELPROC ;
typedef scalar_t__ PFNGLGETFIRSTPERFQUERYIDINTELPROC ;
typedef scalar_t__ PFNGLENDPERFQUERYINTELPROC ;
typedef scalar_t__ PFNGLDELETEPERFQUERYINTELPROC ;
typedef scalar_t__ PFNGLCREATEPERFQUERYINTELPROC ;
typedef scalar_t__ PFNGLBEGINPERFQUERYINTELPROC ;
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

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLBEGINPERFQUERYINTELPROC)VAR_11("glBeginPerfQueryINTEL");
 VAR_2 = (PFNGLCREATEPERFQUERYINTELPROC)VAR_11("glCreatePerfQueryINTEL");
 VAR_3 = (PFNGLDELETEPERFQUERYINTELPROC)VAR_11("glDeletePerfQueryINTEL");
 VAR_4 = (PFNGLENDPERFQUERYINTELPROC)VAR_11("glEndPerfQueryINTEL");
 VAR_5 = (PFNGLGETFIRSTPERFQUERYIDINTELPROC)VAR_11("glGetFirstPerfQueryIdINTEL");
 VAR_6 = (PFNGLGETNEXTPERFQUERYIDINTELPROC)VAR_11("glGetNextPerfQueryIdINTEL");
 VAR_7 = (PFNGLGETPERFCOUNTERINFOINTELPROC)VAR_11("glGetPerfCounterInfoINTEL");
 VAR_8 = (PFNGLGETPERFQUERYDATAINTELPROC)VAR_11("glGetPerfQueryDataINTEL");
 VAR_9 = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC)VAR_11("glGetPerfQueryIdByNameINTEL");
 VAR_10 = (PFNGLGETPERFQUERYINFOINTELPROC)VAR_11("glGetPerfQueryInfoINTEL");
}
