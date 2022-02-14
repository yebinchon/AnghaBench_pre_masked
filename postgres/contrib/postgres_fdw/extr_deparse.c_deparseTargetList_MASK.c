
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef int RangeTblEntry ;
typedef int List ;
typedef int Index ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Bitmapset ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int ,int ,int,int *,int) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_3,
      RangeTblEntry *VAR_4,
      Index VAR_5,
      Relation VAR_6,
      bool VAR_7,
      Bitmapset *VAR_8,
      bool VAR_9,
      List **VAR_10)
{
 TupleDesc VAR_11 = FUNC_1(VAR_6);
 bool VAR_12;
 bool VAR_13;
 int VAR_14;

 *VAR_10 = VAR_1;


 VAR_12 = FUNC_4(0 - VAR_0,
          VAR_8);

 VAR_13 = 1;
 for (VAR_14 = 1; VAR_14 <= VAR_11->natts; VAR_14++)
 {
  Form_pg_attribute VAR_15 = FUNC_2(VAR_11, VAR_14 - 1);


  if (VAR_15->attisdropped)
   continue;

  if (VAR_12 ||
   FUNC_4(VAR_14 - VAR_0,
        VAR_8))
  {
   if (!VAR_13)
    FUNC_3(VAR_3, ", ");
   else if (VAR_7)
    FUNC_3(VAR_3, " RETURNING ");
   VAR_13 = 0;

   FUNC_5(VAR_3, VAR_5, VAR_14, VAR_4, VAR_9);

   *VAR_10 = FUNC_6(*VAR_10, VAR_14);
  }
 }





 if (FUNC_4(VAR_2 - VAR_0,
       VAR_8))
 {
  if (!VAR_13)
   FUNC_3(VAR_3, ", ");
  else if (VAR_7)
   FUNC_3(VAR_3, " RETURNING ");
  VAR_13 = 0;

  if (VAR_9)
   FUNC_0(VAR_3, VAR_5);
  FUNC_3(VAR_3, "ctid");

  *VAR_10 = FUNC_6(*VAR_10,
            VAR_2);
 }


 if (VAR_13 && !VAR_7)
  FUNC_3(VAR_3, "NULL");
}
