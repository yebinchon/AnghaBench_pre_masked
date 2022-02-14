
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* jsonb; } ;
struct TYPE_20__ {int is_json; TYPE_3__ val; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_16__ {TYPE_1__ binary; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_18__ {int ndims; scalar_t__ dims; } ;
typedef TYPE_4__ PopulateArrayContext ;
typedef TYPE_5__ JsonbValue ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int JsonbContainer ;
typedef TYPE_6__ JsValue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,TYPE_5__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int,TYPE_6__*) ;
 int FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_10(PopulateArrayContext *VAR_5,
       JsonbValue *VAR_6,
       int VAR_7)
{
 JsonbContainer *VAR_8 = VAR_6->val.binary.data;
 JsonbIterator *VAR_9;
 JsonbIteratorToken VAR_10;
 JsonbValue VAR_11;
 JsValue VAR_12;

 FUNC_5();

 if (VAR_6->type != VAR_4 || !FUNC_1(VAR_8))
  FUNC_9(VAR_5, VAR_7 - 1);

 FUNC_0(!FUNC_2(VAR_8));

 VAR_9 = FUNC_3(VAR_8);

 VAR_10 = FUNC_4(&VAR_9, &VAR_11, 1);
 FUNC_0(VAR_10 == VAR_0);

 VAR_10 = FUNC_4(&VAR_9, &VAR_11, 1);






 if (VAR_5->ndims <= 0 &&
  (VAR_10 == VAR_3 ||
   (VAR_10 == VAR_2 &&
    (VAR_11.type != VAR_4 ||
     !FUNC_1(VAR_11.val.binary.data)))))
  FUNC_6(VAR_5, VAR_7);

 VAR_12.is_json = 0;
 VAR_12.val.jsonb = &VAR_11;


 while (VAR_10 == VAR_2)
 {




  if (VAR_5->ndims > 0 && VAR_7 >= VAR_5->ndims)
   FUNC_8(VAR_5, VAR_7, &VAR_12);
  else
  {

   FUNC_10(VAR_5, &VAR_11, VAR_7 + 1);


   FUNC_0(VAR_5->ndims > 0 && VAR_5->dims);

   FUNC_7(VAR_5, VAR_7);
  }

  VAR_10 = FUNC_4(&VAR_9, &VAR_11, 1);
 }

 FUNC_0(VAR_10 == VAR_3);


 VAR_10 = FUNC_4(&VAR_9, &VAR_11, 1);
 FUNC_0(VAR_10 == VAR_1 && !VAR_9);
}
