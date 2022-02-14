
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int item; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_TEMPLATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int ) ;

__attribute__((used)) static void FUNC_2(ASN1_VALUE **VAR_2, const ASN1_TEMPLATE *VAR_3)
{

    if (VAR_3->flags & (VAR_0 | VAR_1))
        *VAR_2 = ((void*)0);
    else
        FUNC_1(VAR_2, FUNC_0(VAR_3->item));
}
