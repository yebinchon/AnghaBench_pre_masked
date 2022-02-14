
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int mem; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int * FUNC_0 (int *,unsigned char const**,int,int const*) ;
 int FUNC_1 (int ,unsigned char const**) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_3(OCSP_REQ_CTX *VAR_1,
                          ASN1_VALUE **VAR_2, const ASN1_ITEM *VAR_3)
{
    int VAR_4, VAR_5;
    const unsigned char *VAR_6;

    VAR_4 = FUNC_2(VAR_1);
    if (VAR_4 != 1)
        return VAR_4;

    VAR_5 = FUNC_1(VAR_1->mem, &VAR_6);
    *VAR_2 = FUNC_0(((void*)0), &VAR_6, VAR_5, VAR_3);
    if (*VAR_2 == ((void*)0)) {
        VAR_1->state = VAR_0;
        return 0;
    }
    return 1;
}
