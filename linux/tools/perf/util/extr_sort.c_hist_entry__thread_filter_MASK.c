
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct hist_entry {struct thread const* thread; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hist_entry *VAR_1, int VAR_2, const void *VAR_3)
{
 const struct thread *VAR_4 = VAR_3;

 if (VAR_2 != VAR_0)
  return -1;

 return VAR_4 && VAR_1->thread != VAR_4;
}
