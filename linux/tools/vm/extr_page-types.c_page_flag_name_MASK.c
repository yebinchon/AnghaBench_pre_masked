
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 size_t FUNC_0 (char**) ;
 int FUNC_1 (char*,size_t) ;
 char** VAR_0 ;

__attribute__((used)) static char *FUNC_2(uint64_t VAR_1)
{
 static char VAR_2[65];
 int VAR_3;
 size_t VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = (VAR_1 >> VAR_4) & 1;
  if (!VAR_0[VAR_4]) {
   if (VAR_3)
    FUNC_1("unknown flag bit %d\n", VAR_4);
   continue;
  }
  VAR_2[VAR_5++] = VAR_3 ? VAR_0[VAR_4][0] : '_';
 }

 return VAR_2;
}
