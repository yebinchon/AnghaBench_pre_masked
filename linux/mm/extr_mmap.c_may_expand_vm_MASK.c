
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_flags_t ;
struct mm_struct {scalar_t__ total_vm; unsigned long data_vm; } ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,unsigned long,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;

bool FUNC_4(struct mm_struct *VAR_5, vm_flags_t VAR_6, unsigned long VAR_7)
{
 if (VAR_5->total_vm + VAR_7 > FUNC_2(VAR_1) >> VAR_0)
  return 0;

 if (FUNC_0(VAR_6) &&
     VAR_5->data_vm + VAR_7 > FUNC_2(VAR_2) >> VAR_0) {

  if (FUNC_2(VAR_2) == 0 &&
      VAR_5->data_vm + VAR_7 <= FUNC_3(VAR_2) >> VAR_0)
   return 1;

  FUNC_1("%s (%d): VmData %lu exceed data ulimit %lu. Update limits%s.\n",
        VAR_3->comm, VAR_3->pid,
        (VAR_5->data_vm + VAR_7) << VAR_0,
        FUNC_2(VAR_2),
        VAR_4 ? "" : " or use boot option ignore_rlimit_data");

  if (!VAR_4)
   return 0;
 }

 return 1;
}
