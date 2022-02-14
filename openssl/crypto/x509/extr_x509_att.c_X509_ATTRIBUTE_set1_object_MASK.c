
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * object; } ;
typedef TYPE_1__ X509_ATTRIBUTE ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;

int FUNC_2(X509_ATTRIBUTE *VAR_0, const ASN1_OBJECT *VAR_1)
{
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return 0;
    FUNC_0(VAR_0->object);
    VAR_0->object = FUNC_1(VAR_1);
    return VAR_0->object != ((void*)0);
}
