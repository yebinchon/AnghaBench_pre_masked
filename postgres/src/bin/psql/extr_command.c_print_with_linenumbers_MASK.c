
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, char *VAR_1,
        const char *VAR_2)
{
 bool VAR_3 = (VAR_2 != ((void*)0));
 size_t VAR_4 = VAR_3 ? FUNC_2(VAR_2) : 0;
 int VAR_5 = 0;

 while (*VAR_1 != '\0')
 {
  char *VAR_6;

  if (VAR_3 && FUNC_3(VAR_1, VAR_2, VAR_4) == 0)
   VAR_3 = 0;


  if (!VAR_3)
   VAR_5++;


  VAR_6 = FUNC_1(VAR_1, '\n');
  if (VAR_6 != ((void*)0))
   *VAR_6 = '\0';


  if (VAR_3)
   FUNC_0(VAR_0, "        %s\n", VAR_1);
  else
   FUNC_0(VAR_0, "%-7d %s\n", VAR_5, VAR_1);


  if (VAR_6 == ((void*)0))
   break;
  VAR_1 = ++VAR_6;
 }
}
