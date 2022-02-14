
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int component ;
typedef scalar_t__ (* OSSL_cmp_log_cb_t ) (char*,char const*,int,int ,char*) ;


 int FUNC_0 (char*,int,char*,char const*,...) ;
 int VAR_0 ;
 unsigned long FUNC_1 (char const**,int*,char const**,char const**,int*) ;
 int FUNC_2 (unsigned long) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(OSSL_cmp_log_cb_t VAR_4)
{
    unsigned long VAR_5;
    char VAR_6[VAR_1];
    const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10, VAR_11;

    if (VAR_4 == ((void*)0)) {

        FUNC_3(VAR_3);



        return;
    }

    while ((VAR_5 = FUNC_1(&VAR_7, &VAR_10, &VAR_8, &VAR_9, &VAR_11)) != 0) {
        char VAR_12[128];
        const char *VAR_13 = VAR_8 != ((void*)0) && *VAR_8 != '\0' ? VAR_8 : "<unknown>";

        if (!(VAR_11 & VAR_0))
            VAR_9 = ((void*)0);




        FUNC_0(VAR_12, sizeof(VAR_12), "%s",VAR_13);

        FUNC_0(VAR_6, sizeof(VAR_6), "%s%s%s", FUNC_4(VAR_5),
                     VAR_9 == ((void*)0) ? "" : " : ", VAR_9 == ((void*)0) ? "" : VAR_9);
        if (VAR_4(VAR_12, VAR_7, VAR_10, VAR_2, VAR_6) <= 0)
            break;
    }
}
