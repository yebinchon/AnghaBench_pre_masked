
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_10__ {int rawScalar; int nElems; } ;
struct TYPE_12__ {TYPE_2__ binary; TYPE_1__ array; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbParseState ;
typedef int Jsonb ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int * FUNC_6 (scalar_t__) ;
 TYPE_4__* FUNC_7 (int **,int ,TYPE_4__*) ;

Jsonb *
FUNC_8(JsonbValue *VAR_7)
{
 Jsonb *VAR_8;

 if (FUNC_1(VAR_7))
 {

  JsonbParseState *VAR_9 = ((void*)0);
  JsonbValue *VAR_10;
  JsonbValue VAR_11;

  VAR_11.type = VAR_4;
  VAR_11.val.array.rawScalar = 1;
  VAR_11.val.array.nElems = 1;

  FUNC_7(&VAR_9, VAR_1, &VAR_11);
  FUNC_7(&VAR_9, VAR_2, VAR_7);
  VAR_10 = FUNC_7(&VAR_9, VAR_3, ((void*)0));

  VAR_8 = FUNC_4(VAR_10);
 }
 else if (VAR_7->type == VAR_6 || VAR_7->type == VAR_4)
 {
  VAR_8 = FUNC_4(VAR_7);
 }
 else
 {
  FUNC_0(VAR_7->type == VAR_5);
  VAR_8 = FUNC_6(VAR_0 + VAR_7->val.binary.len);
  FUNC_2(VAR_8, VAR_0 + VAR_7->val.binary.len);
  FUNC_5(FUNC_3(VAR_8), VAR_7->val.binary.data, VAR_7->val.binary.len);
 }

 return VAR_8;
}
