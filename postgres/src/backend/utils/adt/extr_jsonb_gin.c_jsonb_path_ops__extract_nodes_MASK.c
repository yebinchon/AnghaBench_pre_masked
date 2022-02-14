
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int hash; } ;
typedef int List ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonPathGinPath ;
typedef int JsonPathGinContext ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static List *
FUNC_4(JsonPathGinContext *VAR_0, JsonPathGinPath VAR_1,
         JsonbValue *VAR_2, List *VAR_3)
{
 if (VAR_2)
 {

  uint32 VAR_4 = VAR_1.hash;

  FUNC_0(VAR_2, &VAR_4);

  return FUNC_2(VAR_3,
        FUNC_3(FUNC_1(VAR_4)));
 }
 else
 {

  return VAR_3;
 }
}
