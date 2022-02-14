
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_subsystem_dir {scalar_t__ ref_count; int subsystem; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct trace_subsystem_dir *VAR_0)
{
 FUNC_0(VAR_0->ref_count == 0);
 VAR_0->ref_count++;
 FUNC_1(VAR_0->subsystem);
}
