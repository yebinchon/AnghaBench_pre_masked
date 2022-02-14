
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleTableSlot ;
struct TYPE_3__ {int nkeys; int * fk_attnums; int * pk_attnums; } ;
typedef int Relation ;
typedef TYPE_1__ RI_ConstraintInfo ;
typedef int Datum ;


 int FUNC_0 (int *,int const,int*) ;

__attribute__((used)) static void
FUNC_1(Relation VAR_0, TupleTableSlot *VAR_1,
     const RI_ConstraintInfo *VAR_2, bool VAR_3,
     Datum *VAR_4, char *VAR_5)
{
 const int16 *VAR_6;
 bool VAR_7;

 if (VAR_3)
  VAR_6 = VAR_2->pk_attnums;
 else
  VAR_6 = VAR_2->fk_attnums;

 for (int VAR_8 = 0; VAR_8 < VAR_2->nkeys; VAR_8++)
 {
  VAR_4[VAR_8] = FUNC_0(VAR_1, VAR_6[VAR_8], &VAR_7);
  VAR_5[VAR_8] = VAR_7 ? 'n' : ' ';
 }
}
