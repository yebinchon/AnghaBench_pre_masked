
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct copy_error {int refs; TYPE_1__ IBackgroundCopyError_iface; int * file; int code; int context; } ;
typedef int IBackgroundCopyFile2 ;
typedef TYPE_1__ IBackgroundCopyError ;
typedef int HRESULT ;
typedef int BG_ERROR_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct copy_error* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_1__*,...) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(
    BG_ERROR_CONTEXT VAR_3,
    HRESULT VAR_4,
    IBackgroundCopyFile2 *VAR_5,
    IBackgroundCopyError **VAR_6)
{
    struct copy_error *VAR_7;

    FUNC_3("context %u code %08x file %p\n", VAR_3, VAR_4, VAR_5);

    if (!(VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_7) ))) return VAR_0;
    VAR_7->IBackgroundCopyError_iface.lpVtbl = &VAR_2;
    VAR_7->refs = 1;
    VAR_7->context = VAR_3;
    VAR_7->code = VAR_4;
    VAR_7->file = VAR_5;
    if (VAR_7->file) FUNC_2(VAR_7->file);

    *VAR_6 = &VAR_7->IBackgroundCopyError_iface;
    FUNC_3("returning iface %p\n", *VAR_6);
    return VAR_1;
}
