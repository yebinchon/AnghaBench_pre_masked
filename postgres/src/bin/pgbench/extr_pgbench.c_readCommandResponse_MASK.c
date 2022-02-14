
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int use_file; int command; int con; int ecnt; } ;
typedef int PGresult ;
typedef TYPE_1__ CState ;





 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int *,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int,int,...) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (TYPE_1__*,char*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_12(CState *VAR_1, char *VAR_2)
{
 PGresult *VAR_3;
 PGresult *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_3(VAR_1->con);

 while (VAR_3 != ((void*)0))
 {
  bool VAR_6;


  VAR_4 = FUNC_3(VAR_1->con);
  VAR_6 = (VAR_4 == ((void*)0));

  switch (FUNC_7(VAR_3))
  {
   case 130:
   case 129:
    if (VAR_6 && VAR_2 != ((void*)0))
    {
     FUNC_8(VAR_0,
       "client %d script %d command %d query %d: expected one row, got %d\n",
       VAR_1->id, VAR_1->use_file, VAR_1->command, VAR_5, 0);
     goto error;
    }
    break;

   case 128:
    if (VAR_6 && VAR_2 != ((void*)0))
    {
     if (FUNC_6(VAR_3) != 1)
     {
      FUNC_8(VAR_0,
        "client %d script %d command %d query %d: expected one row, got %d\n",
        VAR_1->id, VAR_1->use_file, VAR_1->command, VAR_5, FUNC_6(VAR_3));
      goto error;
     }


     for (int VAR_7 = 0; VAR_7 < FUNC_5(VAR_3); VAR_7++)
     {
      char *VAR_8 = FUNC_2(VAR_3, VAR_7);


      if (*VAR_2 != '\0')
       VAR_8 = FUNC_10("%s%s", VAR_2, VAR_8);


      if (!FUNC_11(VAR_1, "gset", VAR_8,
           FUNC_4(VAR_3, 0, VAR_7)))
      {

       FUNC_8(VAR_0,
         "client %d script %d command %d query %d: error storing into variable %s\n",
         VAR_1->id, VAR_1->use_file, VAR_1->command, VAR_5,
         VAR_8);
       goto error;
      }

      if (*VAR_2 != '\0')
       FUNC_9(VAR_8);
     }
    }

    break;

   default:

    FUNC_8(VAR_0,
      "client %d script %d aborted in command %d query %d: %s",
      VAR_1->id, VAR_1->use_file, VAR_1->command, VAR_5,
      FUNC_1(VAR_1->con));
    goto error;
  }

  FUNC_0(VAR_3);
  VAR_5++;
  VAR_3 = VAR_4;
 }

 if (VAR_5 == 0)
 {
  FUNC_8(VAR_0, "client %d command %d: no results\n", VAR_1->id, VAR_1->command);
  VAR_1->ecnt++;
  return 0;
 }

 return 1;

error:
 VAR_1->ecnt++;
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 do
 {
  VAR_3 = FUNC_3(VAR_1->con);
  FUNC_0(VAR_3);
 } while (VAR_3);

 return 0;
}
