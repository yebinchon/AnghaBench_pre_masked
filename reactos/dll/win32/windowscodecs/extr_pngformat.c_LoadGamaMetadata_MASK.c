
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_13__ {int ulVal; TYPE_2__* pwszVal; } ;
struct TYPE_15__ {TYPE_1__ u; int vt; } ;
struct TYPE_14__ {TYPE_9__ value; TYPE_9__ id; TYPE_9__ schema; } ;
typedef TYPE_2__ MetadataItem ;
typedef TYPE_2__* LPWSTR ;
typedef int ImageGamma ;
typedef int IStream ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_2__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*,char const*,int) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_2__**,int*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_6, const GUID *VAR_7,
    DWORD VAR_8, MetadataItem **VAR_9, DWORD *VAR_10)
{
    HRESULT VAR_11;
    BYTE VAR_12[4];
    BYTE *VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;
    static const WCHAR VAR_16[] = {'I','m','a','g','e','G','a','m','m','a',0};
    LPWSTR VAR_17;
    MetadataItem *VAR_18;

    VAR_11 = FUNC_6(VAR_6, VAR_12, &VAR_13, &VAR_14);
    if (FUNC_0(VAR_11)) return VAR_11;

    if (VAR_14 < 4)
    {
        FUNC_3(FUNC_1(), 0, VAR_13);
        return VAR_0;
    }

    VAR_15 = FUNC_7(VAR_13);

    FUNC_3(FUNC_1(), 0, VAR_13);

    VAR_18 = FUNC_2(FUNC_1(), VAR_2, sizeof(MetadataItem));
    VAR_17 = FUNC_2(FUNC_1(), 0, sizeof(VAR_16));
    if (!VAR_18 || !VAR_17)
    {
        FUNC_3(FUNC_1(), 0, VAR_18);
        FUNC_3(FUNC_1(), 0, VAR_17);
        return VAR_1;
    }

    FUNC_4(&VAR_18[0].schema);
    FUNC_4(&VAR_18[0].id);
    FUNC_4(&VAR_18[0].value);

    FUNC_5(VAR_17, VAR_16, sizeof(VAR_16));

    VAR_18[0].id.vt = VAR_4;
    VAR_18[0].id.u.pwszVal = VAR_17;
    VAR_18[0].value.vt = VAR_5;
    VAR_18[0].value.u.ulVal = VAR_15;

    *VAR_9 = VAR_18;
    *VAR_10 = 1;

    return VAR_3;
}
