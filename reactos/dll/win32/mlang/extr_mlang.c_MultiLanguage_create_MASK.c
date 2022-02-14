
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_17__ {scalar_t__ number_of_cp; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_15__ {size_t total_scripts; int ref; TYPE_6__ IMultiLanguage_iface; scalar_t__ total_cp; TYPE_4__ IMLangLineBreakConsole_iface; TYPE_3__ IMLangFontLink2_iface; TYPE_2__ IMultiLanguage3_iface; TYPE_1__ IMLangFontLink_iface; } ;
typedef TYPE_5__ MLang_impl ;
typedef TYPE_6__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 size_t FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (char*,...) ;
 TYPE_7__* VAR_7 ;

__attribute__((used)) static HRESULT FUNC_5(IUnknown *VAR_8, LPVOID *VAR_9)
{
    MLang_impl *VAR_10;
    UINT VAR_11;

    FUNC_4("Creating MultiLanguage object\n");

    if( VAR_8 )
        return VAR_0;

    VAR_10 = FUNC_2( FUNC_1(), 0, sizeof (MLang_impl) );
    VAR_10->IMLangFontLink_iface.lpVtbl = &VAR_2;
    VAR_10->IMultiLanguage_iface.lpVtbl = &VAR_5;
    VAR_10->IMultiLanguage3_iface.lpVtbl = &VAR_4;
    VAR_10->IMLangFontLink2_iface.lpVtbl = &VAR_1;
    VAR_10->IMLangLineBreakConsole_iface.lpVtbl = &VAR_3;

    VAR_10->total_cp = 0;
    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++)
        VAR_10->total_cp += VAR_7[VAR_11].number_of_cp;


    VAR_10->total_scripts = FUNC_0(VAR_7) - 1;

    VAR_10->ref = 1;
    *VAR_9 = &VAR_10->IMultiLanguage_iface;
    FUNC_4("returning %p\n", VAR_10);

    FUNC_3();

    return VAR_6;
}
