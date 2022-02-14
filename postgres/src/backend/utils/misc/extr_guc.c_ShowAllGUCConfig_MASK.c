
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; char* name; char* short_desc; } ;
typedef int TupleDesc ;
typedef int TupOutputState ;
typedef int DestReceiver ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,char*,int ,int,int ) ;
 char* FUNC_5 (struct config_generic*,int) ;
 int * FUNC_6 (int *,int ,int *) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,int*) ;
 int FUNC_9 (int *) ;
 struct config_generic** VAR_5 ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(DestReceiver *VAR_7)
{
 int VAR_8;
 TupOutputState *VAR_9;
 TupleDesc VAR_10;
 Datum VAR_11[3];
 bool VAR_12[3] = {0, 0, 0};


 VAR_10 = FUNC_0(3);
 FUNC_4(VAR_10, (AttrNumber) 1, "name",
         VAR_3, -1, 0);
 FUNC_4(VAR_10, (AttrNumber) 2, "setting",
         VAR_3, -1, 0);
 FUNC_4(VAR_10, (AttrNumber) 3, "description",
         VAR_3, -1, 0);


 VAR_9 = FUNC_6(VAR_7, VAR_10, &VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  struct config_generic *VAR_13 = VAR_5[VAR_8];
  char *VAR_14;

  if ((VAR_13->flags & VAR_1) ||
   ((VAR_13->flags & VAR_2) &&
    !FUNC_10(FUNC_2(), VAR_0)))
   continue;


  VAR_11[0] = FUNC_3(FUNC_7(VAR_13->name));

  VAR_14 = FUNC_5(VAR_13, 1);
  if (VAR_14)
  {
   VAR_11[1] = FUNC_3(FUNC_7(VAR_14));
   VAR_12[1] = 0;
  }
  else
  {
   VAR_11[1] = FUNC_3(((void*)0));
   VAR_12[1] = 1;
  }

  VAR_11[2] = FUNC_3(FUNC_7(VAR_13->short_desc));


  FUNC_8(VAR_9, VAR_11, VAR_12);


  FUNC_11(FUNC_1(VAR_11[0]));
  if (VAR_14)
  {
   FUNC_11(VAR_14);
   FUNC_11(FUNC_1(VAR_11[1]));
  }
  FUNC_11(FUNC_1(VAR_11[2]));
 }

 FUNC_9(VAR_9);
}
