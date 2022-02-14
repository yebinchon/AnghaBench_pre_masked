
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ passwd_modes ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t) ;
 char* FUNC_3 (size_t,char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_6 (char*,char*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_7 (char*,char*,char*) ;
 size_t FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(int VAR_8, char **VAR_9, char **VAR_10,
                     char *VAR_11, BIO *VAR_12, int VAR_13, int VAR_14,
                     int VAR_15, size_t VAR_16, passwd_modes VAR_17)
{
    char *VAR_18 = ((void*)0);

    FUNC_5(VAR_9 != ((void*)0));
    FUNC_5(VAR_10 != ((void*)0));


    if (!VAR_8) {
        size_t VAR_19 = 0;
        size_t VAR_20;


        if (VAR_17 == VAR_4)
            VAR_19 = 2;


        if (VAR_17 == VAR_5 || VAR_17 == VAR_3 || VAR_17 == VAR_2)
            VAR_19 = 8;

        if (VAR_17 == VAR_6 || VAR_17 == VAR_7)
            VAR_19 = 16;

        FUNC_5(VAR_19 != 0);

        if (*VAR_10 == ((void*)0))
            *VAR_9 = *VAR_10 = FUNC_3(VAR_19 + 1, "salt buffer");
        if (FUNC_2((unsigned char *)*VAR_9, VAR_19) <= 0)
            goto end;

        for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
            (*VAR_9)[VAR_20] = VAR_1[(*VAR_9)[VAR_20] & 0x3f];
        (*VAR_9)[VAR_20] = 0;




    }

    FUNC_5(*VAR_9 != ((void*)0));


    if ((FUNC_8(VAR_11) > VAR_16)) {
        if (!VAR_13)



            FUNC_0(&VAR_0,
                       "Warning: truncating password to %u characters\n",
                       (unsigned)VAR_16);
        VAR_11[VAR_16] = 0;
    }
    FUNC_5(FUNC_8(VAR_11) <= VAR_16);



    if (VAR_17 == VAR_4)
        VAR_18 = FUNC_1(VAR_11, *VAR_9);

    if (VAR_17 == VAR_5 || VAR_17 == VAR_3)
        VAR_18 = FUNC_6(VAR_11, (VAR_17 == VAR_5 ? "1" : "apr1"), *VAR_9);
    if (VAR_17 == VAR_2)
        VAR_18 = FUNC_6(VAR_11, "", *VAR_9);
    if (VAR_17 == VAR_6 || VAR_17 == VAR_7)
        VAR_18 = FUNC_7(VAR_11, (VAR_17 == VAR_6 ? "5" : "6"), *VAR_9);
    FUNC_5(VAR_18 != ((void*)0));

    if (VAR_14 && !VAR_15)
        FUNC_0(VAR_12, "%s\t%s\n", VAR_11, VAR_18);
    else if (VAR_14 && VAR_15)
        FUNC_0(VAR_12, "%s\t%s\n", VAR_18, VAR_11);
    else
        FUNC_0(VAR_12, "%s\n", VAR_18);
    return 1;

 end:
    return 0;
}
