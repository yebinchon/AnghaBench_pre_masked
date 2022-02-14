
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(int VAR_2, void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = 0;
 ssize_t VAR_6;

 while(VAR_4 > 0) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_6 == 0)

   break;
  if (VAR_6 < 0) {
   if (VAR_1 == VAR_0)

    continue;

   VAR_5 = -1;
   break;
  }


  VAR_5 += VAR_6;
  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;
 }

 return VAR_5;
}
