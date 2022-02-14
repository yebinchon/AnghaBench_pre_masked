
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int usages_count; } ;
typedef int REGISTRY_URL ;
typedef int REGISTRY_PERSON ;
typedef int REGISTRY_MACHINE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*,char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_1 (char*,size_t*) ;
 char* FUNC_2 (char*,size_t*) ;
 int FUNC_3 (char,int *,int *,int *,char*) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int *,int *,char*,size_t,int ) ;
 int * FUNC_8 (char*,size_t) ;

REGISTRY_PERSON *FUNC_9(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, time_t VAR_6) {
    FUNC_0(VAR_0, "registry_request_access('%s', '%s', '%s'): NEW REQUEST", (VAR_2)?VAR_2:"", VAR_3, VAR_4);

    REGISTRY_MACHINE *VAR_7 = FUNC_4(VAR_3, VAR_6);
    if(!VAR_7) return ((void*)0);


    size_t VAR_8;
    VAR_5 = FUNC_1(VAR_5, &VAR_8);

    size_t VAR_9;
    VAR_4 = FUNC_2(VAR_4, &VAR_9);

    REGISTRY_PERSON *VAR_10 = FUNC_6(VAR_2, VAR_6);

    REGISTRY_URL *VAR_11 = FUNC_8(VAR_4, VAR_9);
    FUNC_7(VAR_10, VAR_7, VAR_11, VAR_5, VAR_8, VAR_6);
    FUNC_5(VAR_7, VAR_11, VAR_6);

    FUNC_3('A', VAR_10, VAR_7, VAR_11, VAR_5);

    VAR_1.usages_count++;

    return VAR_10;
}
