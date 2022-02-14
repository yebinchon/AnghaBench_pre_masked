
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,unsigned long,unsigned int) ;
 int FUNC_1 (int,unsigned long*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_0, unsigned long VAR_1,
         unsigned int VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_2;
 int VAR_5;

 while (1) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (FUNC_2(VAR_5 >= VAR_1)) {





   if (VAR_4 && VAR_2 && VAR_3) {
    VAR_2 = VAR_4 = 0;
    continue;
   }
   return -1;
  }

  if (!FUNC_1(VAR_5, VAR_0))
   break;

  VAR_2 = VAR_5 + 1;
  if (VAR_2 >= VAR_1 - 1)
   VAR_2 = 0;
 }

 return VAR_5;
}
