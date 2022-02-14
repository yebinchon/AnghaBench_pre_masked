
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nElems; TYPE_3__* elems; } ;
struct TYPE_10__ {TYPE_1__ array; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_12__ {int size; TYPE_3__ contVal; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonbParseState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_5(JsonbParseState *VAR_4, JsonbValue *VAR_5)
{
 JsonbValue *VAR_6 = &VAR_4->contVal;

 FUNC_0(VAR_6->type == VAR_3);

 if (VAR_6->val.array.nElems >= VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("number of jsonb array elements exceeds the maximum allowed (%zu)",
      VAR_2)));

 if (VAR_6->val.array.nElems >= VAR_4->size)
 {
  VAR_4->size *= 2;
  VAR_6->val.array.elems = FUNC_4(VAR_6->val.array.elems,
            sizeof(JsonbValue) * VAR_4->size);
 }

 VAR_6->val.array.elems[VAR_6->val.array.nElems++] = *VAR_5;
}
