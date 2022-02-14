
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct image_descriptor {int packed; int height; int width; int top; int left; } ;
typedef int imd_data ;
typedef int ULONG ;
struct TYPE_6__ {int boolVal; int bVal; void* pwszVal; int uiVal; } ;
struct TYPE_8__ {TYPE_1__ u; void* vt; } ;
struct TYPE_7__ {TYPE_4__ value; TYPE_4__ id; TYPE_4__ schema; } ;
typedef TYPE_2__ MetadataItem ;
typedef int IStream ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,struct image_descriptor*,int,int*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static HRESULT FUNC_6(IStream *VAR_7, const GUID *VAR_8, DWORD VAR_9,
                                 MetadataItem **VAR_10, DWORD *VAR_11)
{
    struct image_descriptor VAR_12;
    HRESULT VAR_13;
    ULONG VAR_14, VAR_15;
    MetadataItem *VAR_16;

    *VAR_10 = ((void*)0);
    *VAR_11 = 0;

    VAR_13 = FUNC_3(VAR_7, &VAR_12, sizeof(VAR_12), &VAR_14);
    if (FUNC_0(VAR_13) || VAR_14 != sizeof(VAR_12)) return VAR_2;

    VAR_16 = FUNC_2(FUNC_1(), VAR_1, sizeof(MetadataItem) * 8);
    if (!VAR_16) return VAR_0;

    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
    {
        FUNC_4(&VAR_16[VAR_15].schema);
        FUNC_4(&VAR_16[VAR_15].id);
        FUNC_4(&VAR_16[VAR_15].value);
    }

    VAR_16[0].id.vt = VAR_4;
    VAR_16[0].id.u.pwszVal = FUNC_5("Left");
    VAR_16[0].value.vt = VAR_6;
    VAR_16[0].value.u.uiVal = VAR_12.left;

    VAR_16[1].id.vt = VAR_4;
    VAR_16[1].id.u.pwszVal = FUNC_5("Top");
    VAR_16[1].value.vt = VAR_6;
    VAR_16[1].value.u.uiVal = VAR_12.top;

    VAR_16[2].id.vt = VAR_4;
    VAR_16[2].id.u.pwszVal = FUNC_5("Width");
    VAR_16[2].value.vt = VAR_6;
    VAR_16[2].value.u.uiVal = VAR_12.width;

    VAR_16[3].id.vt = VAR_4;
    VAR_16[3].id.u.pwszVal = FUNC_5("Height");
    VAR_16[3].value.vt = VAR_6;
    VAR_16[3].value.u.uiVal = VAR_12.height;

    VAR_16[4].id.vt = VAR_4;
    VAR_16[4].id.u.pwszVal = FUNC_5("LocalColorTableFlag");
    VAR_16[4].value.vt = VAR_3;
    VAR_16[4].value.u.boolVal = (VAR_12.packed >> 7) & 1;

    VAR_16[5].id.vt = VAR_4;
    VAR_16[5].id.u.pwszVal = FUNC_5("InterlaceFlag");
    VAR_16[5].value.vt = VAR_3;
    VAR_16[5].value.u.boolVal = (VAR_12.packed >> 6) & 1;

    VAR_16[6].id.vt = VAR_4;
    VAR_16[6].id.u.pwszVal = FUNC_5("SortFlag");
    VAR_16[6].value.vt = VAR_3;
    VAR_16[6].value.u.boolVal = (VAR_12.packed >> 5) & 1;

    VAR_16[7].id.vt = VAR_4;
    VAR_16[7].id.u.pwszVal = FUNC_5("LocalColorTableSize");
    VAR_16[7].value.vt = VAR_5;
    VAR_16[7].value.u.bVal = VAR_12.packed & 7;

    *VAR_10 = VAR_16;
    *VAR_11 = 8;

    return VAR_2;
}
