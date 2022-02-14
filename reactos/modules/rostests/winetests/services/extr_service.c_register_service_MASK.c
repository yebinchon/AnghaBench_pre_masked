
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;


 int * FUNC_0 (int ,char*,char*,int ,int ,int ,int ,char*,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char const*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static SC_HANDLE FUNC_10(const char *VAR_9)
{
    char VAR_10[VAR_3+150], *VAR_11;
    SC_HANDLE VAR_12;

    VAR_11 = VAR_10 + FUNC_3(((void*)0), VAR_10, VAR_3);


    if(FUNC_1(VAR_10) == VAR_2) {
        FUNC_7(VAR_11, ".so");
        VAR_11 += 3;
    }

    FUNC_7(VAR_11, " service ");
    VAR_11 += FUNC_8(VAR_11);
    FUNC_6(VAR_11, "%s ", VAR_9);
    VAR_11 += FUNC_8(VAR_11);
    FUNC_7(VAR_11, VAR_8);

    FUNC_9("service_cmd \"%s\"\n", VAR_10);

    VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_8, VAR_1,
                             VAR_6, VAR_4, VAR_5,
                             VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if(!VAR_12 && FUNC_2() == VAR_0) {
        FUNC_5("Not enough access right to create service\n");
        return ((void*)0);
    }

    FUNC_4(VAR_12 != ((void*)0), "CreateService failed: %u\n", FUNC_2());
    return VAR_12;
}
