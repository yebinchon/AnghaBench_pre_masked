
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {size_t number_of_cp; TYPE_1__* mime_cp_info; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; int total; TYPE_2__ IEnumCodePage_iface; int * cpinfo; scalar_t__ pos; } ;
struct TYPE_8__ {int flags; } ;
typedef int MLang_impl ;
typedef int MIMECPINFO ;
typedef int LANGID ;
typedef TYPE_2__ IEnumCodePage ;
typedef int HRESULT ;
typedef TYPE_3__ EnumCodePage_impl ;
typedef int DWORD ;


 size_t FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,...) ;
 int FUNC_4 (TYPE_4__*,size_t,int ) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_5( MLang_impl* VAR_4, DWORD VAR_5,
                     LANGID VAR_6, IEnumCodePage** VAR_7 )
{
    EnumCodePage_impl *VAR_8;
    MIMECPINFO *VAR_9;
    UINT VAR_10, VAR_11;

    FUNC_3("%p, %08x, %04x, %p\n", *VAR_4, VAR_5, VAR_6, VAR_7);

    if (!VAR_5)
        VAR_5 = VAR_1;

    VAR_8 = FUNC_2( FUNC_1(), 0, sizeof (EnumCodePage_impl) );
    VAR_8->IEnumCodePage_iface.lpVtbl = &VAR_0;
    VAR_8->ref = 1;
    VAR_8->pos = 0;
    VAR_8->total = 0;
    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
    {
        for (VAR_11 = 0; VAR_11 < VAR_3[VAR_10].number_of_cp; VAR_11++)
        {
            if (VAR_3[VAR_10].mime_cp_info[VAR_11].flags & VAR_5)
                VAR_8->total++;
        }
    }

    VAR_8->cpinfo = FUNC_2(FUNC_1(), 0,
                            sizeof(MIMECPINFO) * VAR_8->total);
    VAR_9 = VAR_8->cpinfo;

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
    {
        for (VAR_11 = 0; VAR_11 < VAR_3[VAR_10].number_of_cp; VAR_11++)
        {
            if (VAR_3[VAR_10].mime_cp_info[VAR_11].flags & VAR_5)
                FUNC_4(&VAR_3[VAR_10], VAR_11, VAR_9++);
        }
    }

    FUNC_3("enumerated %d codepages with flags %08x\n", VAR_8->total, VAR_5);

    *VAR_7 = &VAR_8->IEnumCodePage_iface;

    return VAR_2;
}
