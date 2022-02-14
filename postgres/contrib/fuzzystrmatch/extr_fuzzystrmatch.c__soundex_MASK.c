
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (unsigned char) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 VAR_2[VAR_0] = '\0';


 while (!FUNC_1((unsigned char) VAR_1[0]) && VAR_1[0])
  ++VAR_1;


 if (!VAR_1[0])
 {
  VAR_2[0] = (char) 0;
  return;
 }


 *VAR_2++ = (char) FUNC_3((unsigned char) *VAR_1++);

 VAR_3 = 1;
 while (*VAR_1 && VAR_3 < VAR_0)
 {
  if (FUNC_1((unsigned char) *VAR_1) &&
   FUNC_2(*VAR_1) != FUNC_2(*(VAR_1 - 1)))
  {
   *VAR_2 = FUNC_2(VAR_1[0]);
   if (*VAR_2 != '0')
   {
    ++VAR_2;
    ++VAR_3;
   }
  }
  ++VAR_1;
 }


 while (VAR_3 < VAR_0)
 {
  *VAR_2 = '0';
  ++VAR_2;
  ++VAR_3;
 }
}
