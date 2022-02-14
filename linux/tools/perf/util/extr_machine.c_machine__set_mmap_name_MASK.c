
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int * mmap_name; int pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int **,char*,int ) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 scalar_t__ FUNC_2 (struct machine*) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct machine *VAR_1)
{
 if (FUNC_2(VAR_1))
  VAR_1->mmap_name = FUNC_3("[kernel.kallsyms]");
 else if (FUNC_1(VAR_1))
  VAR_1->mmap_name = FUNC_3("[guest.kernel.kallsyms]");
 else if (FUNC_0(&VAR_1->mmap_name, "[guest.kernel.kallsyms.%d]",
     VAR_1->pid) < 0)
  VAR_1->mmap_name = ((void*)0);

 return VAR_1->mmap_name ? 0 : -VAR_0;
}
