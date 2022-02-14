
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ pid_; scalar_t__ tid; } ;



__attribute__((used)) static inline bool FUNC_0(struct thread *VAR_0)
{
 return !(VAR_0->tid || VAR_0->pid_);
}
