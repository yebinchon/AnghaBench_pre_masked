
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Value ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {void* colnames; int aliasname; } ;
struct TYPE_10__ {int attname; scalar_t__ attisdropped; } ;
struct TYPE_9__ {int natts; } ;
typedef int ListCell ;
typedef void List ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ Alias ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 char* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int,int) ;
 void* FUNC_6 (void*,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int * FUNC_10 (void*,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(TupleDesc VAR_3, Alias *VAR_4, Alias *VAR_5)
{
 int VAR_6 = VAR_3->natts;
 List *VAR_7;
 ListCell *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_5->colnames == VAR_2);

 if (VAR_4)
 {
  VAR_7 = VAR_4->colnames;
  VAR_8 = FUNC_8(VAR_7);
  VAR_9 = FUNC_9(VAR_7);

  VAR_4->colnames = VAR_2;
 }
 else
 {
  VAR_7 = VAR_2;
  VAR_8 = ((void*)0);
  VAR_9 = 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
 {
  Form_pg_attribute VAR_12 = FUNC_2(VAR_3, VAR_10);
  Value *VAR_13;

  if (VAR_12->attisdropped)
  {

   VAR_13 = FUNC_11(FUNC_12(""));
   if (VAR_8)
    VAR_4->colnames = FUNC_6(VAR_4->colnames, VAR_13);
   VAR_11++;
  }
  else if (VAR_8)
  {

   VAR_13 = (Value *) FUNC_7(VAR_8);
   VAR_8 = FUNC_10(VAR_7, VAR_8);
   VAR_4->colnames = FUNC_6(VAR_4->colnames, VAR_13);
  }
  else
  {
   VAR_13 = FUNC_11(FUNC_12(FUNC_1(VAR_12->attname)));

  }

  VAR_5->colnames = FUNC_6(VAR_5->colnames, VAR_13);
 }


 if (VAR_8)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("table \"%s\" has %d columns available but %d columns specified",
      VAR_5->aliasname, VAR_6 - VAR_11, VAR_9)));
}
