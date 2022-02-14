
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pUnkForRelease; int tymed; } ;
struct TYPE_5__ {void* advise_flags; scalar_t__ sink_id; void* save_stream_num; void* load_stream_num; int dirty; void* id; TYPE_1__ stgmedium; int fmtetc; } ;
typedef int HRESULT ;
typedef int FORMATETC ;
typedef TYPE_2__ DataCacheEntry ;
typedef void* DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static BOOL FUNC_2(DataCacheEntry *VAR_4, const FORMATETC *VAR_5, DWORD VAR_6,
                             DWORD VAR_7)
{
    HRESULT VAR_8;

    VAR_8 = FUNC_1(&VAR_4->fmtetc, VAR_5);
    if (FUNC_0(VAR_8)) return VAR_0;

    VAR_4->stgmedium.tymed = VAR_3;
    VAR_4->stgmedium.pUnkForRelease = ((void*)0);
    VAR_4->id = VAR_7;
    VAR_4->dirty = VAR_2;
    VAR_4->load_stream_num = VAR_1;
    VAR_4->save_stream_num = VAR_1;
    VAR_4->sink_id = 0;
    VAR_4->advise_flags = VAR_6;

    return VAR_2;
}
