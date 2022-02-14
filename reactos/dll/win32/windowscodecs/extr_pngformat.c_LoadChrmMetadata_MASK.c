
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_18__ {char member_0; char member_1; char member_2; char member_3; char member_4; char member_5; char member_6; char member_7; char member_8; char member_9; char member_10; int member_11; } ;
typedef TYPE_2__ WCHAR ;
typedef int ULONG ;
struct TYPE_17__ {int ulVal; TYPE_3__* pwszVal; } ;
struct TYPE_16__ {TYPE_1__ u; int vt; } ;
struct TYPE_19__ {TYPE_12__ value; TYPE_12__ id; TYPE_12__ schema; } ;
typedef TYPE_3__ MetadataItem ;
typedef TYPE_3__* LPWSTR ;
typedef int IStream ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_3__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_12__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_2__ const*) ;
 int FUNC_7 (int *,TYPE_3__*,TYPE_3__**,int*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_9(IStream *VAR_6, const GUID *VAR_7,
    DWORD VAR_8, MetadataItem **VAR_9, DWORD *VAR_10)
{
    HRESULT VAR_11;
    BYTE VAR_12[4];
    BYTE *VAR_13;
    ULONG VAR_14;
    static const WCHAR VAR_15[8][12] = {
        {'W','h','i','t','e','P','o','i','n','t','X',0},
        {'W','h','i','t','e','P','o','i','n','t','Y',0},
        {'R','e','d','X',0},
        {'R','e','d','Y',0},
        {'G','r','e','e','n','X',0},
        {'G','r','e','e','n','Y',0},
        {'B','l','u','e','X',0},
        {'B','l','u','e','Y',0},
    };
    LPWSTR VAR_16[8] = {0};
    MetadataItem *VAR_17;
    int VAR_18;

    VAR_11 = FUNC_7(VAR_6, VAR_12, &VAR_13, &VAR_14);
    if (FUNC_0(VAR_11)) return VAR_11;

    if (VAR_14 < 32)
    {
        FUNC_3(FUNC_1(), 0, VAR_13);
        return VAR_0;
    }

    VAR_17 = FUNC_2(FUNC_1(), VAR_2, sizeof(MetadataItem)*8);
    for (VAR_18=0; VAR_18<8; VAR_18++)
    {
        VAR_16[VAR_18] = FUNC_2(FUNC_1(), 0, sizeof(WCHAR)*(FUNC_6(VAR_15[VAR_18])+1));
        if (!VAR_16[VAR_18]) break;
    }
    if (!VAR_17 || VAR_18 < 8)
    {
        FUNC_3(FUNC_1(), 0, VAR_17);
        for (VAR_18=0; VAR_18<8; VAR_18++)
            FUNC_3(FUNC_1(), 0, VAR_16[VAR_18]);
        FUNC_3(FUNC_1(), 0, VAR_13);
        return VAR_1;
    }

    for (VAR_18=0; VAR_18<8; VAR_18++)
    {
        FUNC_4(&VAR_17[VAR_18].schema);

        FUNC_4(&VAR_17[VAR_18].id);
        VAR_17[VAR_18].id.vt = VAR_4;
        VAR_17[VAR_18].id.u.pwszVal = VAR_16[VAR_18];
        FUNC_5(VAR_16[VAR_18], VAR_15[VAR_18]);

        FUNC_4(&VAR_17[VAR_18].value);
        VAR_17[VAR_18].value.vt = VAR_5;
        VAR_17[VAR_18].value.u.ulVal = FUNC_8(&VAR_13[VAR_18*4]);
    }

    *VAR_9 = VAR_17;
    *VAR_10 = 8;

    FUNC_3(FUNC_1(), 0, VAR_13);

    return VAR_3;
}
