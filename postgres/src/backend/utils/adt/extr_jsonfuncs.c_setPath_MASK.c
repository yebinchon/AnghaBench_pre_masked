
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nPairs; } ;
struct TYPE_9__ {int nElems; } ;
struct TYPE_11__ {TYPE_2__ object; TYPE_1__ array; } ;
struct TYPE_12__ {TYPE_3__ val; } ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbParseState ;
typedef int JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int Jsonb ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,TYPE_4__*,int) ;



 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 TYPE_4__* FUNC_7 (int **,int,TYPE_4__*) ;
 int FUNC_8 (int **,int *,int*,int,int **,int,int *,int ,int) ;
 int FUNC_9 (int **,int *,int*,int,int **,int,int *,int ,int) ;

__attribute__((used)) static JsonbValue *
FUNC_10(JsonbIterator **VAR_4, Datum *VAR_5,
  bool *VAR_6, int VAR_7,
  JsonbParseState **VAR_8, int VAR_9, Jsonb *VAR_10, int VAR_11)
{
 JsonbValue VAR_12;
 JsonbIteratorToken VAR_13;
 JsonbValue *VAR_14;

 FUNC_2();

 if (VAR_6[VAR_9])
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("path element at position %d is null",
      VAR_9 + 1)));

 VAR_13 = FUNC_1(VAR_4, &VAR_12, 0);

 switch (VAR_13)
 {
  case 131:
   (void) FUNC_7(VAR_8, VAR_13, ((void*)0));
   FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_10, VAR_12.val.array.nElems, VAR_11);
   VAR_13 = FUNC_1(VAR_4, &VAR_12, 0);
   FUNC_0(VAR_13 == VAR_2);
   VAR_14 = FUNC_7(VAR_8, VAR_13, ((void*)0));
   break;
  case 130:
   (void) FUNC_7(VAR_8, VAR_13, ((void*)0));
   FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_12.val.object.nPairs, VAR_11);
   VAR_13 = FUNC_1(VAR_4, &VAR_12, 1);
   FUNC_0(VAR_13 == VAR_3);
   VAR_14 = FUNC_7(VAR_8, VAR_13, ((void*)0));
   break;
  case 129:
  case 128:
   VAR_14 = FUNC_7(VAR_8, VAR_13, &VAR_12);
   break;
  default:
   FUNC_3(VAR_1, "unrecognized iterator result: %d", (int) VAR_13);
   VAR_14 = ((void*)0);
   break;
 }

 return VAR_14;
}
