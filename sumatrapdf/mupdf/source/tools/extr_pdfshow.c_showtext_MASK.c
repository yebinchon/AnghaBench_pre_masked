
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,char) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(char *VAR_2, int VAR_3)
{
 int VAR_4 = 1;
 int VAR_5 = *VAR_2;
 while (*VAR_2)
 {
  VAR_5 = *VAR_2++;
  if (VAR_5 == '\r')
  {
   if (*VAR_2 == '\n')
    ++VAR_2;
   VAR_5 = '\n';
  }
  if (VAR_3 && VAR_4)
   FUNC_0(VAR_0, VAR_1, '\t');
  FUNC_0(VAR_0, VAR_1, VAR_5);
  VAR_4 = (VAR_5 == '\n');
 }
 if (!VAR_4)
  FUNC_0(VAR_0, VAR_1, '\n');
}
