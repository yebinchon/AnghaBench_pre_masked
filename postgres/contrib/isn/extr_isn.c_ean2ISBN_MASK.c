
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int *,int *) ;
 int FUNC_1 (unsigned char) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 unsigned int FUNC_4 (char*,int) ;

__attribute__((used)) static inline void
FUNC_5(char *VAR_0)
{
 char *VAR_1;
 unsigned VAR_2;






 if (FUNC_3("978-", VAR_0, 4) == 0)
 {

  FUNC_0(VAR_0, VAR_0 + 4, ((void*)0), ((void*)0));
  VAR_2 = FUNC_4(VAR_0, 10);
  VAR_1 = FUNC_2(VAR_0, '\0');
  while (!FUNC_1((unsigned char) *--VAR_1));
  if (VAR_2 == 10)
   *VAR_1 = 'X';
  else
   *VAR_1 = VAR_2 + '0';
 }
}
