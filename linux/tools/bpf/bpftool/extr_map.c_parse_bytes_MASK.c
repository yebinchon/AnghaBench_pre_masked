
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,...) ;
 unsigned char FUNC_2 (char*,char**,unsigned int) ;

__attribute__((used)) static char **FUNC_3(char **VAR_0, const char *VAR_1, unsigned char *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;
 char *VAR_6;

 if (FUNC_0(*VAR_0, "hex")) {
  VAR_5 = 16;
  VAR_0++;
 }

 while (VAR_4 < VAR_3 && VAR_0[VAR_4]) {
  VAR_2[VAR_4] = FUNC_2(VAR_0[VAR_4], &VAR_6, VAR_5);
  if (*VAR_6) {
   FUNC_1("error parsing byte: %s", VAR_0[VAR_4]);
   return ((void*)0);
  }
  VAR_4++;
 }

 if (VAR_4 != VAR_3) {
  FUNC_1("%s expected %d bytes got %d", VAR_1, VAR_3, VAR_4);
  return ((void*)0);
 }

 return VAR_0 + VAR_4;
}
