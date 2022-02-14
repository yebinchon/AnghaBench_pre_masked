
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int val; } ;
struct TYPE_8__ {TYPE_2__ string; } ;
struct TYPE_10__ {TYPE_1__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonPathItem ;
typedef int JsonPathBool ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static JsonPathBool
FUNC_2(JsonPathItem *VAR_4, JsonbValue *VAR_5, JsonbValue *VAR_6,
      void *VAR_7)
{
 if (!(VAR_5 = FUNC_0(VAR_5, VAR_0)))
  return VAR_3;

 if (!(VAR_6 = FUNC_0(VAR_6, VAR_0)))
  return VAR_3;

 if (VAR_5->val.string.len >= VAR_6->val.string.len &&
  !FUNC_1(VAR_5->val.string.val,
    VAR_6->val.string.val,
    VAR_6->val.string.len))
  return VAR_2;

 return VAR_1;
}
