
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long*,int,int) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,...) ;

size_t FUNC_3(unsigned long *VAR_0, int VAR_1,
   char *VAR_2, size_t VAR_3)
{

 int VAR_4, VAR_5, VAR_6;
 bool VAR_7 = 1;
 size_t VAR_8 = 0;

 VAR_5 = VAR_4 = FUNC_0(VAR_0, VAR_1);
 while (VAR_4 < VAR_1) {
  VAR_6 = VAR_4;
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_4 + 1);
  if (VAR_4 < VAR_1 && VAR_4 <= VAR_6 + 1)
   continue;

  if (!VAR_7)
   VAR_8 += FUNC_2(VAR_2 + VAR_8, VAR_3 - VAR_8, ",");

  VAR_7 = 0;

  VAR_8 += FUNC_2(VAR_2 + VAR_8, VAR_3 - VAR_8, "%d", VAR_5);
  if (VAR_5 < VAR_6)
   VAR_8 += FUNC_2(VAR_2 + VAR_8, VAR_3 - VAR_8, "-%d", VAR_6);

  VAR_5 = VAR_4;
 }
 return VAR_8;
}
