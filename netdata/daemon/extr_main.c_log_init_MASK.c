
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*,char*) ;
 long long FUNC_1 (int ,char*,long long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 long long VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (char*,void*,int) ;
 int FUNC_3 (char*,int,char*,char*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static void FUNC_4(void) {
    char VAR_10[VAR_1 + 1];
    FUNC_3(VAR_10, VAR_1, "%s/debug.log", VAR_6);
    VAR_9 = FUNC_0(VAR_0, "debug log", VAR_10);

    FUNC_3(VAR_10, VAR_1, "%s/error.log", VAR_6);
    VAR_8 = FUNC_0(VAR_0, "error log", VAR_10);

    FUNC_3(VAR_10, VAR_1, "%s/access.log", VAR_6);
    VAR_7 = FUNC_0(VAR_0, "access log", VAR_10);

    char VAR_11[8];
    FUNC_3(VAR_11,7,"%s","daemon");
    VAR_5 = FUNC_0(VAR_0, "facility log", VAR_11);

    VAR_4 = FUNC_1(VAR_0, "errors flood protection period", VAR_4);
    VAR_2 = (unsigned long)FUNC_1(VAR_0, "errors to trigger flood protection", (long long int)VAR_2);
    VAR_3 = VAR_2;

    FUNC_2("NETDATA_ERRORS_THROTTLE_PERIOD", FUNC_0(VAR_0, "errors flood protection period" , ""), 1);
    FUNC_2("NETDATA_ERRORS_PER_PERIOD", FUNC_0(VAR_0, "errors to trigger flood protection", ""), 1);
}
