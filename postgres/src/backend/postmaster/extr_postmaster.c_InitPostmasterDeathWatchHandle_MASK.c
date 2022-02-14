
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_10(void)
{
 FUNC_0(VAR_3 == VAR_7);
 if (FUNC_9(VAR_9) < 0)
  FUNC_4(VAR_1,
    (FUNC_5(),
     FUNC_7("could not create pipe to monitor postmaster death: %m")));





 if (FUNC_8(VAR_9[VAR_5], VAR_2, VAR_4) == -1)
  FUNC_4(VAR_1,
    (FUNC_6(),
     FUNC_7("could not set postmaster death monitoring pipe to nonblocking mode: %m")));
}
