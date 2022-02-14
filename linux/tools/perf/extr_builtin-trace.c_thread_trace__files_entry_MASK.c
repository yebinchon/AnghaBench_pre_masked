
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; struct file* table; } ;
struct thread_trace {TYPE_1__ files; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int ,int) ;
 struct file* FUNC_1 (struct file*,int) ;

__attribute__((used)) static struct file *FUNC_2(struct thread_trace *VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  return ((void*)0);

 if (VAR_1 > VAR_0->files.max) {
  struct file *VAR_2 = FUNC_1(VAR_0->files.table, (VAR_1 + 1) * sizeof(struct file));

  if (VAR_2 == ((void*)0))
   return ((void*)0);

  if (VAR_0->files.max != -1) {
   FUNC_0(VAR_2 + VAR_0->files.max + 1, 0,
          (VAR_1 - VAR_0->files.max) * sizeof(struct file));
  } else {
   FUNC_0(VAR_2, 0, (VAR_1 + 1) * sizeof(struct file));
  }

  VAR_0->files.table = VAR_2;
  VAR_0->files.max = VAR_1;
 }

 return VAR_0->files.table + VAR_1;
}
