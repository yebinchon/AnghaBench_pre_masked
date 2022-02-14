
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef int BIO ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(BIO *VAR_4, int VAR_5, int VAR_6, int VAR_7,
                           int VAR_8)
{
    static const char VAR_9[] = "%-18s";
    char VAR_10[128];
    const char *VAR_11;

    if (VAR_7 & VAR_1)
        VAR_11 = "cons: ";
    else
        VAR_11 = "prim: ";
    if (FUNC_4(VAR_4, VAR_11, 6) < 6)
        goto err;
    FUNC_1(VAR_4, VAR_8, 128);

    VAR_11 = VAR_10;
    if ((VAR_6 & VAR_3) == VAR_3)
        FUNC_3(VAR_10, sizeof(VAR_10), "priv [ %d ] ", VAR_5);
    else if ((VAR_6 & VAR_2) == VAR_2)
        FUNC_3(VAR_10, sizeof(VAR_10), "cont [ %d ]", VAR_5);
    else if ((VAR_6 & VAR_0) == VAR_0)
        FUNC_3(VAR_10, sizeof(VAR_10), "appl [ %d ]", VAR_5);
    else if (VAR_5 > 30)
        FUNC_3(VAR_10, sizeof(VAR_10), "<ASN1 %d>", VAR_5);
    else
        VAR_11 = FUNC_0(VAR_5);

    if (FUNC_2(VAR_4, VAR_9, VAR_11) <= 0)
        goto err;
    return 1;
 err:
    return 0;
}
