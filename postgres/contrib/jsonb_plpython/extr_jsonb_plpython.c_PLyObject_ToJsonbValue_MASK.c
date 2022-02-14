
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int boolean; } ;
struct TYPE_29__ {TYPE_1__ val; int type; } ;
struct TYPE_28__ {scalar_t__ ob_type; } ;
typedef TYPE_2__ PyObject ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int **) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int **) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_14 (int) ;
 TYPE_3__* FUNC_15 (int **,int ,TYPE_3__*) ;

__attribute__((used)) static JsonbValue *
FUNC_16(PyObject *VAR_8, JsonbParseState **VAR_9, bool VAR_10)
{
 JsonbValue VAR_11;
 JsonbValue *VAR_12;

 if (!(FUNC_9(VAR_8) || FUNC_10(VAR_8)))
 {
  if (FUNC_8(VAR_8))
   return FUNC_3(VAR_8, VAR_9);
  else if (FUNC_6(VAR_8))
   return FUNC_0(VAR_8, VAR_9);
 }


 if (*VAR_9)
  VAR_12 = &VAR_11;
 else
  VAR_12 = FUNC_14(sizeof(JsonbValue));

 if (VAR_8 == VAR_2)
  VAR_12->type = VAR_7;
 else if (FUNC_9(VAR_8) || FUNC_10(VAR_8))
  FUNC_4(VAR_8, VAR_12);





 else if (FUNC_5(VAR_8))
 {
  VAR_12->type = VAR_6;
  VAR_12->val.boolean = (VAR_8 == VAR_3);
 }
 else if (FUNC_7(VAR_8))
  VAR_12 = FUNC_1(VAR_8, VAR_12);
 else
  FUNC_11(VAR_1,
    (FUNC_12(VAR_0),
     (FUNC_13("Python type \"%s\" cannot be transformed to jsonb",
       FUNC_2((PyObject *) VAR_8->ob_type)))));


 return (*VAR_9 ?
   FUNC_15(VAR_9, VAR_10 ? VAR_4 : VAR_5, VAR_12) :
   VAR_12);
}
