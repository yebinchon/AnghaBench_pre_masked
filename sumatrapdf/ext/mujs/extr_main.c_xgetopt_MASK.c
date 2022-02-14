
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char) ;
 int VAR_1 ;
 char* FUNC_1 (char*,char) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(int VAR_4, char *VAR_5[], char *VAR_6)
{
 static char *VAR_7 = ((void*)0);

 char VAR_8;
 char *VAR_9;

 VAR_2 = ((void*)0);

 if (!VAR_7 || *VAR_7 == '\0') {
  if (VAR_3 == 0)
   VAR_3++;

  if (VAR_3 >= VAR_4 || VAR_5[VAR_3][0] != '-' || VAR_5[VAR_3][1] == '\0')
   return VAR_0;
  if (VAR_5[VAR_3][1] == '-' && VAR_5[VAR_3][2] == '\0') {
   VAR_3++;
   return VAR_0;
  }

  VAR_7 = VAR_5[VAR_3]+1;
  VAR_3++;
 }

 VAR_8 = *VAR_7++;
 VAR_9 = FUNC_1(VAR_6, VAR_8);

 if (!VAR_9 || VAR_8 == ':') {
  FUNC_0(VAR_1, "%s: unknown option -%c\n", VAR_5[0], VAR_8);
  return '?';
 }

 VAR_9++;
 if (*VAR_9 == ':') {
  if (*VAR_7 != '\0') {
   VAR_2 = VAR_7;
   VAR_7 = ((void*)0);
  } else if (VAR_3 < VAR_4) {
   VAR_2 = VAR_5[VAR_3];
   VAR_3++;
  } else {
   FUNC_0(VAR_1, "%s: option requires argument -%c\n", VAR_5[0], VAR_8);
   return ':';
  }
 }

 return VAR_8;
}
