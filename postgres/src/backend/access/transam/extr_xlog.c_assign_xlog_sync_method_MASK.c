
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_5 ;

void
FUNC_9(int VAR_6, void *VAR_7)
{
 if (VAR_5 != VAR_6)
 {






  if (VAR_3 >= 0)
  {
   FUNC_8(VAR_2);
   if (FUNC_6(VAR_3) != 0)
    FUNC_2(VAR_0,
      (FUNC_3(),
       FUNC_4("could not fsync file \"%s\": %m",
        FUNC_1(VAR_1, VAR_4))));
   FUNC_7();
   if (FUNC_5(VAR_5) != FUNC_5(VAR_6))
    FUNC_0();
  }
 }
}
