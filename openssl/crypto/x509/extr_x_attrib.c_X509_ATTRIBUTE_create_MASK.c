
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int set; int object; } ;
typedef TYPE_1__ X509_ATTRIBUTE ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

X509_ATTRIBUTE *FUNC_7(int VAR_0, int VAR_1, void *VAR_2)
{
    X509_ATTRIBUTE *VAR_3 = ((void*)0);
    ASN1_TYPE *VAR_4 = ((void*)0);

    if ((VAR_3 = FUNC_5()) == ((void*)0))
        return ((void*)0);
    VAR_3->object = FUNC_3(VAR_0);
    if ((VAR_4 = FUNC_1()) == ((void*)0))
        goto err;
    if (!FUNC_6(VAR_3->set, VAR_4))
        goto err;

    FUNC_2(VAR_4, VAR_1, VAR_2);
    return VAR_3;
 err:
    FUNC_4(VAR_3);
    FUNC_0(VAR_4);
    return ((void*)0);
}
