
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int X509 ;
typedef int ASN1_STRING ;
typedef int ASN1_OBJECT ;


 scalar_t__ FUNC_0 (unsigned char**,int *) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_10(X509 *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4;
    ASN1_OBJECT *VAR_5;
    ASN1_STRING *VAR_6;
    X509_NAME *VAR_7;
    X509_NAME_ENTRY *VAR_8;
    const char *VAR_9;
    unsigned char *VAR_10 = ((void*)0);

    VAR_7 = FUNC_8(VAR_1);
    VAR_3 = FUNC_6(VAR_7);
    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    {
        VAR_8 = FUNC_7(VAR_7, VAR_2);
        if (!VAR_8)
        {
            continue;
        }
        VAR_5 = FUNC_5(VAR_8);
        if (!VAR_5)
        {
            continue;
        }
        VAR_6 = FUNC_4(VAR_8);
        if (!VAR_6)
        {
            continue;
        }
        VAR_4 = FUNC_2(VAR_5);
        if (VAR_4 == VAR_0)
        {
            continue;
        }
        VAR_9 = FUNC_1(VAR_4);
        if (!VAR_9)
        {
            continue;
        }
        if (FUNC_0(&VAR_10, VAR_6) < 0)
        {
            continue;
        }

        FUNC_9("X509 %s: %s\n", VAR_9, (char *)VAR_10);
        FUNC_3(VAR_10);
    }
}
