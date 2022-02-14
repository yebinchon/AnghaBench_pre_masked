
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WIRE_ORPC_EXTENT ;
struct TYPE_8__ {scalar_t__ MajorVersion; scalar_t__ MinorVersion; } ;
struct TYPE_10__ {int flags; TYPE_1__ version; int * extensions; } ;
struct TYPE_9__ {char* Buffer; int BufferLength; } ;
typedef TYPE_2__ RPC_MESSAGE ;
typedef int ORPC_EXTENT_ARRAY ;
typedef TYPE_3__ ORPCTHIS ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char const*,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_5(RPC_MESSAGE *VAR_12, ORPCTHIS *VAR_13,
    ORPC_EXTENT_ARRAY *VAR_14, WIRE_ORPC_EXTENT **VAR_15)
{
    const char *VAR_16 = (char *)VAR_12->Buffer + VAR_12->BufferLength;

    *VAR_15 = ((void*)0);

    if (VAR_12->BufferLength < FUNC_2(VAR_10, VAR_11) + sizeof(DWORD))
    {
        FUNC_0("invalid buffer length\n");
        return VAR_7;
    }

    FUNC_3(VAR_13, VAR_12->Buffer, FUNC_2(VAR_10, VAR_11));
    VAR_12->Buffer = (char *)VAR_12->Buffer + FUNC_2(VAR_10, VAR_11);

    if ((const char *)VAR_12->Buffer + sizeof(DWORD) > VAR_16)
        return VAR_7;

    if (*(DWORD *)VAR_12->Buffer)
        VAR_13->extensions = VAR_14;
    else
        VAR_13->extensions = ((void*)0);

    VAR_12->Buffer = (char *)VAR_12->Buffer + sizeof(DWORD);

    if (VAR_13->extensions)
    {
        HRESULT VAR_17 = FUNC_4(VAR_12, VAR_16, VAR_14,
                                                 VAR_15);
        if (FUNC_1(VAR_17))
            return VAR_17;
    }

    if ((VAR_13->version.MajorVersion != VAR_0) ||
        (VAR_13->version.MinorVersion > VAR_1))
    {
        FUNC_0("COM version {%d, %d} not supported\n",
            VAR_13->version.MajorVersion, VAR_13->version.MinorVersion);
        return VAR_8;
    }

    if (VAR_13->flags & ~(VAR_2|VAR_3|VAR_4|VAR_5|VAR_6))
    {
        FUNC_0("invalid flags 0x%x\n", VAR_13->flags & ~(VAR_2|VAR_3|VAR_4|VAR_5|VAR_6));
        return VAR_7;
    }

    return VAR_9;
}
