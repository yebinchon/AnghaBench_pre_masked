
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum jbvType { ____Placeholder_jbvType } jbvType ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_1__ binary; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static JsonbValue *
FUNC_2(JsonbValue *VAR_1, enum jbvType VAR_2)
{

 FUNC_0(VAR_1->type != VAR_0 ||
     !FUNC_1(VAR_1->val.binary.data));

 return VAR_1->type == VAR_2 ? VAR_1 : ((void*)0);
}
