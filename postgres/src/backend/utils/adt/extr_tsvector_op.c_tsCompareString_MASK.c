
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int ) ;

int32
FUNC_2(char *VAR_0, int VAR_1, char *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_1 == 0)
 {
  if (VAR_4)
   VAR_5 = 0;
  else
   VAR_5 = (VAR_3 > 0) ? -1 : 0;
 }
 else if (VAR_3 == 0)
 {
  VAR_5 = (VAR_1 > 0) ? 1 : 0;
 }
 else
 {
  VAR_5 = FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_1, VAR_3));

  if (VAR_4)
  {
   if (VAR_5 == 0 && VAR_1 > VAR_3)
    VAR_5 = 1;
  }
  else if (VAR_5 == 0 && VAR_1 != VAR_3)
  {
   VAR_5 = (VAR_1 < VAR_3) ? -1 : 1;
  }
 }

 return VAR_5;
}
