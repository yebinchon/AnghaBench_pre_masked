
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ tid; scalar_t__ pid_; } ;
typedef int str ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,...) ;
 char* FUNC_1 (struct thread*) ;

__attribute__((used)) static char *FUNC_2(struct thread *VAR_1)
{
 static char VAR_2[32];
 const char *VAR_3 = FUNC_1(VAR_1);
 pid_t VAR_4 = VAR_1->tid;
 pid_t VAR_5 = VAR_1->pid_;
 int VAR_6;

 if (VAR_5 == 0)
  VAR_6 = FUNC_0(VAR_2, sizeof(VAR_2), "%s", VAR_3);

 else if (VAR_4 != VAR_5)
  VAR_6 = FUNC_0(VAR_2, sizeof(VAR_2), "%s[%d/%d]", VAR_3, VAR_4, VAR_5);

 else
  VAR_6 = FUNC_0(VAR_2, sizeof(VAR_2), "%s[%d]", VAR_3, VAR_4);

 if (VAR_6 > VAR_0)
  VAR_0 = VAR_6;

 return VAR_2;
}
