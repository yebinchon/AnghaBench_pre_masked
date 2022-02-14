
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dumpSections; int promptPassword; int format; } ;
typedef TYPE_1__ RestoreOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

RestoreOptions *
FUNC_1(void)
{
 RestoreOptions *VAR_3;

 VAR_3 = (RestoreOptions *) FUNC_0(sizeof(RestoreOptions));


 VAR_3->format = VAR_2;
 VAR_3->promptPassword = VAR_1;
 VAR_3->dumpSections = VAR_0;

 return VAR_3;
}
