
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_3__ {int nkeys; int * fk_attnums; int * pk_attnums; } ;
typedef TYPE_1__ RI_ConstraintInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int const) ;

__attribute__((used)) static int
FUNC_1(TupleDesc VAR_3,
    TupleTableSlot *VAR_4,
    const RI_ConstraintInfo *VAR_5, bool VAR_6)
{
 const int16 *VAR_7;
 bool VAR_8 = 1;
 bool VAR_9 = 1;

 if (VAR_6)
  VAR_7 = VAR_5->pk_attnums;
 else
  VAR_7 = VAR_5->fk_attnums;

 for (int VAR_10 = 0; VAR_10 < VAR_5->nkeys; VAR_10++)
 {
  if (FUNC_0(VAR_4, VAR_7[VAR_10]))
   VAR_9 = 0;
  else
   VAR_8 = 0;
 }

 if (VAR_8)
  return VAR_0;

 if (VAR_9)
  return VAR_1;

 return VAR_2;
}
