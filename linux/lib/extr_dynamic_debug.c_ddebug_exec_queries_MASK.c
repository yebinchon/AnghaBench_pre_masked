
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6, VAR_7 = 0;

 for (VAR_3 = 0; VAR_0; VAR_0 = VAR_2) {
  VAR_2 = FUNC_2(VAR_0, ";\n");
  if (VAR_2)
   *VAR_2++ = '\0';

  VAR_0 = FUNC_1(VAR_0);
  if (!VAR_0 || !*VAR_0 || *VAR_0 == '#')
   continue;

  FUNC_3("query %d: \"%s\"\n", VAR_3, VAR_0);

  VAR_6 = FUNC_0(VAR_0, VAR_1);
  if (VAR_6 < 0) {
   VAR_4++;
   VAR_5 = VAR_6;
  } else {
   VAR_7 += VAR_6;
  }
  VAR_3++;
 }
 FUNC_3("processed %d queries, with %d matches, %d errs\n",
   VAR_3, VAR_7, VAR_4);

 if (VAR_5)
  return VAR_5;
 return VAR_7;
}
