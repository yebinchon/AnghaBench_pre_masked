
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int trace_len; int trace; int checksum; int flags; int count; int min_count; int jiffies; int pid; int comm; int size; int pointer; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct kmemleak_object *VAR_0)
{
 FUNC_0("Object 0x%08lx (size %zu):\n",
    VAR_0->pointer, VAR_0->size);
 FUNC_0("  comm \"%s\", pid %d, jiffies %lu\n",
    VAR_0->comm, VAR_0->pid, VAR_0->jiffies);
 FUNC_0("  min_count = %d\n", VAR_0->min_count);
 FUNC_0("  count = %d\n", VAR_0->count);
 FUNC_0("  flags = 0x%x\n", VAR_0->flags);
 FUNC_0("  checksum = %u\n", VAR_0->checksum);
 FUNC_0("  backtrace:\n");
 FUNC_1(VAR_0->trace, VAR_0->trace_len, 4);
}
