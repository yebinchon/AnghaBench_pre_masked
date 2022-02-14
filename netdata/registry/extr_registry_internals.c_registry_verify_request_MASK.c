
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REGISTRY_PERSON_URL ;
typedef int REGISTRY_PERSON ;
typedef int REGISTRY_MACHINE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*) ;

REGISTRY_PERSON_URL *FUNC_6(char *VAR_1, char *VAR_2, char *VAR_3, REGISTRY_PERSON **VAR_4, REGISTRY_MACHINE **VAR_5) {
    char VAR_6[VAR_0 + 1], VAR_7[VAR_0 + 1];

    if(!VAR_1 || !*VAR_1 || !VAR_2 || !*VAR_2 || !VAR_3 || !*VAR_3) {
        FUNC_0("Registry Request Verification: invalid request! person: '%s', machine '%s', url '%s'", VAR_1?VAR_1:"UNSET", VAR_2?VAR_2:"UNSET", VAR_3?VAR_3:"UNSET");
        return ((void*)0);
    }


    VAR_3 = FUNC_2(VAR_3, ((void*)0));


    if(FUNC_1(VAR_1, VAR_6) == -1) {
        FUNC_0("Registry Request Verification: invalid person GUID, person: '%s', machine '%s', url '%s'", VAR_1, VAR_2, VAR_3);
        return ((void*)0);
    }
    VAR_1 = VAR_6;


    if(FUNC_1(VAR_2, VAR_7) == -1) {
        FUNC_0("Registry Request Verification: invalid machine GUID, person: '%s', machine '%s', url '%s'", VAR_1, VAR_2, VAR_3);
        return ((void*)0);
    }
    VAR_2 = VAR_7;


    REGISTRY_MACHINE *VAR_8 = FUNC_3(VAR_2);
    if(!VAR_8) {
        FUNC_0("Registry Request Verification: machine not found, person: '%s', machine '%s', url '%s'", VAR_1, VAR_2, VAR_3);
        return ((void*)0);
    }
    if(VAR_5) *VAR_5 = VAR_8;


    REGISTRY_PERSON *VAR_9 = FUNC_4(VAR_1);
    if(!VAR_9) {
        FUNC_0("Registry Request Verification: person not found, person: '%s', machine '%s', url '%s'", VAR_1, VAR_2, VAR_3);
        return ((void*)0);
    }
    if(VAR_4) *VAR_4 = VAR_9;

    REGISTRY_PERSON_URL *VAR_10 = FUNC_5(VAR_9, VAR_3);
    if(!VAR_10) {
        FUNC_0("Registry Request Verification: URL not found for person, person: '%s', machine '%s', url '%s'", VAR_1, VAR_2, VAR_3);
        return ((void*)0);
    }





    return VAR_10;
}
