
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ binary; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *,int *,int ,int *,int,int,int,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static JsonPathExecResult
FUNC_3(JsonPathExecContext *VAR_3, JsonPathItem *VAR_4,
        JsonbValue *VAR_5, JsonValueList *VAR_6,
        bool VAR_7)
{
 if (VAR_5->type != VAR_2)
 {
  FUNC_0(VAR_5->type != VAR_1);
  FUNC_1(VAR_0, "invalid jsonb array value type: %d", VAR_5->type);
 }

 return FUNC_2
  (VAR_3, VAR_4, VAR_5->val.binary.data, VAR_6, 1, 1, 1,
   0, VAR_7);
}
