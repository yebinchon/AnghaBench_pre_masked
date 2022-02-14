
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** VAR_0 ;
 scalar_t__ FUNC_1 (char*,int,char*,char*) ;

void FUNC_2(int VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_1 & (1 << VAR_4))
   VAR_5 += FUNC_1(VAR_2 + VAR_5, VAR_3 - VAR_5, " %s",
     VAR_0[VAR_4]);
 }
 VAR_2[VAR_5] = '\0';
}
