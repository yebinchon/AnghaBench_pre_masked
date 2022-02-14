
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ int32 ;
struct TYPE_13__ {int ignoreStructuralErrors; } ;
struct TYPE_10__ {int * data; } ;
struct TYPE_11__ {TYPE_1__ binary; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbIterator ;
typedef int JsonbContainer ;
typedef int JsonValueList ;
typedef int JsonPathItem ;
typedef scalar_t__ JsonPathExecResult ;
typedef TYPE_4__ JsonPathExecContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *,TYPE_3__*,int *,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static JsonPathExecResult
FUNC_8(JsonPathExecContext *VAR_8, JsonPathItem *VAR_9, JsonbContainer *VAR_10,
      JsonValueList *VAR_11, uint32 VAR_12, uint32 VAR_13, uint32 VAR_14,
      bool VAR_15, bool VAR_16)
{
 JsonPathExecResult VAR_17 = VAR_6;
 JsonbIterator *VAR_18;
 int32 VAR_19;
 JsonbValue VAR_20;

 FUNC_4();

 if (VAR_12 > VAR_14)
  return VAR_17;

 VAR_18 = FUNC_2(VAR_10);




 while ((VAR_19 = FUNC_3(&VAR_18, &VAR_20, 1)) != VAR_1)
 {
  if (VAR_19 == VAR_3)
  {
   VAR_19 = FUNC_3(&VAR_18, &VAR_20, 1);
   FUNC_0(VAR_19 == VAR_4);
  }

  if (VAR_19 == VAR_4 || VAR_19 == VAR_2)
  {

   if (VAR_12 >= VAR_13 ||
    (VAR_13 == VAR_0 && VAR_14 == VAR_0 &&
     VAR_20.type != VAR_5))
   {

    if (VAR_9)
    {
     if (VAR_15)
     {
      bool VAR_21;

      VAR_21 = VAR_8->ignoreStructuralErrors;
      VAR_8->ignoreStructuralErrors = 1;
      VAR_17 = FUNC_6(VAR_8, VAR_9, &VAR_20, VAR_11, VAR_16);
      VAR_8->ignoreStructuralErrors = VAR_21;
     }
     else
      VAR_17 = FUNC_6(VAR_8, VAR_9, &VAR_20, VAR_11, VAR_16);

     if (FUNC_7(VAR_17))
      break;

     if (VAR_17 == VAR_7 && !VAR_11)
      break;
    }
    else if (VAR_11)
     FUNC_1(VAR_11, FUNC_5(&VAR_20));
    else
     return VAR_7;
   }

   if (VAR_12 < VAR_14 && VAR_20.type == VAR_5)
   {
    VAR_17 = FUNC_8
     (VAR_8, VAR_9, VAR_20.val.binary.data, VAR_11,
      VAR_12 + 1, VAR_13, VAR_14,
      VAR_15, VAR_16);

    if (FUNC_7(VAR_17))
     break;

    if (VAR_17 == VAR_7 && VAR_11 == ((void*)0))
     break;
   }
  }
 }

 return VAR_17;
}
