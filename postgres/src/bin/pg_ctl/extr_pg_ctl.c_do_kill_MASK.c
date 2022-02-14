
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ pgpid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(pgpid_t VAR_3)
{
 if (FUNC_2((pid_t) VAR_3, VAR_2) != 0)
 {
  FUNC_4(FUNC_0("%s: could not send signal %d (PID: %ld): %s\n"),
      VAR_1, VAR_2, VAR_3, FUNC_3(VAR_0));
  FUNC_1(1);
 }
}
