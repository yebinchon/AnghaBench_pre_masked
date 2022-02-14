
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WIRE_ORPC_EXTENT ;
struct TYPE_8__ {int flags; int * extensions; } ;
struct TYPE_7__ {char* Buffer; int BufferLength; } ;
typedef TYPE_1__ RPC_MESSAGE ;
typedef int ORPC_EXTENT_ARRAY ;
typedef TYPE_2__ ORPCTHAT ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char const*,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_5(RPC_MESSAGE *VAR_9, ORPCTHAT *VAR_10,
                                  ORPC_EXTENT_ARRAY *VAR_11, WIRE_ORPC_EXTENT **VAR_12)
{
    const char *VAR_13 = (char *)VAR_9->Buffer + VAR_9->BufferLength;

    *VAR_12 = ((void*)0);

    if (VAR_9->BufferLength < FUNC_2(VAR_7, VAR_8) + sizeof(DWORD))
    {
        FUNC_0("invalid buffer length\n");
        return VAR_5;
    }

    FUNC_3(VAR_10, VAR_9->Buffer, FUNC_2(VAR_7, VAR_8));
    VAR_9->Buffer = (char *)VAR_9->Buffer + FUNC_2(VAR_7, VAR_8);

    if ((const char *)VAR_9->Buffer + sizeof(DWORD) > VAR_13)
        return VAR_5;

    if (*(DWORD *)VAR_9->Buffer)
        VAR_10->extensions = VAR_11;
    else
        VAR_10->extensions = ((void*)0);

    VAR_9->Buffer = (char *)VAR_9->Buffer + sizeof(DWORD);

    if (VAR_10->extensions)
    {
        HRESULT VAR_14 = FUNC_4(VAR_9, VAR_13, VAR_11,
                                                 VAR_12);
        if (FUNC_1(VAR_14))
            return VAR_14;
    }

    if (VAR_10->flags & ~(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4))
    {
        FUNC_0("invalid flags 0x%x\n", VAR_10->flags & ~(VAR_0|VAR_1|VAR_2|VAR_3|VAR_4));
        return VAR_5;
    }

    return VAR_6;
}
