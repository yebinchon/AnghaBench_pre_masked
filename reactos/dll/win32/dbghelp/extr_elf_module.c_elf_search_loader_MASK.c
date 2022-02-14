
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct process {int handle; } ;
struct elf_info {int dummy; } ;
typedef int pbi ;
typedef int base ;
typedef int ULONG_PTR ;
struct TYPE_5__ {TYPE_1__* PebBaseAddress; } ;
struct TYPE_4__ {int * Reserved; } ;
typedef TYPE_2__ PROCESS_BASIC_INFORMATION ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_2__*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int,int *) ;
 int FUNC_2 (struct process*,int ,int ,int ,struct elf_info*) ;
 int FUNC_3 () ;

__attribute__((used)) static BOOL FUNC_4(struct process* VAR_1, struct elf_info* VAR_2)
{
    PROCESS_BASIC_INFORMATION VAR_3;
    ULONG_PTR VAR_4 = 0;

    if (!FUNC_0( VAR_1->handle, VAR_0, &VAR_3, sizeof(VAR_3), ((void*)0) ))
        FUNC_1( VAR_1->handle, &VAR_3.PebBaseAddress->Reserved[0], &VAR_4, sizeof(VAR_4), ((void*)0) );

    return FUNC_2(VAR_1, FUNC_3(), VAR_4, 0, VAR_2);
}
