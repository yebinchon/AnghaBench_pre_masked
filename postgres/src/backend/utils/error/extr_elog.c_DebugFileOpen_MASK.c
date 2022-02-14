
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_7(void)
{
 int VAR_8,
    VAR_9;

 if (VAR_5[0])
 {





  if ((VAR_8 = FUNC_6(VAR_5, VAR_3 | VAR_2 | VAR_4,
        0666)) < 0)
   FUNC_1(VAR_0,
     (FUNC_2(),
      FUNC_3("could not open file \"%s\": %m", VAR_5)));
  VAR_9 = FUNC_5(VAR_8);
  FUNC_0(VAR_8);




  if (!FUNC_4(VAR_5, "a", VAR_6))
   FUNC_1(VAR_0,
     (FUNC_2(),
      FUNC_3("could not reopen file \"%s\" as stderr: %m",
       VAR_5)));







  if (VAR_9 && VAR_1)
   if (!FUNC_4(VAR_5, "a", VAR_7))
    FUNC_1(VAR_0,
      (FUNC_2(),
       FUNC_3("could not reopen file \"%s\" as stdout: %m",
        VAR_5)));
 }
}
