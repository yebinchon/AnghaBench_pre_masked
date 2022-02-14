
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int hMetaFilePict; int hBitmap; } ;
struct TYPE_16__ {scalar_t__ tymed; TYPE_1__ u; } ;
struct TYPE_15__ {scalar_t__ cfFormat; scalar_t__ tymed; } ;
struct TYPE_18__ {TYPE_3__ stgmedium; TYPE_2__ fmtetc; void* dirty; } ;
struct TYPE_17__ {scalar_t__ cfFormat; scalar_t__ tymed; } ;
typedef TYPE_3__ STGMEDIUM ;
typedef int HRESULT ;
typedef TYPE_4__ FORMATETC ;
typedef TYPE_5__ DataCacheEntry ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_6(DataCacheEntry *VAR_7,
                                      const FORMATETC *VAR_8,
                                      STGMEDIUM *VAR_9,
                                      BOOL VAR_10)
{
    STGMEDIUM VAR_11;
    HRESULT VAR_12;

    if ((!VAR_7->fmtetc.cfFormat && !VAR_8->cfFormat) ||
        (VAR_7->fmtetc.tymed == VAR_6 && VAR_8->tymed == VAR_6) ||
        VAR_9->tymed == VAR_6)
    {
        FUNC_2("invalid formatetc\n");
        return VAR_3;
    }

    VAR_7->dirty = VAR_5;
    FUNC_1(&VAR_7->stgmedium);

    if (VAR_8->cfFormat == VAR_0)
    {
        VAR_12 = FUNC_4( VAR_9->u.hBitmap, &VAR_11 );
        if (FUNC_0(VAR_12)) return VAR_12;
        if (VAR_10) FUNC_1(VAR_9);
        VAR_9 = &VAR_11;
        VAR_10 = VAR_5;
    }
    else if (VAR_8->cfFormat == VAR_2 && VAR_7->fmtetc.cfFormat == VAR_1)
    {
        VAR_12 = FUNC_5( VAR_9->u.hMetaFilePict, &VAR_11 );
        if (FUNC_0(VAR_12)) return VAR_12;
        if (VAR_10) FUNC_1(VAR_9);
        VAR_9 = &VAR_11;
        VAR_10 = VAR_5;
    }

    if (VAR_10)
    {
        VAR_7->stgmedium = *VAR_9;
        return VAR_4;
    }
    else
        return FUNC_3(VAR_7->fmtetc.cfFormat, &VAR_7->stgmedium, VAR_9);
}
