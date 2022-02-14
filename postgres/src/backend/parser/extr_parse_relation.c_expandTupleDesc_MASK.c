
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int location; } ;
typedef TYPE_1__ Var ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_16__ {int colnames; } ;
struct TYPE_15__ {int attcollation; int atttypmod; int atttypid; int attname; scalar_t__ attisdropped; } ;
struct TYPE_14__ {int natts; } ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ Alias ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int) ;
 int * FUNC_7 (int ,int *) ;
 TYPE_1__* FUNC_8 (int ,int,int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int,int,int ,int ,int ,int) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(TupleDesc VAR_2, Alias *VAR_3, int VAR_4, int VAR_5,
    int VAR_6, int VAR_7,
    int VAR_8, bool VAR_9,
    List **VAR_10, List **VAR_11)
{
 ListCell *VAR_12;
 int VAR_13;

 VAR_12 = (VAR_5 < FUNC_5(VAR_3->colnames)) ?
  FUNC_6(VAR_3->colnames, VAR_5) : ((void*)0);

 FUNC_0(VAR_4 <= VAR_2->natts);
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
 {
  Form_pg_attribute VAR_14 = FUNC_2(VAR_2, VAR_13);

  if (VAR_14->attisdropped)
  {
   if (VAR_9)
   {
    if (VAR_10)
     *VAR_10 = FUNC_3(*VAR_10, FUNC_9(FUNC_11("")));
    if (VAR_11)
    {




     *VAR_11 = FUNC_3(*VAR_11,
            FUNC_8(VAR_0, -1, VAR_1));
    }
   }
   if (VAR_12)
    VAR_12 = FUNC_7(VAR_3->colnames, VAR_12);
   continue;
  }

  if (VAR_10)
  {
   char *VAR_15;

   if (VAR_12)
   {
    VAR_15 = FUNC_12(FUNC_4(VAR_12));
    VAR_12 = FUNC_7(VAR_3->colnames, VAR_12);
   }
   else
   {

    VAR_15 = FUNC_1(VAR_14->attname);
   }
   *VAR_10 = FUNC_3(*VAR_10, FUNC_9(FUNC_11(VAR_15)));
  }

  if (VAR_11)
  {
   Var *VAR_16;

   VAR_16 = FUNC_10(VAR_6, VAR_13 + VAR_5 + 1,
         VAR_14->atttypid, VAR_14->atttypmod,
         VAR_14->attcollation,
         VAR_7);
   VAR_16->location = VAR_8;

   *VAR_11 = FUNC_3(*VAR_11, VAR_16);
  }
 }
}
