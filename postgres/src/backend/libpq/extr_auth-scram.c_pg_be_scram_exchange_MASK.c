
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; char* logdetail; int doomed; } ;
typedef TYPE_1__ scram_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,char const*) ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

int
FUNC_14(void *VAR_6, const char *VAR_7, int VAR_8,
      char **VAR_9, int *VAR_10, char **VAR_11)
{
 scram_state *VAR_12 = (scram_state *) VAR_6;
 int VAR_13;

 *VAR_9 = ((void*)0);







 if (VAR_7 == ((void*)0))
 {
  FUNC_0(VAR_12->state == 129);

  *VAR_9 = FUNC_8("");
  *VAR_10 = 0;
  return VAR_2;
 }





 if (VAR_8 == 0)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_7("malformed SCRAM message"),
     FUNC_6("The message is empty.")));
 if (VAR_8 != FUNC_11(VAR_7))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_7("malformed SCRAM message"),
     FUNC_6("Message length does not match input length.")));

 switch (VAR_12->state)
 {
  case 129:






   FUNC_10(VAR_12, VAR_7);


   *VAR_9 = FUNC_2(VAR_12);

   VAR_12->state = 128;
   VAR_13 = VAR_2;
   break;

  case 128:






   FUNC_9(VAR_12, VAR_7);

   if (!FUNC_13(VAR_12))
    FUNC_4(VAR_1,
      (FUNC_5(VAR_0),
       FUNC_7("invalid SCRAM response"),
       FUNC_6("Nonce does not match.")));
   if (!FUNC_12(VAR_12) || VAR_12->doomed)
   {
    VAR_13 = VAR_3;
    break;
   }


   *VAR_9 = FUNC_1(VAR_12);


   VAR_13 = VAR_4;
   VAR_12->state = VAR_5;
   break;

  default:
   FUNC_3(VAR_1, "invalid SCRAM exchange state");
   VAR_13 = VAR_3;
 }

 if (VAR_13 == VAR_3 && VAR_12->logdetail && VAR_11)
  *VAR_11 = VAR_12->logdetail;

 if (*VAR_9)
  *VAR_10 = FUNC_11(*VAR_9);

 return VAR_13;
}
