
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_queue {struct auxtrace_buffer* old_buffer; struct auxtrace_buffer* buffer; } ;
struct auxtrace_buffer {int dummy; } ;


 int FUNC_0 (struct auxtrace_buffer*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_queue *VAR_0,
        struct auxtrace_buffer *VAR_1)
{
 if (!VAR_1 || VAR_1 == VAR_0->buffer || VAR_1 == VAR_0->old_buffer)
  return;

 FUNC_0(VAR_1);
}
