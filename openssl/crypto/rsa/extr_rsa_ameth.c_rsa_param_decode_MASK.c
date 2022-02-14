
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int * pss; } ;
typedef TYPE_1__ RSA ;
typedef int ASN1_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int const**,int*,void const**,int const*) ;
 int * FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(RSA *VAR_5, const X509_ALGOR *VAR_6)
{
    const ASN1_OBJECT *VAR_7;
    const void *VAR_8;
    int VAR_9;

    FUNC_2(&VAR_7, &VAR_9, &VAR_8, VAR_6);
    if (FUNC_0(VAR_7) != VAR_0)
        return 1;
    if (VAR_9 == VAR_4)
        return 1;
    if (VAR_9 != VAR_3) {
        FUNC_1(VAR_1, VAR_2);
        return 0;
    }
    VAR_5->pss = FUNC_3(VAR_6);
    if (VAR_5->pss == ((void*)0))
        return 0;
    return 1;
}
