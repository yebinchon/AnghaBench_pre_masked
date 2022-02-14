
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threads {int lock; } ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 int FUNC_1 (int *) ;
 struct threads* FUNC_2 (struct machine*,int ) ;
 int FUNC_3 (int *) ;

struct thread *FUNC_4(struct machine *VAR_0, pid_t VAR_1,
           pid_t VAR_2)
{
 struct threads *VAR_3 = FUNC_2(VAR_0, VAR_2);
 struct thread *VAR_4;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_3->lock);
 return VAR_4;
}
