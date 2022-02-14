
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int foid; } ;
typedef int Oid ;
typedef TYPE_1__ FmgrBuiltin ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;

Oid
FUNC_1(const char *VAR_1)
{
 const FmgrBuiltin *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return VAR_0;
 return VAR_2->foid;
}
