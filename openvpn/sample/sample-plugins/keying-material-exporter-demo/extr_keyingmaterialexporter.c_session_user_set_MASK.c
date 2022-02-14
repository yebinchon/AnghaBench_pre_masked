
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int user; } ;
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
 int FUNC_9 (int ,int,char*) ;
 int FUNC_10 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct session *VAR_1, X509 *VAR_2)
{
    int VAR_3;
    ASN1_OBJECT *VAR_4;
    ASN1_STRING *VAR_5;
    X509_NAME *VAR_6;
    X509_NAME_ENTRY *VAR_7;
    const char *VAR_8;

    VAR_6 = FUNC_8(VAR_2);
    int VAR_9, VAR_10 = FUNC_6(VAR_6);
    for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
    {
        if (!(VAR_7 = FUNC_7(VAR_6, VAR_9)))
        {
            continue;
        }
        if (!(VAR_4 = FUNC_5(VAR_7)))
        {
            continue;
        }
        if (!(VAR_5 = FUNC_4(VAR_7)))
        {
            continue;
        }
        if ((VAR_3 = FUNC_2(VAR_4)) == VAR_0)
        {
            continue;
        }
        if (!(VAR_8 = FUNC_1(VAR_3)))
        {
            continue;
        }
        unsigned char *VAR_11 = ((void*)0);
        if (FUNC_0(&VAR_11, VAR_5) < 0)
        {
            continue;
        }

        if (!FUNC_10(VAR_8, "CN", 2))
        {
            FUNC_9(VAR_1->user, sizeof(VAR_1->user) - 1, (char *)VAR_11);
        }

        FUNC_3(VAR_11);
    }
}
