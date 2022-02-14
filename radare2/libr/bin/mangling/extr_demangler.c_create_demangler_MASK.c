
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ symbol; scalar_t__ demangle; } ;
typedef TYPE_1__ SDemangler ;
typedef int EDemanglerErr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

EDemanglerErr FUNC_1(SDemangler **VAR_2)
{
 EDemanglerErr VAR_3 = VAR_1;

 *VAR_2 = (SDemangler *) FUNC_0(sizeof(SDemangler));

 if (!*VAR_2) {
  VAR_3 = VAR_0;
  goto create_demagler_err;
 }

 (*VAR_2)->demangle = 0;
 (*VAR_2)->symbol = 0;

create_demagler_err:
 return VAR_3;
}
