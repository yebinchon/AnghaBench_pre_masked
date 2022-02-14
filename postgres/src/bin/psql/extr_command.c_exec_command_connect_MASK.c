
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prefix ;
typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_5, bool VAR_6)
{
 bool VAR_7 = 1;

 if (VAR_6)
 {
  static const char VAR_8[] = "-reuse-previous=";
  char *VAR_9,
       *VAR_10,
       *VAR_11,
       *VAR_12;
  enum trivalue VAR_13 = VAR_2;

  VAR_9 = FUNC_4(VAR_5);
  if (VAR_9 != ((void*)0) && FUNC_5(VAR_9, VAR_8, sizeof(VAR_8) - 1) == 0)
  {
   bool VAR_14;

   VAR_7 = FUNC_0(VAR_9 + sizeof(VAR_8) - 1,
          "-reuse-previous",
          &VAR_14);
   if (VAR_7)
   {
    VAR_13 = VAR_14 ? VAR_4 : VAR_3;
    FUNC_2(VAR_9);
    VAR_9 = FUNC_4(VAR_5);
   }
  }

  if (VAR_7)
  {
   VAR_10 = FUNC_4(VAR_5);
   VAR_11 = FUNC_4(VAR_5);
   VAR_12 = FUNC_4(VAR_5);

   VAR_7 = FUNC_1(VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);

   FUNC_2(VAR_10);
   FUNC_2(VAR_11);
   FUNC_2(VAR_12);
  }
  FUNC_2(VAR_9);
 }
 else
  FUNC_3(VAR_5);

 return VAR_7 ? VAR_1 : VAR_0;
}
