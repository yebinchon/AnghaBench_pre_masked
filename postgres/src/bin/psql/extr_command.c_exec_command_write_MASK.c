
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_4__ {scalar_t__ len; char* data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__* PQExpBuffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 int * FUNC_10 (char*,char*) ;
 char* FUNC_11 (int ,int ,int *,int) ;
 int FUNC_12 () ;

__attribute__((used)) static backslashResult
FUNC_13(PsqlScanState VAR_4, bool VAR_5,
       const char *VAR_6,
       PQExpBuffer VAR_7, PQExpBuffer VAR_8)
{
 backslashResult VAR_9 = VAR_3;

 if (VAR_5)
 {
  char *VAR_10 = FUNC_11(VAR_4,
               VAR_1, ((void*)0), 1);
  FILE *VAR_11 = ((void*)0);
  bool VAR_12 = 0;

  if (!VAR_7)
  {
   FUNC_9("no query buffer");
   VAR_9 = VAR_2;
  }
  else
  {
   if (!VAR_10)
   {
    FUNC_9("\\%s: missing required argument", VAR_6);
    VAR_9 = VAR_2;
   }
   else
   {
    FUNC_2(&VAR_10);
    if (VAR_10[0] == '|')
    {
     VAR_12 = 1;
     FUNC_1();
     VAR_11 = FUNC_10(&VAR_10[1], "w");
    }
    else
    {
     FUNC_0(VAR_10);
     VAR_11 = FUNC_4(VAR_10, "w");
    }
    if (!VAR_11)
    {
     FUNC_9("%s: %m", VAR_10);
     VAR_9 = VAR_2;
    }
   }
  }

  if (VAR_11)
  {
   int VAR_13;







   if (VAR_7 && VAR_7->len > 0)
    FUNC_5(VAR_11, "%s\n", VAR_7->data);
   else if (VAR_8 && VAR_8->len > 0)
    FUNC_5(VAR_11, "%s\n", VAR_8->data);

   if (VAR_12)
    VAR_13 = FUNC_8(VAR_11);
   else
    VAR_13 = FUNC_3(VAR_11);

   if (VAR_13 == VAR_0)
   {
    FUNC_9("%s: %m", VAR_10);
    VAR_9 = VAR_2;
   }
  }

  if (VAR_12)
   FUNC_12();

  FUNC_6(VAR_10);
 }
 else
  FUNC_7(VAR_4);

 return VAR_9;
}
