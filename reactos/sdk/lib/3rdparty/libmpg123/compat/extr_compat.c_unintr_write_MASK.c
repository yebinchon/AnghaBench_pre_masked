
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,size_t) ;

size_t FUNC_1(int VAR_2, void const *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 while(VAR_4)
 {
  ssize_t VAR_6 = FUNC_0(VAR_2, (char*)VAR_3+VAR_5, VAR_4);
  if(VAR_6 < 0 && VAR_1 != VAR_0)
   break;
  VAR_4 -= VAR_6;
  VAR_5 += VAR_6;
 }
 return VAR_5;
}
