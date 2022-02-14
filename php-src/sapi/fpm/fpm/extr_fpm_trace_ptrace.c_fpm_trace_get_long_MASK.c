
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_io_desc {void* piod_offs; void* piod_addr; int piod_len; int piod_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,void*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(long VAR_6, long *VAR_7)
{
 VAR_4 = 0;
 *VAR_7 = FUNC_0(VAR_1, VAR_5, (void *) VAR_6, 0);
 if (VAR_4) {
  FUNC_1(VAR_3, "failed to ptrace(PEEKDATA) pid %d", VAR_5);
  return -1;
 }

 return 0;
}
