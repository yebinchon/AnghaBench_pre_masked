
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_9__ {int ecxt_per_tuple_memory; } ;
struct TYPE_8__ {int* elem_nulls; int num_elems; int next_elem; int * elem_values; int * array_expr; TYPE_1__* scan_key; } ;
struct TYPE_7__ {int sk_flags; int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef int MemoryContext ;
typedef TYPE_2__ IndexArrayKeyInfo ;
typedef int ExprState ;
typedef TYPE_3__ ExprContext ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*,int*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int ,int,char,int **,int**,int*) ;
 int FUNC_5 (int ,int *,int*,char*) ;

bool
FUNC_6(ExprContext *VAR_1,
        IndexArrayKeyInfo *VAR_2, int VAR_3)
{
 bool VAR_4 = 1;
 int VAR_5;
 MemoryContext VAR_6;


 VAR_6 = FUNC_3(VAR_1->ecxt_per_tuple_memory);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  ScanKey VAR_7 = VAR_2[VAR_5].scan_key;
  ExprState *VAR_8 = VAR_2[VAR_5].array_expr;
  Datum VAR_9;
  bool VAR_10;
  ArrayType *VAR_11;
  int16 VAR_12;
  bool VAR_13;
  char VAR_14;
  int VAR_15;
  Datum *VAR_16;
  bool *VAR_17;





  VAR_9 = FUNC_2(VAR_8,
          VAR_1,
          &VAR_10);
  if (VAR_10)
  {
   VAR_4 = 0;
   break;
  }
  VAR_11 = FUNC_1(VAR_9);

  FUNC_5(FUNC_0(VAR_11),
        &VAR_12, &VAR_13, &VAR_14);
  FUNC_4(VAR_11,
        FUNC_0(VAR_11),
        VAR_12, VAR_13, VAR_14,
        &VAR_16, &VAR_17, &VAR_15);
  if (VAR_15 <= 0)
  {
   VAR_4 = 0;
   break;
  }






  VAR_2[VAR_5].elem_values = VAR_16;
  VAR_2[VAR_5].elem_nulls = VAR_17;
  VAR_2[VAR_5].num_elems = VAR_15;
  VAR_7->sk_argument = VAR_16[0];
  if (VAR_17[0])
   VAR_7->sk_flags |= VAR_0;
  else
   VAR_7->sk_flags &= ~VAR_0;
  VAR_2[VAR_5].next_elem = 1;
 }

 FUNC_3(VAR_6);

 return VAR_4;
}
