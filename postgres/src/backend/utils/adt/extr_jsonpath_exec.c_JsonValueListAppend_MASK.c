
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ list; int * singleton; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonValueList ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(JsonValueList *VAR_0, JsonbValue *VAR_1)
{
 if (VAR_0->singleton)
 {
  VAR_0->list = FUNC_1(VAR_0->singleton, VAR_1);
  VAR_0->singleton = ((void*)0);
 }
 else if (!VAR_0->list)
  VAR_0->singleton = VAR_1;
 else
  VAR_0->list = FUNC_0(VAR_0->list, VAR_1);
}
