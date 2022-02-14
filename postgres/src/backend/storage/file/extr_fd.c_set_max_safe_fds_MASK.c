
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int*,int*) ;
 int FUNC_2 (int ,char*,scalar_t__,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_7(void)
{
 int VAR_7;
 int VAR_8;
 FUNC_1(VAR_5,
      &VAR_7, &VAR_8);

 VAR_6 = FUNC_0(VAR_7, VAR_5 - VAR_8);




 VAR_6 -= VAR_4;




 if (VAR_6 < VAR_3)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("insufficient file descriptors available to start server process"),
     FUNC_5("System allows %d, we need at least %d.",
         VAR_6 + VAR_4,
         VAR_3 + VAR_4)));

 FUNC_2(VAR_0, "max_safe_fds = %d, usable_fds = %d, already_open = %d",
   VAR_6, VAR_7, VAR_8);
}
