
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,void*,size_t) ;
 scalar_t__ FUNC_2 (int,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(bool VAR_2, int VAR_3, void *VAR_4, size_t VAR_5)
{
 void *VAR_6 = VAR_4;
 size_t VAR_7 = VAR_5;

 while (VAR_7) {

  ssize_t VAR_8 = VAR_2 ? FUNC_1(VAR_3, VAR_4, VAR_7) :
     FUNC_2(VAR_3, VAR_4, VAR_7);

  if (VAR_8 < 0 && VAR_1 == VAR_0)
   continue;
  if (VAR_8 <= 0)
   return VAR_8;

  VAR_7 -= VAR_8;
  VAR_4 += VAR_8;
 }

 FUNC_0((size_t)(VAR_4 - VAR_6) != VAR_5);
 return VAR_5;
}
