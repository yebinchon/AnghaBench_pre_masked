
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgpid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_5)
{
 if (VAR_3 != -1)
 {
  if (FUNC_1(VAR_3, VAR_0) != 0)
   FUNC_5(FUNC_0("%s: could not send stop signal (PID: %ld): %s\n"),
       VAR_4, (pgpid_t) VAR_3, FUNC_4(VAR_2));
 }





 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0);
}
