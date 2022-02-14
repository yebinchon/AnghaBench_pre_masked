
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*,int,int*) ;

int FUNC_2(const void *VAR_4, int VAR_5,
     int VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = -VAR_2;

 FUNC_0(VAR_4);

 if (VAR_6 < 0)
  return -VAR_3;

 for (VAR_8 = 0, VAR_9 = 0;
      (VAR_8 >= 0) && (VAR_8 <= VAR_5);
      VAR_8 = FUNC_1(VAR_4, VAR_8, &VAR_9)) {
  if (VAR_9 == VAR_6)
   VAR_10 = VAR_8;

  if (VAR_8 == VAR_5) {
   if (VAR_7)
    *VAR_7 = VAR_9;

   if (VAR_6 > VAR_9)
    return -VAR_3;
   else
    return VAR_10;
  }
 }

 if ((VAR_8 == -VAR_3) || (VAR_8 >= 0))
  return -VAR_0;
 else if (VAR_8 == -VAR_0)
  return -VAR_1;

 return VAR_8;
}
