
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int nsessions; int nsetupsqls; scalar_t__ teardownsql; TYPE_1__** sessions; scalar_t__* setupsqls; } ;
typedef TYPE_2__ TestSpec ;
struct TYPE_17__ {int used; char* name; int session; int sql; } ;
struct TYPE_15__ {char* name; scalar_t__ teardownsql; scalar_t__ setupsql; } ;
typedef TYPE_3__ Step ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*,...) ;
 int FUNC_7 (TYPE_3__**) ;
 int FUNC_8 (TYPE_3__**,TYPE_3__**,int) ;
 TYPE_3__** FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int,TYPE_3__**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (TYPE_2__*,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_15(TestSpec *VAR_7, int VAR_8, Step **VAR_9)
{
 PGresult *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 Step **VAR_15;
 Step **VAR_16;

 VAR_15 = FUNC_9(sizeof(Step *) * VAR_7->nsessions);
 VAR_16 = FUNC_9(sizeof(Step *) * VAR_7->nsessions);

 FUNC_11("\nstarting permutation:");
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
 {

  VAR_9[VAR_11]->used = 1;
  FUNC_11(" %s", VAR_9[VAR_11]->name);
 }
 FUNC_11("\n");


 for (VAR_11 = 0; VAR_11 < VAR_7->nsetupsqls; VAR_11++)
 {
  VAR_10 = FUNC_2(VAR_4[0], VAR_7->setupsqls[VAR_11]);
  if (FUNC_3(VAR_10) == VAR_1)
  {
   FUNC_10(VAR_10);
  }
  else if (FUNC_3(VAR_10) != VAR_0)
  {
   FUNC_6(VAR_5, "setup failed: %s", FUNC_1(VAR_4[0]));
   FUNC_5(1);
  }
  FUNC_0(VAR_10);
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->nsessions; VAR_11++)
 {
  if (VAR_7->sessions[VAR_11]->setupsql)
  {
   VAR_10 = FUNC_2(VAR_4[VAR_11 + 1], VAR_7->sessions[VAR_11]->setupsql);
   if (FUNC_3(VAR_10) == VAR_1)
   {
    FUNC_10(VAR_10);
   }
   else if (FUNC_3(VAR_10) != VAR_0)
   {
    FUNC_6(VAR_5, "setup of session %s failed: %s",
      VAR_7->sessions[VAR_11]->name,
      FUNC_1(VAR_4[VAR_11 + 1]));
    FUNC_5(1);
   }
   FUNC_0(VAR_10);
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
 {
  Step *VAR_17 = VAR_9[VAR_11];
  PGconn *VAR_18 = VAR_4[1 + VAR_17->session];
  Step *VAR_19 = ((void*)0);
  bool VAR_20;
  for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
  {
   if (VAR_17->session == VAR_15[VAR_12]->session)
   {
    VAR_19 = VAR_15[VAR_12];


    FUNC_14(VAR_7, VAR_19, VAR_3);


    if (VAR_12 + 1 < VAR_13)
     FUNC_8(&VAR_15[VAR_12], &VAR_15[VAR_12 + 1],
       (VAR_13 - (VAR_12 + 1)) * sizeof(Step *));
    VAR_13--;

    break;
   }
  }
  if (VAR_19 != ((void*)0))
  {





   VAR_12 = 0;
   VAR_14 = 0;
   while (VAR_12 < VAR_13)
   {
    if (FUNC_14(VAR_7, VAR_15[VAR_12],
           VAR_2 | VAR_3))
    {

     VAR_12++;
    }
    else
    {

     VAR_16[VAR_14++] = VAR_15[VAR_12];
     if (VAR_12 + 1 < VAR_13)
      FUNC_8(&VAR_15[VAR_12], &VAR_15[VAR_12 + 1],
        (VAR_13 - (VAR_12 + 1)) * sizeof(Step *));
     VAR_13--;
    }
   }


   FUNC_13(VAR_19, VAR_14, VAR_16);
  }


  if (!FUNC_4(VAR_18, VAR_17->sql))
  {
   FUNC_6(VAR_6, "failed to send query for step %s: %s\n",
     VAR_17->name, FUNC_1(VAR_18));
   FUNC_5(1);
  }


  VAR_20 = FUNC_14(VAR_7, VAR_17, VAR_2);


  VAR_12 = 0;
  VAR_14 = 0;
  while (VAR_12 < VAR_13)
  {
   if (FUNC_14(VAR_7, VAR_15[VAR_12],
          VAR_2 | VAR_3))
    VAR_12++;
   else
   {
    VAR_16[VAR_14++] = VAR_15[VAR_12];
    if (VAR_12 + 1 < VAR_13)
     FUNC_8(&VAR_15[VAR_12], &VAR_15[VAR_12 + 1],
       (VAR_13 - (VAR_12 + 1)) * sizeof(Step *));
    VAR_13--;
   }
  }


  FUNC_13(VAR_17, VAR_14, VAR_16);


  if (VAR_20)
   VAR_15[VAR_13++] = VAR_17;
 }


 for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
 {
  FUNC_14(VAR_7, VAR_15[VAR_12], VAR_3);
  FUNC_12(VAR_15[VAR_12]);
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->nsessions; VAR_11++)
 {
  if (VAR_7->sessions[VAR_11]->teardownsql)
  {
   VAR_10 = FUNC_2(VAR_4[VAR_11 + 1], VAR_7->sessions[VAR_11]->teardownsql);
   if (FUNC_3(VAR_10) == VAR_1)
   {
    FUNC_10(VAR_10);
   }
   else if (FUNC_3(VAR_10) != VAR_0)
   {
    FUNC_6(VAR_5, "teardown of session %s failed: %s",
      VAR_7->sessions[VAR_11]->name,
      FUNC_1(VAR_4[VAR_11 + 1]));

   }
   FUNC_0(VAR_10);
  }
 }


 if (VAR_7->teardownsql)
 {
  VAR_10 = FUNC_2(VAR_4[0], VAR_7->teardownsql);
  if (FUNC_3(VAR_10) == VAR_1)
  {
   FUNC_10(VAR_10);
  }
  else if (FUNC_3(VAR_10) != VAR_0)
  {
   FUNC_6(VAR_5, "teardown failed: %s",
     FUNC_1(VAR_4[0]));

  }
  FUNC_0(VAR_10);
 }

 FUNC_7(VAR_15);
 FUNC_7(VAR_16);
}
