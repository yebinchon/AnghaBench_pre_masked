
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int * hActCtx; } ;
typedef TYPE_1__* PACTCTX_SECTION_KEYED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef int GUID ;
typedef int DWORD ;
typedef int ACTIVATION_CONTEXT ;






 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int const*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int const*,TYPE_1__*) ;

__attribute__((used)) static NTSTATUS FUNC_6(ACTIVATION_CONTEXT* VAR_3, ULONG VAR_4,
                          const GUID *VAR_5, DWORD VAR_6, PACTCTX_SECTION_KEYED_DATA VAR_7)
{
    NTSTATUS VAR_8;

    switch (VAR_4)
    {
    case 128:
        VAR_8 = FUNC_5(VAR_3, VAR_5, VAR_7);
        break;
    case 129:
        VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_7);
        break;
    case 130:
        VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_7);
        break;
    case 131:
        VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_7);
        break;
    default:
        FUNC_0("Unknown section_kind %x\n", VAR_4);
        return VAR_2;
    }

    if (VAR_8 != VAR_1) return VAR_8;

    if (VAR_6 & VAR_0)
    {
        FUNC_1(VAR_3);
        VAR_7->hActCtx = VAR_3;
    }
    return VAR_1;
}
