
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct varlena {int dummy; } ;
struct TYPE_9__ {int atomic; } ;
struct TYPE_8__ {scalar_t__ dtype; int freeval; int isnull; int promise; int value; TYPE_1__* datatype; } ;
struct TYPE_7__ {int typlen; } ;
typedef TYPE_2__ PLpgSQL_var ;
typedef TYPE_3__ PLpgSQL_execstate ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct varlena*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(PLpgSQL_execstate *VAR_3, PLpgSQL_var *VAR_4,
      Datum VAR_5, bool VAR_6, bool VAR_7)
{
 FUNC_0(VAR_4->dtype == VAR_1 ||
     VAR_4->dtype == VAR_0);
 if (!VAR_3->atomic && !VAR_6 && VAR_4->datatype->typlen == -1 &&
  FUNC_6(FUNC_1(VAR_5)))
 {
  MemoryContext VAR_8;
  Datum VAR_9;







  VAR_8 = FUNC_4(FUNC_9(VAR_3));
  VAR_9 = FUNC_5(FUNC_8((struct varlena *) FUNC_1(VAR_5)));
  FUNC_4(VAR_8);

  if (VAR_7)
   FUNC_10(FUNC_1(VAR_5));

  VAR_5 = FUNC_7(VAR_9, 0, -1);
  VAR_7 = 1;

 }


 if (VAR_4->freeval)
 {
  if (FUNC_2(VAR_4->value,
             VAR_4->isnull,
             VAR_4->datatype->typlen))
   FUNC_3(VAR_4->value);
  else
   FUNC_10(FUNC_1(VAR_4->value));
 }

 VAR_4->value = VAR_5;
 VAR_4->isnull = VAR_6;
 VAR_4->freeval = VAR_7;






 VAR_4->promise = VAR_2;
}
