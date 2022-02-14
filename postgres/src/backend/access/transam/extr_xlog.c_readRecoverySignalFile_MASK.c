
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (int ,struct stat*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void)
{
 struct stat VAR_16;

 if (FUNC_1())
  return;




 if (FUNC_9(VAR_7, &VAR_16) == 0)
  FUNC_3(VAR_2,
    (FUNC_5(),
     FUNC_6("using recovery command file \"%s\" is not supported",
      VAR_7)));




 FUNC_10(VAR_6);
 if (FUNC_9(VAR_9, &VAR_16) == 0)
 {
  int VAR_17;

  VAR_17 = FUNC_0(VAR_9, VAR_4 | VAR_5 | FUNC_7(VAR_15),
          VAR_10 | VAR_11);
  if (VAR_17 >= 0)
  {
   (void) FUNC_8(VAR_17);
   FUNC_2(VAR_17);
  }
  VAR_14 = 1;
 }
 else if (FUNC_9(VAR_8, &VAR_16) == 0)
 {
  int VAR_18;

  VAR_18 = FUNC_0(VAR_8, VAR_4 | VAR_5 | FUNC_7(VAR_15),
          VAR_10 | VAR_11);
  if (VAR_18 >= 0)
  {
   (void) FUNC_8(VAR_18);
   FUNC_2(VAR_18);
  }
  VAR_13 = 1;
 }

 VAR_12 = 0;
 VAR_0 = 0;
 if (VAR_14)
 {
  VAR_12 = 1;
  VAR_0 = 1;
 }
 else if (VAR_13)
 {
  VAR_12 = 0;
  VAR_0 = 1;
 }
 else
  return;





 if (VAR_12 && !VAR_3)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("standby mode is not supported by single-user servers")));
}
