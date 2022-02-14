
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef scalar_t__ ssize_t ;


 char* VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static size_t FUNC_2(int VAR_2, uint *VAR_3)
{
 uint VAR_4, VAR_5 = 0;
 char *VAR_6 = VAR_0;
 size_t VAR_7 = 0, VAR_8;
 ssize_t VAR_9;

 if (VAR_3)
  *VAR_3 = 0;

 if (!VAR_1)
  return 0;

 VAR_4 = VAR_1 - 1;

 while (VAR_7 <= VAR_4) {
  VAR_8 = FUNC_0(VAR_6);
  VAR_7 += VAR_8;

  VAR_9 = FUNC_1(VAR_2, VAR_6, VAR_8);
  if (VAR_9 != (ssize_t)VAR_8)
   return VAR_7;

  if (VAR_7 <= VAR_4) {
   if (FUNC_1(VAR_2, "\n", 1) != 1)
    return VAR_7;
   VAR_6 += VAR_8 + 1;
  }
  ++VAR_7;
  ++VAR_5;
 }

 if (VAR_3)
  *VAR_3 = VAR_5;

 return VAR_7;
}
