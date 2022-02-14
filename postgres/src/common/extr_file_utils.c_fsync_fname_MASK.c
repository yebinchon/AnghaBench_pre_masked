
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int ) ;
 int FUNC_3 (char*,char const*) ;

int
FUNC_4(const char *VAR_8, bool VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;







 VAR_11 = VAR_6;
 if (!VAR_9)
  VAR_11 |= VAR_5;
 else
  VAR_11 |= VAR_4;






 VAR_10 = FUNC_2(VAR_8, VAR_11, 0);
 if (VAR_10 < 0)
 {
  if (VAR_7 == VAR_0 || (VAR_9 && VAR_7 == VAR_3))
   return 0;
  FUNC_3("could not open file \"%s\": %m", VAR_8);
  return -1;
 }

 VAR_12 = FUNC_1(VAR_10);





 if (VAR_12 != 0 && !(VAR_9 && (VAR_7 == VAR_1 || VAR_7 == VAR_2)))
 {
  FUNC_3("could not fsync file \"%s\": %m", VAR_8);
  (void) FUNC_0(VAR_10);
  return -1;
 }

 (void) FUNC_0(VAR_10);
 return 0;
}
