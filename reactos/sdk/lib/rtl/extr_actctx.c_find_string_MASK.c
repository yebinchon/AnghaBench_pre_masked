
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_6__ {int * hActCtx; } ;
typedef TYPE_1__* PACTCTX_SECTION_KEYED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD ;
typedef int ACTIVATION_CONTEXT ;







 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int const*,TYPE_1__*) ;

__attribute__((used)) static NTSTATUS FUNC_5(ACTIVATION_CONTEXT* VAR_4, ULONG VAR_5,
                            const UNICODE_STRING *VAR_6,
                            DWORD VAR_7, PACTCTX_SECTION_KEYED_DATA VAR_8)
{
    NTSTATUS VAR_9;

    switch (VAR_5)
    {
    case 132:
        FUNC_0("Unsupported yet section_kind %x\n", VAR_5);
        return VAR_2;
    case 130:
        VAR_9 = FUNC_2(VAR_4, VAR_6, VAR_8);
        break;
    case 128:
        VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_8);
        break;
    case 131:
        VAR_9 = FUNC_3(VAR_4, VAR_6, VAR_8);
        break;
    case 129:
        FUNC_0("Unsupported yet section_kind %x\n", VAR_5);
        return VAR_3;
    default:
        FUNC_0("Unknown section_kind %x\n", VAR_5);
        return VAR_3;
    }

    if (VAR_9 != VAR_1) return VAR_9;

    if (VAR_8 && (VAR_7 & VAR_0))
    {
        FUNC_1(VAR_4);
        VAR_8->hActCtx = VAR_4;
    }
    return VAR_1;
}
