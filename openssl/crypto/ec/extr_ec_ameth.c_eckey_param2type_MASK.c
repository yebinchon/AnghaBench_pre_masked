
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int data; } ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 void* FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(int *VAR_5, void **VAR_6, EC_KEY *VAR_7)
{
    const EC_GROUP *VAR_8;
    int VAR_9;
    if (VAR_7 == ((void*)0) || (VAR_8 = FUNC_4(VAR_7)) == ((void*)0)) {
        FUNC_5(VAR_0, VAR_1);
        return 0;
    }
    if (FUNC_2(VAR_8)
        && (VAR_9 = FUNC_3(VAR_8)))

    {
        *VAR_6 = FUNC_6(VAR_9);
        *VAR_5 = VAR_3;
    } else {

        ASN1_STRING *VAR_10 = ((void*)0);
        VAR_10 = FUNC_1();
        if (VAR_10 == ((void*)0))
            return 0;
        VAR_10->length = FUNC_7(VAR_7, &VAR_10->data);
        if (VAR_10->length <= 0) {
            FUNC_0(VAR_10);
            FUNC_5(VAR_0, VAR_2);
            return 0;
        }
        *VAR_6 = VAR_10;
        *VAR_5 = VAR_4;
    }
    return 1;
}
