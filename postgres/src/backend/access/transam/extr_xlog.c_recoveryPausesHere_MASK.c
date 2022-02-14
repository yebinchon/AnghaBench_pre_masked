
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (long) ;

__attribute__((used)) static void
FUNC_6(void)
{

 if (!VAR_1)
  return;

 FUNC_2(VAR_0,
   (FUNC_4("recovery has paused"),
    FUNC_3("Execute pg_wal_replay_resume() to continue.")));

 while (FUNC_1())
 {
  FUNC_5(1000000L);
  FUNC_0();
 }
}
