
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int flags; int check_time; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int VAR_0 ;

void FUNC_0(X509_VERIFY_PARAM *VAR_1, time_t VAR_2)
{
    VAR_1->check_time = VAR_2;
    VAR_1->flags |= VAR_0;
}
