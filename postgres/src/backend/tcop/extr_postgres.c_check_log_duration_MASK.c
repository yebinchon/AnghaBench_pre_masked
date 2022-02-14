
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,long*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*,long,int) ;
 scalar_t__ VAR_5 ;

int
FUNC_5(char *VAR_6, bool VAR_7)
{
 if (VAR_1 || VAR_2 >= 0 ||
  VAR_3 >= 0 || VAR_5)
 {
  long VAR_8;
  int VAR_9;
  int VAR_10;
  bool VAR_11;
  bool VAR_12;
  bool VAR_13 = 0;

  FUNC_2(FUNC_0(),
       FUNC_1(),
       &VAR_8, &VAR_9);
  VAR_10 = VAR_9 / 1000;






  VAR_11 = (VAR_3 == 0 ||
        (VAR_3 > 0 &&
         (VAR_8 > VAR_3 / 1000 ||
          VAR_8 * 1000 + VAR_10 >= VAR_3)));

  VAR_12 = (VAR_2 == 0 ||
         (VAR_2 > 0 &&
          (VAR_8 > VAR_2 / 1000 ||
           VAR_8 * 1000 + VAR_10 >= VAR_2)));






  if (VAR_12)
   VAR_13 = VAR_4 != 0 &&
    (VAR_4 == 1 ||
     FUNC_3() <= VAR_4 * VAR_0);

  if (VAR_11 || VAR_13 || VAR_1 || VAR_5)
  {
   FUNC_4(VAR_6, 32, "%ld.%03d",
      VAR_8 * 1000 + VAR_10, VAR_9 % 1000);
   if ((VAR_11 || VAR_13 || VAR_5) && !VAR_7)
    return 2;
   else
    return 1;
  }
 }

 return 0;
}
