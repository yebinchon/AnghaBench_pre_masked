
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 char VAR_1;
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0, VAR_4 = 0;

 while (VAR_3 < VAR_2) {
  VAR_1 = VAR_0[VAR_3];
  if (VAR_1 == '|')
   VAR_4++;
  VAR_3++;
 }

 return VAR_4 + 1;
}
