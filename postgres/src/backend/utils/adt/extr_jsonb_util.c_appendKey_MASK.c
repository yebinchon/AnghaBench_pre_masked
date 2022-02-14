
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nPairs; TYPE_5__* pairs; } ;
struct TYPE_10__ {TYPE_1__ object; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_13__ {size_t order; TYPE_3__ key; } ;
struct TYPE_12__ {int size; TYPE_3__ contVal; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonbParseState ;
typedef int JsonbPair ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_4 (TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_5(JsonbParseState *VAR_5, JsonbValue *VAR_6)
{
 JsonbValue *VAR_7 = &VAR_5->contVal;

 FUNC_0(VAR_7->type == VAR_3);
 FUNC_0(VAR_6->type == VAR_4);

 if (VAR_7->val.object.nPairs >= VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("number of jsonb object pairs exceeds the maximum allowed (%zu)",
      VAR_2)));

 if (VAR_7->val.object.nPairs >= VAR_5->size)
 {
  VAR_5->size *= 2;
  VAR_7->val.object.pairs = FUNC_4(VAR_7->val.object.pairs,
           sizeof(JsonbPair) * VAR_5->size);
 }

 VAR_7->val.object.pairs[VAR_7->val.object.nPairs].key = *VAR_6;
 VAR_7->val.object.pairs[VAR_7->val.object.nPairs].order = VAR_7->val.object.nPairs;
}
