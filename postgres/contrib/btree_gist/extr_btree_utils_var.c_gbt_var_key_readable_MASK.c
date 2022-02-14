
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const bytea ;
struct TYPE_3__ {int const* lower; int const* upper; } ;
typedef TYPE_1__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;


 size_t FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int const*) ;

GBT_VARKEY_R
FUNC_2(const GBT_VARKEY *VAR_1)
{
 GBT_VARKEY_R VAR_2;

 VAR_2.lower = (bytea *) &(((char *) VAR_1)[VAR_0]);
 if (FUNC_1(VAR_1) > (VAR_0 + (FUNC_1(VAR_2.lower))))
  VAR_2.upper = (bytea *) &(((char *) VAR_1)[VAR_0 + FUNC_0(FUNC_1(VAR_2.lower))]);
 else
  VAR_2.upper = VAR_2.lower;
 return VAR_2;
}
