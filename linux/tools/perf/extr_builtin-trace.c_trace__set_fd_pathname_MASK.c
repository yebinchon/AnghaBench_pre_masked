
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_trace {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_rdev; } ;
struct file {scalar_t__ pathname; int dev_maj; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 scalar_t__ FUNC_2 (char const*) ;
 struct thread_trace* FUNC_3 (struct thread*) ;
 struct file* FUNC_4 (struct thread_trace*,int) ;

__attribute__((used)) static int FUNC_5(struct thread *VAR_0, int VAR_1, const char *VAR_2)
{
 struct thread_trace *VAR_3 = FUNC_3(VAR_0);
 struct file *VAR_4 = FUNC_4(VAR_3, VAR_1);

 if (VAR_4 != ((void*)0)) {
  struct stat VAR_5;
  if (FUNC_1(VAR_2, &VAR_5) == 0)
   VAR_4->dev_maj = FUNC_0(VAR_5.st_rdev);
  VAR_4->pathname = FUNC_2(VAR_2);
  if (VAR_4->pathname)
   return 0;
 }

 return -1;
}
