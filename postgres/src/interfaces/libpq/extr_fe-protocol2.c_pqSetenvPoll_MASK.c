
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ status; int setenv_state; char* client_encoding_initial; int sversion; int errorMessage; TYPE_1__* next_eo; } ;
struct TYPE_9__ {char* envName; char* pgName; } ;
typedef int PostgresPollingStatusType ;
typedef int PGresult ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (int ,char*,char*,...) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,char*,char const*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (char*,char*,...) ;
 int VAR_6 ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char*,int) ;

PostgresPollingStatusType
FUNC_17(PGconn *VAR_7)
{
 PGresult *VAR_8;

 if (VAR_7 == ((void*)0) || VAR_7->status == VAR_0)
  return VAR_2;


 switch (VAR_7->setenv_state)
 {

  case 135:
  case 132:
  case 130:
  case 128:
   {

    int VAR_9 = FUNC_11(VAR_7);

    if (VAR_9 < 0)
     goto error_return;
    if (VAR_9 == 0)
     return VAR_4;

    break;
   }


  case 136:
  case 133:
  case 131:
  case 129:
   break;


  case 134:
   return VAR_3;

  default:
   FUNC_13(&VAR_7->errorMessage,
         FUNC_9(
           "invalid setenv state %c, "
           "probably indicative of memory corruption\n"
           ),
         VAR_7->setenv_state);
   goto error_return;
 }


 for (;;)
 {
  switch (VAR_7->setenv_state)
  {





   case 136:
    {
     char VAR_10[100];

     const char *VAR_11 = VAR_7->client_encoding_initial;

     if (VAR_11)
     {
      if (FUNC_10(VAR_11, "default") == 0)
       FUNC_14(VAR_10, "SET client_encoding = DEFAULT");
      else
       FUNC_14(VAR_10, "SET client_encoding = '%.60s'",
         VAR_11);





      if (!FUNC_6(VAR_7, VAR_10))
       goto error_return;

      VAR_7->setenv_state = 135;
     }
     else
      VAR_7->setenv_state = 133;
     break;
    }

   case 133:
    {






     char VAR_12[100];


     if (VAR_7->next_eo->envName)
     {
      const char *VAR_13;

      if ((VAR_13 = FUNC_8(VAR_7->next_eo->envName)))
      {
       if (FUNC_10(VAR_13, "default") == 0)
        FUNC_14(VAR_12, "SET %s = DEFAULT",
          VAR_7->next_eo->pgName);
       else
        FUNC_14(VAR_12, "SET %s = '%.60s'",
          VAR_7->next_eo->pgName, VAR_13);





       if (!FUNC_6(VAR_7, VAR_12))
        goto error_return;

       VAR_7->setenv_state = 132;
      }
      else
       VAR_7->next_eo++;
     }
     else
     {

      VAR_7->setenv_state = 131;
     }
     break;
    }

   case 135:
    {
     if (FUNC_3(VAR_7))
      return VAR_4;

     VAR_8 = FUNC_1(VAR_7);

     if (VAR_8)
     {
      if (FUNC_5(VAR_8) != VAR_1)
      {
       FUNC_0(VAR_8);
       goto error_return;
      }
      FUNC_0(VAR_8);

     }
     else
     {

      VAR_7->setenv_state = 133;
     }
     break;
    }

   case 132:
    {
     if (FUNC_3(VAR_7))
      return VAR_4;

     VAR_8 = FUNC_1(VAR_7);

     if (VAR_8)
     {
      if (FUNC_5(VAR_8) != VAR_1)
      {
       FUNC_0(VAR_8);
       goto error_return;
      }
      FUNC_0(VAR_8);

     }
     else
     {

      VAR_7->next_eo++;
      VAR_7->setenv_state = 133;
     }
     break;
    }

   case 131:
    {
     if (!FUNC_6(VAR_7, "begin; select version(); end"))
      goto error_return;

     VAR_7->setenv_state = 130;
     return VAR_4;
    }

   case 130:
    {
     if (FUNC_3(VAR_7))
      return VAR_4;

     VAR_8 = FUNC_1(VAR_7);

     if (VAR_8)
     {
      char *VAR_14;

      if (FUNC_5(VAR_8) == VAR_1)
      {

       FUNC_0(VAR_8);
       continue;
      }

      if (FUNC_5(VAR_8) != VAR_5 ||
       FUNC_4(VAR_8) != 1)
      {
       FUNC_0(VAR_8);
       goto error_return;
      }





      VAR_14 = FUNC_2(VAR_8, 0, 0);
      if (VAR_14 && FUNC_16(VAR_14, "PostgreSQL ", 11) == 0)
      {
       char *VAR_15;


       VAR_14 += 11;





       VAR_15 = FUNC_15(VAR_14, ' ');
       if (VAR_15)
        *VAR_15 = '\0';

       FUNC_12(VAR_7, "server_version",
              VAR_14);
      }

      FUNC_0(VAR_8);

     }
     else
     {

      VAR_7->setenv_state = 129;
     }
     break;
    }

   case 129:
    {
     const char *VAR_16;
     if (VAR_7->sversion >= 70300 &&
      VAR_7->sversion < 70400)
      VAR_16 = "begin; select pg_catalog.pg_client_encoding(); end";
     else
      VAR_16 = "select pg_client_encoding()";
     if (!FUNC_6(VAR_7, VAR_16))
      goto error_return;

     VAR_7->setenv_state = 128;
     return VAR_4;
    }

   case 128:
    {
     if (FUNC_3(VAR_7))
      return VAR_4;

     VAR_8 = FUNC_1(VAR_7);

     if (VAR_8)
     {
      const char *VAR_17;

      if (FUNC_5(VAR_8) == VAR_1)
      {

       FUNC_0(VAR_8);
       continue;
      }

      if (FUNC_5(VAR_8) == VAR_5 &&
       FUNC_4(VAR_8) == 1)
      {

       VAR_17 = FUNC_2(VAR_8, 0, 0);
       if (VAR_17 && *VAR_17)
        FUNC_12(VAR_7, "client_encoding",
               VAR_17);
      }
      else
      {





       VAR_17 = FUNC_8("PGCLIENTENCODING");
       if (VAR_17 && *VAR_17)
        FUNC_12(VAR_7, "client_encoding",
               VAR_17);
       else
        FUNC_12(VAR_7, "client_encoding",
               "SQL_ASCII");
      }

      FUNC_0(VAR_8);

     }
     else
     {

      VAR_7->setenv_state = 134;
      return VAR_3;
     }
     break;
    }

   default:
    FUNC_13(&VAR_7->errorMessage,
          FUNC_9("invalid state %c, "
            "probably indicative of memory corruption\n"),
          VAR_7->setenv_state);
    goto error_return;
  }
 }



error_return:
 VAR_7->setenv_state = 134;
 return VAR_2;
}
