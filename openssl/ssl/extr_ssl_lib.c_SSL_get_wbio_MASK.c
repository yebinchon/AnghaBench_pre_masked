
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * wbio; int * bbio; } ;
typedef TYPE_1__ SSL ;
typedef int BIO ;


 int * FUNC_0 (int *) ;

BIO *FUNC_1(const SSL *VAR_0)
{
    if (VAR_0->bbio != ((void*)0)) {




        return FUNC_0(VAR_0->bbio);
    }
    return VAR_0->wbio;
}
