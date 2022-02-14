
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int in; int out; int err; scalar_t__ pid; int * argv; scalar_t__ exec_cmd; int (* preexec_cb ) () ;scalar_t__* env; scalar_t__ dir; scalar_t__ stdout_to_stderr; scalar_t__ no_stdout; scalar_t__ no_stderr; scalar_t__ no_stdin; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int ,scalar_t__,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char* const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char*,int) ;
 scalar_t__ FUNC_14 (scalar_t__,char) ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__) ;

int FUNC_17(struct child_process *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10[2], VAR_11[2], VAR_12[2];
 char VAR_13[VAR_4];






 VAR_7 = !VAR_6->no_stdin && VAR_6->in < 0;
 if (VAR_7) {
  if (FUNC_11(VAR_10) < 0) {
   if (VAR_6->out > 0)
    FUNC_1(VAR_6->out);
   return -VAR_3;
  }
  VAR_6->in = VAR_10[1];
 }

 VAR_8 = !VAR_6->no_stdout
  && !VAR_6->stdout_to_stderr
  && VAR_6->out < 0;
 if (VAR_8) {
  if (FUNC_11(VAR_11) < 0) {
   if (VAR_7)
    FUNC_2(VAR_10);
   else if (VAR_6->in)
    FUNC_1(VAR_6->in);
   return -VAR_3;
  }
  VAR_6->out = VAR_11[0];
 }

 VAR_9 = !VAR_6->no_stderr && VAR_6->err < 0;
 if (VAR_9) {
  if (FUNC_11(VAR_12) < 0) {
   if (VAR_7)
    FUNC_2(VAR_10);
   else if (VAR_6->in)
    FUNC_1(VAR_6->in);
   if (VAR_8)
    FUNC_2(VAR_11);
   else if (VAR_6->out)
    FUNC_1(VAR_6->out);
   return -VAR_3;
  }
  VAR_6->err = VAR_12[0];
 }

 FUNC_9(((void*)0));
 VAR_6->pid = FUNC_10();
 if (!VAR_6->pid) {
  if (VAR_6->no_stdin)
   FUNC_5(0);
  else if (VAR_7) {
   FUNC_4(VAR_10[0], 0);
   FUNC_2(VAR_10);
  } else if (VAR_6->in) {
   FUNC_4(VAR_6->in, 0);
   FUNC_1(VAR_6->in);
  }

  if (VAR_6->no_stderr)
   FUNC_5(2);
  else if (VAR_9) {
   FUNC_4(VAR_12[1], 2);
   FUNC_2(VAR_12);
  }

  if (VAR_6->no_stdout)
   FUNC_5(1);
  else if (VAR_6->stdout_to_stderr)
   FUNC_4(2, 1);
  else if (VAR_8) {
   FUNC_4(VAR_11[1], 1);
   FUNC_2(VAR_11);
  } else if (VAR_6->out > 1) {
   FUNC_4(VAR_6->out, 1);
   FUNC_1(VAR_6->out);
  }

  if (VAR_6->dir && FUNC_0(VAR_6->dir))
   FUNC_3("exec %s: cd to %s failed (%s)", VAR_6->argv[0],
       VAR_6->dir, FUNC_13(VAR_5, VAR_13, sizeof(VAR_13)));
  if (VAR_6->env) {
   for (; *VAR_6->env; VAR_6->env++) {
    if (FUNC_14(*VAR_6->env, '='))
     FUNC_12((char*)*VAR_6->env);
    else
     FUNC_16(*VAR_6->env);
   }
  }
  if (VAR_6->preexec_cb)
   VAR_6->preexec_cb();
  if (VAR_6->exec_cmd) {
   FUNC_6(VAR_6->argv);
  } else {
   FUNC_7(VAR_6->argv[0], (char *const*) VAR_6->argv);
  }
  FUNC_8(127);
 }

 if (VAR_6->pid < 0) {
  int VAR_14 = VAR_5;
  if (VAR_7)
   FUNC_2(VAR_10);
  else if (VAR_6->in)
   FUNC_1(VAR_6->in);
  if (VAR_8)
   FUNC_2(VAR_11);
  else if (VAR_6->out)
   FUNC_1(VAR_6->out);
  if (VAR_9)
   FUNC_2(VAR_12);
  return VAR_14 == VAR_0 ?
   -VAR_1 :
   -VAR_2;
 }

 if (VAR_7)
  FUNC_1(VAR_10[0]);
 else if (VAR_6->in)
  FUNC_1(VAR_6->in);

 if (VAR_8)
  FUNC_1(VAR_11[1]);
 else if (VAR_6->out)
  FUNC_1(VAR_6->out);

 if (VAR_9)
  FUNC_1(VAR_12[1]);

 return 0;
}
