
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*,char) ;

int
FUNC_2(int VAR_5, char *VAR_6[], char *VAR_7)
{
 char VAR_8;
 char *VAR_9;

 VAR_1 = ((void*)0);

 if (!VAR_3 || *VAR_3 == '\0') {
  if (VAR_2 == 0)
   VAR_2++;

  if (VAR_2 >= VAR_5 || VAR_6[VAR_2][0] != '-' || VAR_6[VAR_2][1] == '\0')
   return VAR_0;
  if (VAR_6[VAR_2][1] == '-' && VAR_6[VAR_2][2] == '\0') {
   VAR_2++;
   return VAR_0;
  }

  VAR_3 = VAR_6[VAR_2]+1;
  VAR_2++;
 }

 VAR_8 = *VAR_3++;
 VAR_9 = FUNC_1(VAR_7, VAR_8);

 if (!VAR_9 || VAR_8 == ':') {
  FUNC_0(VAR_4, "%s: unknown option -%c\n", VAR_6[0], VAR_8);
  return '?';
 }

 VAR_9++;
 if (*VAR_9 == ':') {
  if (*VAR_3 != '\0') {
   VAR_1 = VAR_3;
   VAR_3 = ((void*)0);
  } else if( VAR_2 < VAR_5 ) {
   VAR_1 = VAR_6[VAR_2];
   VAR_2++;
  } else {
   FUNC_0(VAR_4, "%s: option requires argument -%c\n", VAR_6[0], VAR_8);
   return ':';
  }
 }

 return VAR_8;
}
