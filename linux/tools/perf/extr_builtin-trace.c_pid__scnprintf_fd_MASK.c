
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int host; } ;
struct thread {int dummy; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (int ,int ,int ) ;
 size_t FUNC_1 (char*,size_t,char*,...) ;
 char* FUNC_2 (struct thread*,int,struct trace*) ;
 int FUNC_3 (struct thread*) ;

size_t FUNC_4(struct trace *VAR_0, pid_t VAR_1, int VAR_2, char *VAR_3, size_t VAR_4)
{
        size_t VAR_5 = FUNC_1(VAR_3, VAR_4, "%d", VAR_2);
 struct thread *VAR_6 = FUNC_0(VAR_0->host, VAR_1, VAR_1);

 if (VAR_6) {
  const char *VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_0);

  if (VAR_7)
   VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_4 - VAR_5, "<%s>", VAR_7);

  FUNC_3(VAR_6);
 }

        return VAR_5;
}
