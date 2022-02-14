
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSIONS ;
struct TYPE_3__ {int * reqExtensions; int subjectAltNames; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(OSSL_CMP_CTX *VAR_4, X509_EXTENSIONS *VAR_5)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return 0;
    }

    if (FUNC_2(VAR_4->subjectAltNames) > 0 && VAR_5 != ((void*)0)
            && FUNC_1(VAR_5, VAR_2, -1) >= 0) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    FUNC_3(VAR_4->reqExtensions, VAR_3);
    VAR_4->reqExtensions = VAR_5;
    return 1;
}
