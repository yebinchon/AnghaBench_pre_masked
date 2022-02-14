
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,size_t) ;

__attribute__((used)) static uint FUNC_1(int VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 uint VAR_4 = 0;

 while ((VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2)) > 0)
  while (VAR_3)
   VAR_4 += (VAR_1[--VAR_3] == '\n');


 return ((VAR_3 < 0) ? 0 : VAR_4);
}
