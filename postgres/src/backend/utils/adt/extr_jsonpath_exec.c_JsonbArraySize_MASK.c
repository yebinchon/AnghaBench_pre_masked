
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * data; } ;
struct TYPE_6__ {TYPE_1__ binary; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbContainer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_4(JsonbValue *VAR_2)
{
 FUNC_0(VAR_2->type != VAR_0);

 if (VAR_2->type == VAR_1)
 {
  JsonbContainer *VAR_3 = VAR_2->val.binary.data;

  if (FUNC_1(VAR_3) && !FUNC_2(VAR_3))
   return FUNC_3(VAR_3);
 }

 return -1;
}
