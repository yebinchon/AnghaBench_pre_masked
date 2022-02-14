
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int header; } ;
struct TYPE_16__ {scalar_t__ id; int * jbc; } ;
struct TYPE_19__ {int laxMode; int ignoreStructuralErrors; int lastGeneratedObjectId; int innermostArraySize; int throwErrors; int useTz; TYPE_1__ baseObject; int * current; int * root; TYPE_2__* vars; } ;
struct TYPE_18__ {int member_0; } ;
struct TYPE_17__ {int root; } ;
typedef int JsonbValue ;
typedef TYPE_2__ Jsonb ;
typedef TYPE_3__ JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef TYPE_4__ JsonPathExecContext ;
typedef TYPE_5__ JsonPath ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_4__*,int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static JsonPathExecResult
FUNC_13(JsonPath *VAR_5, Jsonb *VAR_6, Jsonb *VAR_7, bool VAR_8,
    JsonValueList *VAR_9, bool VAR_10)
{
 JsonPathExecContext VAR_11;
 JsonPathExecResult VAR_12;
 JsonPathItem VAR_13;
 JsonbValue VAR_14;

 FUNC_11(&VAR_13, VAR_5);

 if (!FUNC_3(&VAR_7->root, &VAR_14))
  FUNC_4(&VAR_14, VAR_7);

 if (VAR_6 && !FUNC_1(&VAR_6->root))
 {
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_8("\"vars\" argument is not an object"),
     FUNC_7("Jsonpath parameters should be encoded as key-value pairs of \"vars\" object.")));
 }

 VAR_11.vars = VAR_6;
 VAR_11.laxMode = (VAR_5->header & VAR_2) != 0;
 VAR_11.ignoreStructuralErrors = VAR_11.laxMode;
 VAR_11.root = &VAR_14;
 VAR_11.current = &VAR_14;
 VAR_11.baseObject.jbc = ((void*)0);
 VAR_11.baseObject.id = 0;
 VAR_11.lastGeneratedObjectId = VAR_6 ? 2 : 1;
 VAR_11.innermostArraySize = -1;
 VAR_11.throwErrors = VAR_8;
 VAR_11.useTz = VAR_10;

 if (FUNC_12(&VAR_11) && !VAR_9)
 {




  JsonValueList VAR_15 = {0};

  VAR_12 = FUNC_9(&VAR_11, &VAR_13, &VAR_14, &VAR_15);

  if (FUNC_10(VAR_12))
   return VAR_12;

  return FUNC_2(&VAR_15) ? VAR_3 : VAR_4;
 }

 VAR_12 = FUNC_9(&VAR_11, &VAR_13, &VAR_14, VAR_9);

 FUNC_0(!VAR_8 || !FUNC_10(VAR_12));

 return VAR_12;
}
