
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int errorMessage; int sasl_state; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,char**,int*,int*,int*) ;
 scalar_t__ FUNC_4 (char*,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char,char*,int) ;
 int FUNC_6 (int *,int ,...) ;

__attribute__((used)) static int
FUNC_7(PGconn *VAR_2, int VAR_3, bool VAR_4)
{
 char *VAR_5;
 int VAR_6;
 bool VAR_7;
 bool VAR_8;
 int VAR_9;
 char *VAR_10;


 VAR_10 = FUNC_2(VAR_3 + 1);
 if (!VAR_10)
 {
  FUNC_6(&VAR_2->errorMessage,
        FUNC_1("out of memory allocating SASL buffer (%d)\n"),
        VAR_3);
  return VAR_0;
 }

 if (FUNC_4(VAR_10, VAR_3, VAR_2))
 {
  FUNC_0(VAR_10);
  return VAR_0;
 }

 VAR_10[VAR_3] = '\0';

 FUNC_3(VAR_2->sasl_state,
       VAR_10, VAR_3,
       &VAR_5, &VAR_6,
       &VAR_7, &VAR_8);
 FUNC_0(VAR_10);

 if (VAR_4 && !VAR_7)
 {
  if (VAR_6 != 0)
   FUNC_0(VAR_5);

  FUNC_6(&VAR_2->errorMessage,
        FUNC_1("AuthenticationSASLFinal received from server, but SASL authentication was not completed\n"));
  return VAR_0;
 }
 if (VAR_6 != 0)
 {



  VAR_9 = FUNC_5(VAR_2, 'p', VAR_5, VAR_6);
  FUNC_0(VAR_5);

  if (VAR_9 != VAR_1)
   return VAR_0;
 }

 if (VAR_7 && !VAR_8)
  return VAR_0;

 return VAR_1;
}
