
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct use_connection_context {int flags; size_t (* pre_set_accessname ) (struct use_connection_context*,char*) ;TYPE_2__* resource; } ;
typedef int empty ;
struct TYPE_6__ {int dwNetType; scalar_t__ name; } ;
typedef TYPE_1__ WNetProvider ;
typedef char WCHAR ;
struct TYPE_8__ {size_t numProviders; TYPE_1__* table; } ;
struct TYPE_7__ {char* lpLocalName; scalar_t__ dwType; scalar_t__ lpRemoteName; scalar_t__ lpProvider; } ;
typedef TYPE_2__ NETRESOURCEW ;
typedef int HKEY ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int const*,size_t) ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t FUNC_5 (scalar_t__) ;
 int VAR_20 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_21 ;
 TYPE_5__* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t FUNC_7 (struct use_connection_context*,char*) ;
 int VAR_25 ;
 size_t FUNC_8 (struct use_connection_context*,TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static DWORD FUNC_9( struct use_connection_context *VAR_26 )
{
    WNetProvider *VAR_27 = ((void*)0);
    DWORD VAR_28, VAR_29 = VAR_18;
    BOOL VAR_30 = VAR_9;
    WCHAR VAR_31[3] = {'Z', ':', 0};
    NETRESOURCEW VAR_32;

    if (!VAR_22 || VAR_22->numProviders == 0)
        return VAR_18;

    if (!VAR_26->resource)
        return VAR_7;
    VAR_32 = *VAR_26->resource;

    if (!VAR_32.lpLocalName && (VAR_26->flags & VAR_2))
    {
        if (VAR_32.dwType != VAR_14 && VAR_32.dwType != VAR_15)
            return VAR_4;

        if (VAR_32.dwType == VAR_15)
        {
            FUNC_0("Local device selection is not implemented for printers.\n");
            return VAR_18;
        }

        VAR_30 = VAR_16;
        VAR_32.lpLocalName = VAR_31;
    }

    if (VAR_26->flags & VAR_1)
        return VAR_5;

    if ((VAR_29 = VAR_26->pre_set_accessname(VAR_26, VAR_32.lpLocalName)))
        return VAR_29;

    if (VAR_32.lpProvider)
    {
        VAR_28 = FUNC_5(VAR_32.lpProvider);
        if (VAR_28 == VAR_0)
            return VAR_6;

        VAR_27 = &VAR_22->table[VAR_28];
        VAR_29 = FUNC_8(VAR_26, &VAR_32, VAR_27, VAR_30);
    }
    else
    {
        for (VAR_28 = 0; VAR_28 < VAR_22->numProviders; VAR_28++)
        {
            VAR_27 = &VAR_22->table[VAR_28];
            VAR_29 = FUNC_8(VAR_26, &VAR_32, VAR_27, VAR_30);
            if (VAR_29 == VAR_19 || VAR_29 == VAR_17)
                break;
        }
    }

    if (VAR_29 == VAR_19 && VAR_26->flags & VAR_3)
    {
        HKEY VAR_33;

        if (VAR_32.dwType == VAR_15)
        {
            FUNC_0("Persistent connection are not supported for printers\n");
            return VAR_29;
        }

        if (FUNC_3(VAR_10, &VAR_33) == VAR_8)
        {
            HKEY VAR_34;
            WCHAR VAR_35[10] = {'N', 'e', 't', 'w', 'o', 'r', 'k', '\\', VAR_32.lpLocalName[0], 0};

            if (FUNC_2(VAR_33, VAR_35, 0, ((void*)0), VAR_12,
                                VAR_10, ((void*)0), &VAR_34, ((void*)0)) == VAR_8)
            {
                DWORD VAR_36 = VAR_14;
                DWORD VAR_37 = (FUNC_6(VAR_27->name) + 1) * sizeof(WCHAR);
                static const WCHAR VAR_38[1] = {0};

                FUNC_4(VAR_34, VAR_20, 0, VAR_11, (const BYTE *)&VAR_36, sizeof(DWORD));
                FUNC_4(VAR_34, VAR_21, 0, VAR_13, (const BYTE *)VAR_27->name, VAR_37);
                FUNC_4(VAR_34, VAR_23, 0, VAR_11, (const BYTE *)&VAR_27->dwNetType, sizeof(DWORD));
                VAR_37 = (FUNC_6(VAR_32.lpRemoteName) + 1) * sizeof(WCHAR);
                FUNC_4(VAR_34, VAR_24, 0, VAR_13, (const BYTE *)VAR_32.lpRemoteName, VAR_37);
                VAR_37 = sizeof(VAR_38);
                FUNC_4(VAR_34, VAR_25, 0, VAR_13, (const BYTE *)VAR_38, VAR_37);
                FUNC_1(VAR_34);
            }

            FUNC_1(VAR_33);
        }
    }

    return VAR_29;
}
