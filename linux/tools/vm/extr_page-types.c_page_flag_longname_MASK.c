
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int buf ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 scalar_t__ FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static char *FUNC_2(uint64_t VAR_1)
{
 static char VAR_2[1024];
 size_t VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (!VAR_0[VAR_3])
   continue;
  if ((VAR_1 >> VAR_3) & 1)
   VAR_4 += FUNC_1(VAR_2 + VAR_4, sizeof(VAR_2) - VAR_4, "%s,",
     VAR_0[VAR_3] + 2);
 }
 if (VAR_4)
  VAR_4--;
 VAR_2[VAR_4] = '\0';

 return VAR_2;
}
