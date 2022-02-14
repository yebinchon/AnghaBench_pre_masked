
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int hGlobal; } ;
struct TYPE_13__ {scalar_t__ tymed; TYPE_1__ u; } ;
struct TYPE_10__ {int cfFormat; } ;
struct TYPE_12__ {scalar_t__ load_stream_num; TYPE_5__ stgmedium; TYPE_2__ fmtetc; } ;
struct TYPE_11__ {scalar_t__ cfFormat; } ;
typedef int STGMEDIUM ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_3__ FORMATETC ;
typedef TYPE_4__ DataCacheEntry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int *,TYPE_5__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_4(DataCacheEntry *VAR_4, IStorage *VAR_5, FORMATETC *VAR_6, STGMEDIUM *VAR_7)
{
    if (VAR_4->stgmedium.tymed == VAR_3 && VAR_4->load_stream_num != VAR_2)
    {
        HRESULT VAR_8 = FUNC_0(VAR_4, VAR_5);
        if (FUNC_1(VAR_8))
            return VAR_8;
    }
    if (VAR_4->stgmedium.tymed == VAR_3)
        return VAR_1;

    if (VAR_6->cfFormat == VAR_0)
        return FUNC_3( VAR_4->stgmedium.u.hGlobal, VAR_7 );

    return FUNC_2(VAR_4->fmtetc.cfFormat, VAR_7, &VAR_4->stgmedium);
}
