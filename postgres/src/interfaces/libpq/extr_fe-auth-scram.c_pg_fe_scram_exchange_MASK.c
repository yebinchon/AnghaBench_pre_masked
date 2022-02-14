
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; TYPE_2__* conn; } ;
typedef TYPE_1__ fe_scram_state ;
struct TYPE_9__ {int errorMessage; } ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;



 char* FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(void *VAR_1, char *VAR_2, int VAR_3,
      char **VAR_4, int *VAR_5,
      bool *VAR_6, bool *VAR_7)
{
 fe_scram_state *VAR_8 = (fe_scram_state *) VAR_1;
 PGconn *VAR_9 = VAR_8->conn;

 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_4 = ((void*)0);
 *VAR_5 = 0;





 if (VAR_8->state != 130)
 {
  if (VAR_3 == 0)
  {
   FUNC_3(&VAR_9->errorMessage,
         FUNC_2("malformed SCRAM message (empty message)\n"));
   goto error;
  }
  if (VAR_3 != FUNC_6(VAR_2))
  {
   FUNC_3(&VAR_9->errorMessage,
         FUNC_2("malformed SCRAM message (length mismatch)\n"));
   goto error;
  }
 }

 switch (VAR_8->state)
 {
  case 130:

   *VAR_4 = FUNC_1(VAR_8);
   if (*VAR_4 == ((void*)0))
    goto error;

   *VAR_5 = FUNC_6(*VAR_4);
   *VAR_6 = 0;
   VAR_8->state = 129;
   break;

  case 129:

   if (!FUNC_5(VAR_8, VAR_2))
    goto error;

   *VAR_4 = FUNC_0(VAR_8);
   if (*VAR_4 == ((void*)0))
    goto error;

   *VAR_5 = FUNC_6(*VAR_4);
   *VAR_6 = 0;
   VAR_8->state = 128;
   break;

  case 128:

   if (!FUNC_4(VAR_8, VAR_2))
    goto error;





   if (FUNC_7(VAR_8))
    *VAR_7 = 1;
   else
   {
    *VAR_7 = 0;
    FUNC_3(&VAR_9->errorMessage,
          FUNC_2("incorrect server signature\n"));
   }
   *VAR_6 = 1;
   VAR_8->state = VAR_0;
   break;

  default:

   FUNC_3(&VAR_9->errorMessage,
         FUNC_2("invalid SCRAM exchange state\n"));
   goto error;
 }
 return;

error:
 *VAR_6 = 1;
 *VAR_7 = 0;
 return;
}
