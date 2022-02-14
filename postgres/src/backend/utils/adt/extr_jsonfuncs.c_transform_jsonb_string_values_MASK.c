
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int text ;
struct TYPE_21__ {int root; } ;
struct TYPE_20__ {int isScalar; } ;
struct TYPE_17__ {int rawScalar; } ;
struct TYPE_16__ {int len; int val; } ;
struct TYPE_18__ {TYPE_2__ array; TYPE_1__ string; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef TYPE_5__ JsonbIterator ;
typedef TYPE_6__ Jsonb ;
typedef int * (* JsonTransformStringValuesAction ) (void*,int ,int ) ;


 TYPE_5__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_5__**,TYPE_4__*,int) ;
 TYPE_6__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_5 (int **,scalar_t__,TYPE_4__*) ;

Jsonb *
FUNC_6(Jsonb *VAR_7, void *VAR_8,
         JsonTransformStringValuesAction VAR_9)
{
 JsonbIterator *VAR_10;
 JsonbValue VAR_11,
      *VAR_12 = ((void*)0);
 JsonbIteratorToken VAR_13;
 JsonbParseState *VAR_14 = ((void*)0);
 text *VAR_15;
 bool VAR_16 = 0;

 VAR_10 = FUNC_0(&VAR_7->root);
 VAR_16 = VAR_10->isScalar;

 while ((VAR_13 = FUNC_1(&VAR_10, &VAR_11, 0)) != VAR_1)
 {
  if ((VAR_13 == VAR_4 || VAR_13 == VAR_2) && VAR_11.type == VAR_6)
  {
   VAR_15 = VAR_9(VAR_8, VAR_11.val.string.val, VAR_11.val.string.len);
   VAR_11.val.string.val = FUNC_3(VAR_15);
   VAR_11.val.string.len = FUNC_4(VAR_15);
   VAR_12 = FUNC_5(&VAR_14, VAR_13, VAR_13 < VAR_0 ? &VAR_11 : ((void*)0));
  }
  else
  {
   VAR_12 = FUNC_5(&VAR_14, VAR_13, (VAR_13 == VAR_3 ||
            VAR_13 == VAR_4 ||
            VAR_13 == VAR_2) ? &VAR_11 : ((void*)0));
  }
 }

 if (VAR_12->type == VAR_5)
  VAR_12->val.array.rawScalar = VAR_16;

 return FUNC_2(VAR_12);
}
