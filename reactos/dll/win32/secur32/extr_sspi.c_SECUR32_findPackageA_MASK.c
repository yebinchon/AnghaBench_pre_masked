
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int SecurePackage ;
typedef scalar_t__ PCSTR ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;

SecurePackage *FUNC_3(PCSTR VAR_0)
{
    SecurePackage *VAR_1;

    if (VAR_0)
    {
        UNICODE_STRING VAR_2;

        FUNC_0(&VAR_2, VAR_0);
        VAR_1 = FUNC_2(VAR_2.Buffer);
        FUNC_1(&VAR_2);
    }
    else
        VAR_1 = ((void*)0);
    return VAR_1;
}
