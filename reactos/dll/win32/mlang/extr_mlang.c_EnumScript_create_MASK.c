
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int proportional_font; int fixed_font; int description; int family_codepage; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int total; TYPE_2__ IEnumScript_iface; TYPE_1__* script_info; scalar_t__ pos; } ;
struct TYPE_7__ {size_t ScriptId; int wszProportionalFont; int wszFixedWidthFont; int wszDescription; int uiCodePage; } ;
typedef int SCRIPTINFO ;
typedef int MLang_impl ;
typedef int LANGID ;
typedef TYPE_2__ IEnumScript ;
typedef int HRESULT ;
typedef TYPE_3__ EnumScript_impl ;
typedef int DWORD ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,size_t,int,...) ;
 TYPE_4__* VAR_8 ;

__attribute__((used)) static HRESULT FUNC_5( MLang_impl* VAR_9, DWORD VAR_10,
                     LANGID VAR_11, IEnumScript** VAR_12 )
{
    EnumScript_impl *VAR_13;
    UINT VAR_14;

    FUNC_4("%p, %08x, %04x, %p\n", VAR_9, VAR_10, VAR_11, VAR_12);

    if (!VAR_10)
        VAR_10 = VAR_6 | VAR_4 | VAR_5;

    VAR_13 = FUNC_2( FUNC_1(), 0, sizeof (EnumScript_impl) );
    VAR_13->IEnumScript_iface.lpVtbl = &VAR_1;
    VAR_13->ref = 1;
    VAR_13->pos = 0;

    VAR_13->total = FUNC_0(VAR_8) - 1;
    VAR_13->script_info = FUNC_2(FUNC_1(), 0, sizeof(SCRIPTINFO) * VAR_13->total);

    for (VAR_14 = 0; VAR_14 < VAR_13->total; VAR_14++)
    {
        VAR_13->script_info[VAR_14].ScriptId = VAR_14;
        VAR_13->script_info[VAR_14].uiCodePage = VAR_8[VAR_14].family_codepage;
        FUNC_3(VAR_0, 0, VAR_8[VAR_14].description, -1,
            VAR_13->script_info[VAR_14].wszDescription, VAR_3);
        FUNC_3(VAR_0, 0, VAR_8[VAR_14].fixed_font, -1,
            VAR_13->script_info[VAR_14].wszFixedWidthFont, VAR_2);
        FUNC_3(VAR_0, 0, VAR_8[VAR_14].proportional_font, -1,
            VAR_13->script_info[VAR_14].wszProportionalFont, VAR_2);
    }

    FUNC_4("enumerated %d scripts with flags %08x\n", VAR_13->total, VAR_10);

    *VAR_12 = &VAR_13->IEnumScript_iface;

    return VAR_7;
}
