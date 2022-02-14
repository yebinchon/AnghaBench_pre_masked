
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int) ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int VAR_7 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_8, bool VAR_9, bool VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;







 VAR_13 = VAR_6;
 if (!VAR_9)
  VAR_13 |= VAR_5;
 else
  VAR_13 |= VAR_4;

 VAR_12 = FUNC_1(VAR_8, VAR_13);






 if (VAR_12 < 0 && VAR_9 && (VAR_7 == VAR_3 || VAR_7 == VAR_0))
  return 0;
 else if (VAR_12 < 0 && VAR_10 && VAR_7 == VAR_0)
  return 0;
 else if (VAR_12 < 0)
 {
  FUNC_2(VAR_11,
    (FUNC_3(),
     FUNC_4("could not open file \"%s\": %m", VAR_8)));
  return -1;
 }

 VAR_14 = FUNC_5(VAR_12);





 if (VAR_14 != 0 && !(VAR_9 && (VAR_7 == VAR_1 || VAR_7 == VAR_2)))
 {
  int VAR_15;


  VAR_15 = VAR_7;
  (void) FUNC_0(VAR_12);
  VAR_7 = VAR_15;

  FUNC_2(VAR_11,
    (FUNC_3(),
     FUNC_4("could not fsync file \"%s\": %m", VAR_8)));
  return -1;
 }

 if (FUNC_0(VAR_12) != 0)
 {
  FUNC_2(VAR_11,
    (FUNC_3(),
     FUNC_4("could not close file \"%s\": %m", VAR_8)));
  return -1;
 }

 return 0;
}
