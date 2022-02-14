
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * wbio; int * bbio; } ;
typedef TYPE_1__ SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;

void FUNC_3(SSL *VAR_0, BIO *VAR_1)
{



    if (VAR_0->bbio != ((void*)0))
        VAR_0->wbio = FUNC_1(VAR_0->wbio);

    FUNC_0(VAR_0->wbio);
    VAR_0->wbio = VAR_1;


    if (VAR_0->bbio != ((void*)0))
        VAR_0->wbio = FUNC_2(VAR_0->bbio, VAR_0->wbio);
}
