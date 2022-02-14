
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synthesize_threads_arg {int num; int start; int dirent; int mmap_data; int machine; int process; int tool; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 struct synthesize_threads_arg *VAR_1 = VAR_0;

 FUNC_0(VAR_1->tool, VAR_1->process,
      VAR_1->machine, VAR_1->mmap_data,
      VAR_1->dirent,
      VAR_1->start, VAR_1->num);
 return ((void*)0);
}
