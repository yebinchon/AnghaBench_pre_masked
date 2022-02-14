
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int *,char*,char const*) ;
 char** VAR_1 ;
 int VAR_2 ;

void
FUNC_3(const char *const VAR_3)
{
 FILE *VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_3,



  "w"

 );
 if (VAR_4 != ((void*)0)) {
  for (VAR_6=2; VAR_6<VAR_0; VAR_6++) {
          VAR_7 = (VAR_2+VAR_6) % VAR_0;
   VAR_5 = VAR_1[VAR_7];
   if ((VAR_5 == ((void*)0)) || (*VAR_5 == '\0'))
    continue;
   FUNC_2(VAR_4, "%s\n", VAR_5);
  }
  FUNC_0(VAR_4);
 }
}
