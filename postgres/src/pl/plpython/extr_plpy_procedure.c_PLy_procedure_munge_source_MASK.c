
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3,
      *VAR_4;
 const char *VAR_5;
 size_t VAR_6;
 int VAR_7;




 VAR_6 = (FUNC_4(VAR_2) * 2) + FUNC_4(VAR_1) + 16;

 VAR_3 = FUNC_2(VAR_6);
 VAR_7 = FUNC_3(VAR_3, VAR_6, "def %s():\n\t", VAR_1);
 FUNC_0(VAR_7 >= 0 && VAR_7 < VAR_6);

 VAR_5 = VAR_2;
 VAR_4 = VAR_3 + VAR_7;

 while (*VAR_5 != '\0')
 {
  if (*VAR_5 == '\r' && *(VAR_5 + 1) == '\n')
   VAR_5++;

  if (*VAR_5 == '\n' || *VAR_5 == '\r')
  {
   *VAR_4++ = '\n';
   *VAR_4++ = '\t';
   VAR_5++;
  }
  else
   *VAR_4++ = *VAR_5++;
 }
 *VAR_4++ = '\n';
 *VAR_4++ = '\n';
 *VAR_4 = '\0';

 if (VAR_4 > (VAR_3 + VAR_6))
  FUNC_1(VAR_0, "buffer overrun in PLy_procedure_munge_source");

 return VAR_3;
}
