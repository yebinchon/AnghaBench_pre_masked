
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cpu_stack_walk {int is32; } ;
struct TYPE_9__ {scalar_t__ Mode; scalar_t__ Offset; } ;
struct TYPE_8__ {scalar_t__ Rsp; scalar_t__ Rip; scalar_t__ Rbp; } ;
struct TYPE_7__ {int FuncTableEntry; TYPE_5__ AddrStack; TYPE_5__ AddrReturn; TYPE_5__ AddrFrame; TYPE_5__ AddrPC; void* Virtual; void* Far; int Params; int AddrBStore; } ;
typedef TYPE_1__* LPSTACKFRAME64 ;
typedef TYPE_2__ CONTEXT ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,char*,int ,...) ;
 void* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct cpu_stack_walk*,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static BOOL FUNC_8(struct cpu_stack_walk* VAR_8, LPSTACKFRAME64 VAR_9, CONTEXT* VAR_10)
{
    unsigned VAR_11 = VAR_3 <= 1 ? 0 : 1;


    if (VAR_4 >= VAR_6) return VAR_1;
    FUNC_3(!VAR_8->is32);

    FUNC_1("Enter: PC=%s Frame=%s Return=%s Stack=%s Mode=%s Count=%s\n",
          FUNC_6(&VAR_9->AddrPC),
          FUNC_6(&VAR_9->AddrFrame),
          FUNC_6(&VAR_9->AddrReturn),
          FUNC_6(&VAR_9->AddrStack),
          VAR_4 == VAR_7 ? "start" : "64bit",
          FUNC_7(VAR_3));

    if (VAR_4 == VAR_7)
    {
        if ((VAR_9->AddrPC.Mode == VAR_0) &&
            (VAR_9->AddrFrame.Mode != VAR_0))
        {
            FUNC_2("Bad AddrPC.Mode / AddrFrame.Mode combination\n");
            goto done_err;
        }


        VAR_4 = VAR_5;
        VAR_9->AddrReturn.Mode = VAR_9->AddrStack.Mode = VAR_0;



        FUNC_5(&VAR_9->AddrBStore, 0, sizeof(VAR_9->AddrBStore));
    }
    else
    {
        if (VAR_10->Rsp != VAR_9->AddrStack.Offset) FUNC_0("inconsistent Stack Pointer\n");
        if (VAR_10->Rip != VAR_9->AddrPC.Offset) FUNC_0("inconsistent Instruction Pointer\n");

        if (VAR_9->AddrReturn.Offset == 0) goto done_err;
        if (!FUNC_4(VAR_8, VAR_10, VAR_9->AddrPC.Offset - VAR_11, &VAR_9->FuncTableEntry))
            goto done_err;
        VAR_11 = 1;
    }

    FUNC_5(&VAR_9->Params, 0, sizeof(VAR_9->Params));


    VAR_9->AddrStack.Offset = VAR_10->Rsp;
    VAR_9->AddrFrame.Offset = VAR_10->Rbp;
    VAR_9->AddrPC.Offset = VAR_10->Rip;
    if (1)
    {
        CONTEXT VAR_12 = *VAR_10;

        if (!FUNC_4(VAR_8, &VAR_12, VAR_9->AddrPC.Offset - VAR_11, ((void*)0)))
            goto done_err;
        VAR_9->AddrReturn.Mode = VAR_0;
        VAR_9->AddrReturn.Offset = VAR_12.Rip;
    }

    VAR_9->Far = VAR_2;
    VAR_9->Virtual = VAR_2;
    VAR_3++;

    FUNC_1("Leave: PC=%s Frame=%s Return=%s Stack=%s Mode=%s Count=%s FuncTable=%p\n",
          FUNC_6(&VAR_9->AddrPC),
          FUNC_6(&VAR_9->AddrFrame),
          FUNC_6(&VAR_9->AddrReturn),
          FUNC_6(&VAR_9->AddrStack),
          VAR_4 == VAR_7 ? "start" : "64bit",
          FUNC_7(VAR_3),
          VAR_9->FuncTableEntry);

    return VAR_2;
done_err:
    VAR_4 = VAR_6;
    return VAR_1;
}
