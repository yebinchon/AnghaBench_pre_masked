
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int tid; int pid_; } ;
struct stat {int st_size; } ;
typedef int pathname ;
typedef int off_t ;
typedef int linkname ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int ,int,...) ;
 int FUNC_3 (struct thread*,int,char*) ;

__attribute__((used)) static int FUNC_4(struct thread *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0], VAR_4[VAR_0];
 struct stat VAR_5;
 int VAR_6;

 if (VAR_1->pid_ == VAR_1->tid) {
  FUNC_2(VAR_3, sizeof(VAR_3),
     "/proc/%d/fd/%d", VAR_1->pid_, VAR_2);
 } else {
  FUNC_2(VAR_3, sizeof(VAR_3),
     "/proc/%d/task/%d/fd/%d", VAR_1->pid_, VAR_1->tid, VAR_2);
 }

 if (FUNC_0(VAR_3, &VAR_5) < 0 || VAR_5.st_size + 1 > (off_t)sizeof(VAR_4))
  return -1;

 VAR_6 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));

 if (VAR_6 < 0 || VAR_6 > VAR_5.st_size)
  return -1;

 VAR_4[VAR_6] = '\0';
 return FUNC_3(VAR_1, VAR_2, VAR_4);
}
