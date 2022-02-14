
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_SIG ;
typedef int X509_ALGOR ;
struct TYPE_5__ {int * shkeybag; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ PKCS12_SAFEBAG ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int) ;
 int * FUNC_3 (int,int *,char const*,int,int *,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const**,int *) ;
 int FUNC_6 (int const*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_7(PKCS12_SAFEBAG *VAR_1, const char *VAR_2,
                       const char *VAR_3)
{
    PKCS8_PRIV_KEY_INFO *VAR_4;
    X509_SIG *VAR_5;
    int VAR_6, VAR_7, VAR_8;
    const X509_ALGOR *VAR_9;

    if (FUNC_0(VAR_1) != VAR_0)
        return 1;

    if ((VAR_4 = FUNC_2(VAR_1->value.shkeybag, VAR_2, -1)) == ((void*)0))
        return 0;
    FUNC_5(VAR_1->value.shkeybag, &VAR_9, ((void*)0));
    if (!FUNC_6(VAR_9, &VAR_6, &VAR_8, &VAR_7))
        return 0;
    VAR_5 = FUNC_3(VAR_6, ((void*)0), VAR_3, -1, ((void*)0), VAR_7,
                          VAR_8, VAR_4);
    FUNC_1(VAR_4);
    if (VAR_5 == ((void*)0))
        return 0;
    FUNC_4(VAR_1->value.shkeybag);
    VAR_1->value.shkeybag = VAR_5;
    return 1;
}
