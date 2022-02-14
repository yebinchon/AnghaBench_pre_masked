
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,void*,size_t,int ) ;
 scalar_t__ FUNC_1 (int,void*,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_2(int VAR_1, void *VAR_2, size_t VAR_3,
         int VAR_4)
{
 ssize_t VAR_5;
 ssize_t VAR_6 = 0;

 if (!VAR_3)
  return 0;

 do {
  if (VAR_4)
   VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);
  else
   VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);

  if (VAR_5 <= 0)
   return -1;

  VAR_2 = (void *)((intptr_t) VAR_2 + VAR_5);
  VAR_3 -= VAR_5;
  VAR_6 += VAR_5;

 } while (VAR_3 > 0);

 return VAR_6;
}
