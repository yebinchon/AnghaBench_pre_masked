
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int root; } ;
struct TYPE_9__ {int len; int * data; } ;
struct TYPE_10__ {TYPE_1__ binary; } ;
struct TYPE_11__ {TYPE_2__ val; int type; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ Jsonb ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;

__attribute__((used)) static JsonbValue *
FUNC_1(JsonbValue *VAR_1, Jsonb *VAR_2)
{
 VAR_1->type = VAR_0;
 VAR_1->val.binary.data = &VAR_2->root;
 VAR_1->val.binary.len = FUNC_0(VAR_2);

 return VAR_1;
}
