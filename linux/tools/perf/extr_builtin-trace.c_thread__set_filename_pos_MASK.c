
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ptr; char const* entry_str_pos; } ;
struct thread_trace {int entry_str; TYPE_1__ filename; } ;
struct thread {int dummy; } ;


 struct thread_trace* FUNC_0 (struct thread*) ;

__attribute__((used)) static void FUNC_1(struct thread *VAR_0, const char *VAR_1,
         unsigned long VAR_2)
{
 struct thread_trace *VAR_3 = FUNC_0(VAR_0);

 VAR_3->filename.ptr = VAR_2;
 VAR_3->filename.entry_str_pos = VAR_1 - VAR_3->entry_str;
}
