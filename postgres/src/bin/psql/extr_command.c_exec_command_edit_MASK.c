
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ backslashResult ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,int ,int,int *) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (int ,int ,int *,int) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static backslashResult
FUNC_11(PsqlScanState VAR_4, bool VAR_5,
      PQExpBuffer VAR_6, PQExpBuffer VAR_7)
{
 backslashResult VAR_8 = VAR_3;

 if (VAR_5)
 {
  if (!VAR_6)
  {
   FUNC_7("no query buffer");
   VAR_8 = VAR_1;
  }
  else
  {
   char *VAR_9;
   char *VAR_10 = ((void*)0);
   int VAR_11 = -1;

   VAR_9 = FUNC_8(VAR_4,
             VAR_0, ((void*)0), 1);
   if (VAR_9)
   {

    VAR_10 = FUNC_8(VAR_4,
           VAR_0, ((void*)0), 1);
    if (VAR_10 == ((void*)0))
    {

     if (VAR_9[0] &&
      FUNC_10(VAR_9, "0123456789") == FUNC_9(VAR_9))
     {

      VAR_10 = VAR_9;
      VAR_9 = ((void*)0);
     }
    }
   }
   if (VAR_10)
   {
    VAR_11 = FUNC_0(VAR_10);
    if (VAR_11 < 1)
    {
     FUNC_7("invalid line number: %s", VAR_10);
     VAR_8 = VAR_1;
    }
   }
   if (VAR_8 != VAR_1)
   {
    FUNC_4(&VAR_9);
    if (VAR_9)
     FUNC_1(VAR_9);


    FUNC_2(VAR_6, VAR_7);

    if (FUNC_3(VAR_9, VAR_6, VAR_11, ((void*)0)))
     VAR_8 = VAR_2;
    else
     VAR_8 = VAR_1;
   }
   if (VAR_9)
    FUNC_5(VAR_9);
   if (VAR_10)
    FUNC_5(VAR_10);
  }
 }
 else
  FUNC_6(VAR_4);

 return VAR_8;
}
