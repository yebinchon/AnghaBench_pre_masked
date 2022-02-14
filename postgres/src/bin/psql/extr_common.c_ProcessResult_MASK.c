
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; int * cur_cmd_source; int * copyStream; int * queryFout; scalar_t__ gfname; } ;
typedef int PGresult ;
typedef int FILE ;
typedef int ExecStatusType ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;





 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int **) ;
 scalar_t__ FUNC_12 (int ,int *,int **) ;
 scalar_t__ FUNC_13 (scalar_t__,int **,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_16 () ;

__attribute__((used)) static bool
FUNC_17(PGresult **VAR_1)
{
 bool VAR_2 = 1;
 bool VAR_3 = 1;

 for (;;)
 {
  ExecStatusType VAR_4;
  bool VAR_5;
  PGresult *VAR_6;

  if (!FUNC_0(*VAR_1))
  {





   VAR_2 = 0;
   break;
  }

  VAR_4 = FUNC_5(*VAR_1);
  switch (VAR_4)
  {
   case 129:
   case 132:
   case 128:
    VAR_5 = 0;
    break;

   case 130:
   case 131:
    VAR_5 = 1;
    break;

   default:

    VAR_5 = 0;
    FUNC_15("unexpected PQresultStatus: %d", VAR_4);
    break;
  }

  if (VAR_5)
  {
   FILE *VAR_7;
   PGresult *VAR_8;

   FUNC_7();
   if (VAR_4 == 130)
   {
    bool VAR_9 = 0;
    bool VAR_10 = 0;

    if (VAR_0.copyStream)
    {

     VAR_7 = VAR_0.copyStream;
    }
    else if (VAR_0.gfname)
    {

     if (FUNC_13(VAR_0.gfname,
           &VAR_7, &VAR_10))
     {
      VAR_9 = 1;
      if (VAR_10)
       FUNC_9();
     }
     else
      VAR_7 = ((void*)0);
    }
    else
    {

     VAR_7 = VAR_0.queryFout;
    }

    VAR_2 = FUNC_12(VAR_0.db,
          VAR_7,
          &VAR_8)
     && VAR_2
     && (VAR_7 != ((void*)0));






    if (VAR_7 == VAR_0.queryFout)
    {
     FUNC_3(VAR_8);
     VAR_8 = ((void*)0);
    }

    if (VAR_9)
    {

     if (VAR_10)
     {
      FUNC_14(VAR_7);
      FUNC_16();
     }
     else
     {
      FUNC_10(VAR_7);
     }
    }
   }
   else
   {

    VAR_7 = VAR_0.copyStream ? VAR_0.copyStream : VAR_0.cur_cmd_source;
    VAR_2 = FUNC_11(VAR_0.db,
            VAR_7,
            FUNC_2(*VAR_1),
            &VAR_8) && VAR_2;
   }
   FUNC_6();





   FUNC_3(*VAR_1);
   *VAR_1 = VAR_8;
  }
  else if (VAR_3)
  {

   break;
  }






  VAR_6 = FUNC_4(VAR_0.db);
  if (!VAR_6)
   break;

  FUNC_3(*VAR_1);
  *VAR_1 = VAR_6;
  VAR_3 = 0;
 }

 FUNC_8(*VAR_1, VAR_2);


 if (!VAR_3 && !FUNC_1())
  return 0;

 return VAR_2;
}
