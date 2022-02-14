
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int VAR_10 ;
 int FUNC_13 (int*) ;

__attribute__((used)) static void FUNC_14(int VAR_11)
{
 int VAR_12;
 pid_t VAR_13;

 FUNC_6("cannot get non-existent label");
 FUNC_4(FUNC_7(VAR_11, 1, VAR_3, 0));

 FUNC_6("cannot put non-existent label");
 FUNC_4(FUNC_8(VAR_11, 1));

 FUNC_6("cannot create label greater than 20 bits");
 FUNC_4(FUNC_7(VAR_11, 0x1FFFFF, VAR_3,
      VAR_1));

 FUNC_6("create a new label (FL_F_CREATE)");
 FUNC_5(FUNC_7(VAR_11, 1, VAR_3, VAR_1));
 FUNC_6("can get the label (without FL_F_CREATE)");
 FUNC_5(FUNC_7(VAR_11, 1, VAR_3, 0));
 FUNC_6("can get it again with create flag set, too");
 FUNC_5(FUNC_7(VAR_11, 1, VAR_3, VAR_1));
 FUNC_6("cannot get it again with the exclusive (FL_FL_EXCL) flag");
 FUNC_4(FUNC_7(VAR_11, 1, VAR_3,
      VAR_1 | VAR_2));
 FUNC_6("can now put exactly three references");
 FUNC_5(FUNC_8(VAR_11, 1));
 FUNC_5(FUNC_8(VAR_11, 1));
 FUNC_5(FUNC_8(VAR_11, 1));
 FUNC_4(FUNC_8(VAR_11, 1));

 FUNC_6("create a new exclusive label (FL_S_EXCL)");
 FUNC_5(FUNC_7(VAR_11, 2, VAR_4, VAR_1));
 FUNC_6("cannot get it again in non-exclusive mode");
 FUNC_4(FUNC_7(VAR_11, 2, VAR_3, VAR_1));
 FUNC_6("cannot get it again in exclusive mode either");
 FUNC_4(FUNC_7(VAR_11, 2, VAR_4, VAR_1));
 FUNC_5(FUNC_8(VAR_11, 2));

 if (VAR_8) {
  FUNC_6("cannot reuse the label, due to linger");
  FUNC_4(FUNC_7(VAR_11, 2, VAR_3,
       VAR_1));
  FUNC_6("after sleep, can reuse");
  FUNC_12(VAR_0 * 2 + 1);
  FUNC_5(FUNC_7(VAR_11, 2, VAR_3,
       VAR_1));
 }

 FUNC_6("create a new user-private label (FL_S_USER)");
 FUNC_5(FUNC_7(VAR_11, 3, VAR_6, VAR_1));
 FUNC_6("cannot get it again in non-exclusive mode");
 FUNC_4(FUNC_7(VAR_11, 3, VAR_3, 0));
 FUNC_6("cannot get it again in exclusive mode");
 FUNC_4(FUNC_7(VAR_11, 3, VAR_4, 0));
 FUNC_6("can get it again in user mode");
 FUNC_5(FUNC_7(VAR_11, 3, VAR_6, 0));
 FUNC_6("child process can get it too, but not after setuid(nobody)");
 VAR_13 = FUNC_9();
 if (VAR_13 == -1)
  FUNC_2(1, VAR_9, "fork");
 if (!VAR_13) {
  FUNC_5(FUNC_7(VAR_11, 3, VAR_6, 0));
  if (FUNC_11(VAR_7))
   FUNC_10(VAR_10, "[INFO] skip setuid child test\n");
  else
   FUNC_4(FUNC_7(VAR_11, 3, VAR_6, 0));
  FUNC_3(0);
 }
 if (FUNC_13(&VAR_12) == -1)
  FUNC_2(1, VAR_9, "wait");
 if (!FUNC_1(VAR_12) || FUNC_0(VAR_12) != 0)
  FUNC_2(1, VAR_9, "wait: unexpected child result");

 FUNC_6("create a new process-private label (FL_S_PROCESS)");
 FUNC_5(FUNC_7(VAR_11, 4, VAR_5, VAR_1));
 FUNC_6("can get it again");
 FUNC_5(FUNC_7(VAR_11, 4, VAR_5, 0));
 FUNC_6("child process cannot can get it");
 VAR_13 = FUNC_9();
 if (VAR_13 == -1)
  FUNC_2(1, VAR_9, "fork");
 if (!VAR_13) {
  FUNC_4(FUNC_7(VAR_11, 4, VAR_5, 0));
  FUNC_3(0);
 }
 if (FUNC_13(&VAR_12) == -1)
  FUNC_2(1, VAR_9, "wait");
 if (!FUNC_1(VAR_12) || FUNC_0(VAR_12) != 0)
  FUNC_2(1, VAR_9, "wait: unexpected child result");
}
