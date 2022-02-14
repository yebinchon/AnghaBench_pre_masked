
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_9__ {TYPE_2__* ActivationContextStackPointer; } ;
struct TYPE_8__ {scalar_t__ DllBase; scalar_t__ EntryPointActivationContext; } ;
struct TYPE_7__ {TYPE_1__* ActiveFrame; } ;
struct TYPE_6__ {scalar_t__ ActivationContext; } ;
typedef int NTSTATUS ;
typedef TYPE_3__ LDR_DATA_TABLE_ENTRY ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_3__**) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static NTSTATUS FUNC_4( HANDLE *VAR_8, DWORD VAR_9, ULONG VAR_10 )
{
    NTSTATUS VAR_11 = VAR_6;

    if (VAR_9 & VAR_3)
    {
        if (*VAR_8) return VAR_5;

        if (FUNC_3()->ActivationContextStackPointer->ActiveFrame)
            *VAR_8 = FUNC_3()->ActivationContextStackPointer->ActiveFrame->ActivationContext;
    }
    else if (VAR_9 & (VAR_1 | VAR_2))
    {
        ULONG_PTR VAR_12;
        LDR_DATA_TABLE_ENTRY *VAR_13;

        if (!*VAR_8) return VAR_5;

        FUNC_1( 0, ((void*)0), &VAR_12 );
        if (!FUNC_0( *VAR_8, &VAR_13 ))
        {
            if ((VAR_9 & VAR_2) && *VAR_8 != VAR_13->DllBase)
                VAR_11 = VAR_4;
            else
                *VAR_8 = VAR_13->EntryPointActivationContext;
        }
        else VAR_11 = VAR_4;
        FUNC_2( 0, VAR_12 );
    }
    else if (!*VAR_8 && (VAR_10 != VAR_0))
        *VAR_8 = VAR_7;

    return VAR_11;
}
