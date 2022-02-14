
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int refcnt; } ;


 int FUNC_0 (int *) ;

struct thread *FUNC_1(struct thread *VAR_0)
{
 if (VAR_0)
  FUNC_0(&VAR_0->refcnt);
 return VAR_0;
}
