
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_stack_walk {int dummy; } ;
struct TYPE_3__ {int Rsp; int Rip; } ;
typedef int DWORD64 ;
typedef TYPE_1__ CONTEXT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct cpu_stack_walk*,int,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static BOOL FUNC_3(struct cpu_stack_walk* VAR_2, CONTEXT* VAR_3)
{
    if (!FUNC_1(VAR_2, VAR_3->Rsp, &VAR_3->Rip, sizeof(DWORD64)))
    {
        FUNC_0("Cannot read new frame offset %s\n", FUNC_2(VAR_3->Rsp));
        return VAR_0;
    }
    VAR_3->Rsp += sizeof(DWORD64);
    return VAR_1;
}
