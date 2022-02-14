
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long flags; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

int FUNC_0(X509_VERIFY_PARAM *VAR_2, unsigned long VAR_3)
{
    VAR_2->flags |= VAR_3;
    if (VAR_3 & VAR_1)
        VAR_2->flags |= VAR_0;
    return 1;
}
