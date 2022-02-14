
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; int * singleton; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonValueList ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static JsonbValue *
FUNC_1(JsonValueList *VAR_0)
{
 return VAR_0->singleton ? VAR_0->singleton : FUNC_0(VAR_0->list);
}
