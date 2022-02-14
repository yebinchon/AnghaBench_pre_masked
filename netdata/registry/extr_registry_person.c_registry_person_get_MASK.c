
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int REGISTRY_PERSON ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;

REGISTRY_PERSON *FUNC_6(const char *VAR_2, time_t VAR_3) {
    FUNC_0(VAR_0, "Registry: registry_person_get('%s'): creating dictionary of urls", VAR_2);

    REGISTRY_PERSON *VAR_4 = ((void*)0);

    if(VAR_2 && *VAR_2) {
        char VAR_5[VAR_1 + 1];

        if(FUNC_5(FUNC_2(VAR_2, VAR_5) == -1))
            FUNC_1("Registry: person guid '%s' is not a valid guid. Ignoring it.", VAR_2);
        else {
            VAR_2 = VAR_5;
            VAR_4 = FUNC_4(VAR_2);
        }
    }

    if(!VAR_4) VAR_4 = FUNC_3(((void*)0), VAR_3);

    return VAR_4;
}
