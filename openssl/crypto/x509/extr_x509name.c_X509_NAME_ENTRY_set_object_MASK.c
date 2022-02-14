
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * object; } ;
typedef TYPE_1__ X509_NAME_ENTRY ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(X509_NAME_ENTRY *VAR_2, const ASN1_OBJECT *VAR_3)
{
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0))) {
        FUNC_2(VAR_1,
                VAR_0);
        return 0;
    }
    FUNC_0(VAR_2->object);
    VAR_2->object = FUNC_1(VAR_3);
    return ((VAR_2->object == ((void*)0)) ? 0 : 1);
}
