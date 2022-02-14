
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ dead; } ;


 int FUNC_0 (struct thread*,void*) ;

__attribute__((used)) static int FUNC_1(struct thread *VAR_0, void *VAR_1)
{
 if (VAR_0->dead)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
