
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char* const,int) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 size_t VAR_5 ;
 int VAR_6 ;

int FUNC_3(int VAR_7, char *const VAR_8[], const char * VAR_9)
{
 char *VAR_10;
 char *VAR_11;
 int VAR_12;

 if (VAR_6 == VAR_2-1 && VAR_8[VAR_6][VAR_5] != '\0') {
  VAR_10 = (char *)VAR_8[VAR_6];
 } else {
  VAR_10 = (char *)VAR_8[VAR_2];
  if (VAR_10 == ((void*)0) || VAR_10[0] != '-' || FUNC_2(VAR_10, "-") == 0)
   return -1;
  VAR_6 = VAR_2;
  VAR_5 = 1;
  VAR_2++;
  if (FUNC_2(VAR_10, "--") == 0)
   return -1;
 }
 VAR_12 = VAR_5++;
 if ((VAR_11 = FUNC_1(VAR_9, VAR_10[VAR_12])) == ((void*)0)) {
  VAR_3 = VAR_10[VAR_12];
  if (VAR_1)
   FUNC_0(VAR_4, "%s: illegal option -- %c\n", VAR_8[0], VAR_3);
  return '?';
 }
 if (VAR_11[1] == ':') {
  if (VAR_10[VAR_12+1] != '\0') {
   VAR_0 = VAR_10+VAR_12+1;
   VAR_6++;
   return VAR_11[0];
  }
  if (VAR_8[VAR_2] == ((void*)0)) {
   VAR_3 = VAR_11[0];
   if (VAR_1)
    FUNC_0(VAR_4, "%s: option requires an argument -- %c\n", VAR_8[0], VAR_3);
   if (*VAR_9 == ':')
    return ':';
   return '?';
  }
  VAR_0 = VAR_8[VAR_2++];
 }
 return VAR_11[0];
}
