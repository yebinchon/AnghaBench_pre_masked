
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_19__ {int * connection; } ;
struct TYPE_18__ {TYPE_1__* head; } ;
struct TYPE_17__ {char* val; struct TYPE_17__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;
typedef int ReindexType ;
typedef TYPE_3__ ParallelSlot ;
typedef int PGconn ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 char const* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_6 (char const*,char const*,char const*,char const*,int,char const*,int,int *,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;





 int * FUNC_9 (char const*,char const*,char const*,char const*,int,char const*,int,int,int) ;
 int FUNC_10 (int) ;
 TYPE_2__* FUNC_11 (int *,int,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*,char*,char*) ;
 int FUNC_15 (char*) ;
 TYPE_2__* FUNC_16 (int) ;
 int FUNC_17 (int *,int const,char const*,int,int,int,int) ;
 int FUNC_18 (TYPE_2__*,char const*) ;
 int FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_1, ReindexType VAR_2,
      SimpleStringList *VAR_3, const char *VAR_4,
      const char *VAR_5, const char *VAR_6,
      enum trivalue VAR_7, const char *VAR_8, bool VAR_9,
      bool VAR_10, bool VAR_11, int VAR_12)
{
 PGconn *VAR_13;
 SimpleStringListCell *VAR_14;
 bool VAR_15 = VAR_12 > 1;
 SimpleStringList *VAR_16 = VAR_3;
 ReindexType VAR_17 = VAR_2;
 ParallelSlot *VAR_18;
 bool VAR_19 = 0;
 int VAR_20 = 0;

 VAR_13 = FUNC_9(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9, 0, 0);

 if (VAR_11 && FUNC_4(VAR_13) < 120000)
 {
  FUNC_3(VAR_13);
  FUNC_14("cannot use the \"%s\" option on server versions older than PostgreSQL %s",
      "concurrently", "12");
  FUNC_10(1);
 }

 if (!VAR_15)
 {
  switch (VAR_17)
  {
   case 132:
   case 129:





    FUNC_0(VAR_3 == ((void*)0));
    VAR_16 = FUNC_16(sizeof(SimpleStringList));
    FUNC_18(VAR_16, FUNC_2(VAR_13));
    break;

   case 131:
   case 130:
   case 128:
    FUNC_0(VAR_3 != ((void*)0));
    break;
  }
 }
 else
 {
  switch (VAR_17)
  {
   case 132:






    if (VAR_11)
     FUNC_15("cannot reindex system catalogs concurrently, skipping all");
    else
     FUNC_17(VAR_13, 129, FUNC_2(VAR_13), VAR_9,
          VAR_10, VAR_11, 0);


    VAR_16 = FUNC_11(VAR_13, VAR_17,
              VAR_3, VAR_9);
    VAR_17 = 128;


    if (VAR_16 == ((void*)0))
     return;
    break;

   case 130:
    FUNC_0(VAR_3 != ((void*)0));


    VAR_16 = FUNC_11(VAR_13, VAR_17,
              VAR_3, VAR_9);
    VAR_17 = 128;


    if (VAR_16 == ((void*)0))
     return;
    break;

   case 129:
   case 131:

    FUNC_0(0);
    break;

   case 128:





    break;
  }
 }






 for (VAR_14 = VAR_16->head; VAR_14; VAR_14 = VAR_14->next)
 {
  VAR_20++;


  if (VAR_20 >= VAR_12)
   break;
 }
 VAR_12 = FUNC_1(VAR_12, VAR_20);
 FUNC_0(VAR_12 > 0);

 FUNC_0(VAR_16 != ((void*)0));

 VAR_18 = FUNC_6(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_13, VAR_12);

 VAR_14 = VAR_16->head;
 do
 {
  const char *VAR_21 = VAR_14->val;
  ParallelSlot *VAR_22 = ((void*)0);

  if (VAR_0)
  {
   VAR_19 = 1;
   goto finish;
  }

  VAR_22 = FUNC_5(VAR_18, VAR_12);
  if (!VAR_22)
  {
   VAR_19 = 1;
   goto finish;
  }

  FUNC_17(VAR_22->connection, VAR_17, VAR_21,
       VAR_9, VAR_10, VAR_11, 1);

  VAR_14 = VAR_14->next;
 } while (VAR_14 != ((void*)0));

 if (!FUNC_8(VAR_18, VAR_12))
  VAR_19 = 1;

finish:
 if (VAR_16 != VAR_3)
 {
  FUNC_19(VAR_16);
  FUNC_13(VAR_16);
 }

 FUNC_7(VAR_18, VAR_12);
 FUNC_12(VAR_18);

 if (VAR_19)
  FUNC_10(1);
}
