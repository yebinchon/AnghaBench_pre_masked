
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* ProcFormatString; int* FormatStringOffset; } ;
struct TYPE_10__ {int Oi_flags; } ;
struct TYPE_9__ {int Size; } ;
struct TYPE_7__ {scalar_t__ HasExtensions; } ;
struct TYPE_8__ {unsigned int number_of_params; TYPE_1__ Oi2Flags; } ;
typedef TYPE_2__ NDR_PROC_PARTIAL_OIF_HEADER ;
typedef int NDR_PROC_HEADER_RPC ;
typedef TYPE_3__ NDR_PROC_HEADER_EXTS ;
typedef TYPE_4__ NDR_PROC_HEADER ;
typedef int NDR_PARAM_OIF ;
typedef TYPE_5__ MIDL_STUBLESS_PROXY_INFO ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 () ;

__attribute__((used)) static const NDR_PARAM_OIF *FUNC_1( unsigned int *VAR_1 )
{
    const MIDL_STUBLESS_PROXY_INFO *VAR_2 = FUNC_0();
    const unsigned char *VAR_3 = VAR_2->ProcFormatString + VAR_2->FormatStringOffset[3];
    const NDR_PROC_HEADER *VAR_4 = (const NDR_PROC_HEADER *)VAR_3;
    const NDR_PROC_PARTIAL_OIF_HEADER *VAR_5;

    if (VAR_4->Oi_flags & VAR_0)
        VAR_3 += sizeof(NDR_PROC_HEADER_RPC);
    else
        VAR_3 += sizeof(NDR_PROC_HEADER);

    VAR_5 = (const NDR_PROC_PARTIAL_OIF_HEADER *)VAR_3;
    VAR_3 += sizeof(*VAR_5);
    if (VAR_5->Oi2Flags.HasExtensions)
    {
        const NDR_PROC_HEADER_EXTS *VAR_6 = (const NDR_PROC_HEADER_EXTS *)VAR_3;
        VAR_3 += VAR_6->Size;
    }
    *VAR_1 = VAR_5->number_of_params;
    return (const NDR_PARAM_OIF *)VAR_3;
}
