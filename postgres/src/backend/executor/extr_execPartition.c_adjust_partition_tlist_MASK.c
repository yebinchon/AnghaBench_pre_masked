
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int* attrMap; TYPE_1__* outdesc; } ;
typedef TYPE_2__ TupleConversionMap ;
struct TYPE_12__ {int resno; } ;
typedef TYPE_3__ TargetEntry ;
struct TYPE_13__ {int attisdropped; int attname; } ;
struct TYPE_10__ {int natts; } ;
typedef int List ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Expr ;
typedef int Datum ;
typedef int Const ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int ,int,int ,int,int ,int,int) ;
 TYPE_3__* FUNC_6 (int *,int,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static List *
FUNC_8(List *VAR_4, TupleConversionMap *VAR_5)
{
 List *VAR_6 = VAR_3;
 TupleDesc VAR_7 = VAR_5->outdesc;
 AttrNumber *VAR_8 = VAR_5->attrMap;
 AttrNumber VAR_9;

 for (VAR_9 = 1; VAR_9 <= VAR_7->natts; VAR_9++)
 {
  Form_pg_attribute VAR_10 = FUNC_2(VAR_7, VAR_9 - 1);
  TargetEntry *VAR_11;

  if (VAR_8[VAR_9 - 1] != VAR_1)
  {
   FUNC_0(!VAR_10->attisdropped);





   VAR_11 = (TargetEntry *) FUNC_4(VAR_4, VAR_8[VAR_9 - 1] - 1);
   VAR_11->resno = VAR_9;
  }
  else
  {
   Const *VAR_12;





   FUNC_0(VAR_10->attisdropped);
   VAR_12 = FUNC_5(VAR_0,
        -1,
        VAR_2,
        sizeof(int32),
        (Datum) 0,
        1,
        1 );
   VAR_11 = FUNC_6((Expr *) VAR_12,
          VAR_9,
          FUNC_7(FUNC_1(VAR_10->attname)),
          0);
  }

  VAR_6 = FUNC_3(VAR_6, VAR_11);
 }

 return VAR_6;
}
