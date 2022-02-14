
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 FUNC_0(VAR_3 >= 0);
 if (FUNC_3(VAR_3) != 0)
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not close file \"%s\": %m",
      FUNC_1(VAR_2, VAR_4))));
 VAR_3 = -1;
}
