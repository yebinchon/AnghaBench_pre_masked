
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int,int ) ;
 int FUNC_5 (char*,int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (char*) ;

__attribute__((used)) static char *FUNC_8(char *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;
 int VAR_5;
 char *VAR_6;






 VAR_4 = FUNC_0(&VAR_6, "pme_%s", VAR_2);
 if (VAR_4 < 0) {
  FUNC_5("%s: asprintf() error %s for file %s\n", VAR_1,
    FUNC_6(VAR_0), VAR_2);
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_7(VAR_6); VAR_3++) {
  VAR_5 = VAR_6[VAR_3];

  if (VAR_5 == '-' || VAR_5 == '/')
   VAR_6[VAR_3] = '_';
  else if (VAR_5 == '.') {
   VAR_6[VAR_3] = '\0';
   break;
  } else if (!FUNC_3(VAR_5) && VAR_5 != '_') {
   FUNC_4("%s: Invalid character '%c' in file name %s\n",
     VAR_1, VAR_5, FUNC_1(VAR_2));
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
   break;
  }
 }

 return VAR_6;
}
