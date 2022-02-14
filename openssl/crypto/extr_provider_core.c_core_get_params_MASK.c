
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int value; } ;
struct TYPE_6__ {int * parameters; int name; } ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ INFOPAIR ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 char* VAR_1 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(const OSSL_PROVIDER *VAR_2, OSSL_PARAM VAR_3[])
{
    int VAR_4;
    OSSL_PARAM *VAR_5;

    if ((VAR_5 = FUNC_0(VAR_3, "openssl-version")) != ((void*)0))
        FUNC_1(VAR_5, VAR_0);
    if ((VAR_5 = FUNC_0(VAR_3, "provider-name")) != ((void*)0))
        FUNC_1(VAR_5, VAR_2->name);


    if ((VAR_5 = FUNC_0(VAR_3, VAR_1)) != ((void*)0))
        FUNC_1(VAR_5, FUNC_2(VAR_2));


    if (VAR_2->parameters == ((void*)0))
        return 1;

    for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_2->parameters); VAR_4++) {
        INFOPAIR *VAR_6 = FUNC_4(VAR_2->parameters, VAR_4);

        if ((VAR_5 = FUNC_0(VAR_3, VAR_6->name)) != ((void*)0))
            FUNC_1(VAR_5, VAR_6->value);
    }
    return 1;
}
