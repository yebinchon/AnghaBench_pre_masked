
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;


 int FUNC_0 (int ,char*,char const*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int *,int,long,unsigned char*,int ,int,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

X509_NAME *FUNC_9(const char *VAR_2, long VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    char *VAR_6;
    X509_NAME *VAR_7;

    if (*VAR_2++ != '/') {
        FUNC_0(VAR_1,
                   "name is expected to be in the format "
                   "/type0=value0/type1=value1/type2=... where characters may "
                   "be escaped by \\. This name is not in that format: '%s'\n",
                   --VAR_2);
        return ((void*)0);
    }

    VAR_7 = FUNC_6();
    if (VAR_7 == ((void*)0))
        return ((void*)0);
    VAR_6 = FUNC_3(VAR_2);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_1, "%s: Error copying name input\n", FUNC_7());
        goto err;
    }

    while (*VAR_2) {
        char *VAR_8 = VAR_6;
        char *VAR_9 = VAR_8;
        unsigned char *VAR_10;
        int VAR_11;
        int VAR_12 = VAR_5;
        VAR_5 = 0;


        while (*VAR_2 && *VAR_2 != '=')
            *VAR_8++ = *VAR_2++;
        if (*VAR_2 == '\0') {
            FUNC_0(VAR_1,
                    "%s: Hit end of string before finding the '='\n",
                    FUNC_7());
            goto err;
        }
        *VAR_8++ = '\0';
        ++VAR_2;


        VAR_10 = (unsigned char *)VAR_8;
        for (; *VAR_2 && *VAR_2 != '/'; *VAR_8++ = *VAR_2++) {
            if (VAR_4 && *VAR_2 == '+') {
                VAR_5 = 1;
                break;
            }
            if (*VAR_2 == '\\' && *++VAR_2 == '\0') {
                FUNC_0(VAR_1,
                           "%s: escape character at end of string\n",
                           FUNC_7());
                goto err;
            }
        }
        *VAR_8++ = '\0';


        if (*VAR_2)
            ++VAR_2;


        VAR_11 = FUNC_1(VAR_9);
        if (VAR_11 == VAR_0) {
            FUNC_0(VAR_1, "%s: Skipping unknown attribute \"%s\"\n",
                       FUNC_7(), VAR_9);
            continue;
        }
        if (*VAR_10 == '\0') {
            FUNC_0(VAR_1,
                       "%s: No value provided for Subject Attribute %s, skipped\n",
                       FUNC_7(), VAR_9);
            continue;
        }
        if (!FUNC_4(VAR_7, VAR_11, VAR_3,
                                        VAR_10, FUNC_8((char *)VAR_10),
                                        -1, VAR_12 ? -1 : 0)) {
            FUNC_0(VAR_1, "%s: Error adding name attribute \"/%s=%s\"\n",
                       FUNC_7(), VAR_9 ,VAR_10);
            goto err;
        }
    }

    FUNC_2(VAR_6);
    return VAR_7;

 err:
    FUNC_5(VAR_7);
    FUNC_2(VAR_6);
    return ((void*)0);
}
