
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 long FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(long *VAR_1, ASN1_INTEGER *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return 1;
    if (VAR_2->type == VAR_0)
        return 0;
    *VAR_1 = FUNC_0(VAR_2);
    return 1;
}
