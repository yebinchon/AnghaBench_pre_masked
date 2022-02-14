
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int pc_offset; int pc_size; } ;


 int FUNC_0 (struct tep_handle*,void*,int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct tep_handle *VAR_0, void *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1,
         &VAR_0->pc_size, &VAR_0->pc_offset,
         "common_preempt_count");
}
