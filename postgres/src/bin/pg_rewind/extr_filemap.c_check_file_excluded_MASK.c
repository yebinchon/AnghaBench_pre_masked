
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int localpath ;


 int VAR_0 ;
 char** VAR_1 ;
 int ** VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 char const* FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_3, bool VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6;
 const char *VAR_7;


 for (VAR_6 = 0; VAR_2[VAR_6] != ((void*)0); VAR_6++)
 {
  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_3;
  else
   VAR_7++;
  if (FUNC_3(VAR_7, VAR_2[VAR_6]) == 0)
  {
   if (VAR_4)
    FUNC_1("entry \"%s\" excluded from source file list",
        VAR_3);
   else
    FUNC_1("entry \"%s\" excluded from target file list",
        VAR_3);
   return 1;
  }
 }





 for (VAR_6 = 0; VAR_1[VAR_6] != ((void*)0); VAR_6++)
 {
  FUNC_2(VAR_5, sizeof(VAR_5), "%s/",
     VAR_1[VAR_6]);
  if (FUNC_4(VAR_3, VAR_5) == VAR_3)
  {
   if (VAR_4)
    FUNC_1("entry \"%s\" excluded from source file list",
        VAR_3);
   else
    FUNC_1("entry \"%s\" excluded from target file list",
        VAR_3);
   return 1;
  }
 }

 return 0;
}
