
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int hEnhMetaFile; } ;
struct TYPE_20__ {scalar_t__ tymed; TYPE_2__ u; } ;
struct TYPE_18__ {int cfFormat; } ;
struct TYPE_23__ {TYPE_3__ stgmedium; TYPE_1__ fmtetc; } ;
struct TYPE_22__ {int yExt; int xExt; } ;
struct TYPE_21__ {int dwSize; int dwObjectExtentY; int dwObjectExtentX; } ;
typedef TYPE_4__ PresentationDataHeader ;
typedef TYPE_5__ METAFILEPICT ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HDC ;
typedef int ENHMETAHEADER ;
typedef TYPE_6__ DataCacheEntry ;
typedef int DWORD ;
typedef TYPE_4__ BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_4__*,int,int *) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_11 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_12(DataCacheEntry *VAR_4, BOOL VAR_5, IStream *VAR_6)
{
    HRESULT VAR_7 = VAR_2;
    int VAR_8 = 0;
    BYTE *VAR_9;

    if (!VAR_5)
    {
        PresentationDataHeader VAR_10;
        METAFILEPICT *VAR_11;
        HDC VAR_12 = FUNC_1(0);

        FUNC_9(VAR_4, &VAR_10);
        VAR_7 = FUNC_11(VAR_6, VAR_4->fmtetc.cfFormat);
        if (FUNC_0(VAR_7))
        {
            FUNC_8(0, VAR_12);
            return VAR_7;
        }
        VAR_8 = FUNC_4(VAR_4->stgmedium.u.hEnhMetaFile, 0, ((void*)0), VAR_1, VAR_12);
        VAR_10.dwSize = VAR_8;
        VAR_9 = FUNC_5(FUNC_3(), 0, VAR_10.dwSize);
        if (!VAR_9)
        {
            FUNC_8(0, VAR_12);
            return VAR_0;
        }
        FUNC_4(VAR_4->stgmedium.u.hEnhMetaFile, VAR_10.dwSize, VAR_9, VAR_1, VAR_12);
        FUNC_8(0, VAR_12);
        VAR_11 = (METAFILEPICT *)VAR_9;
        VAR_10.dwObjectExtentX = VAR_11->xExt;
        VAR_10.dwObjectExtentY = VAR_11->yExt;
        VAR_7 = FUNC_7(VAR_6, &VAR_10, sizeof(PresentationDataHeader), ((void*)0));
        if (VAR_7 == VAR_2 && VAR_8)
            VAR_7 = FUNC_7(VAR_6, VAR_9, VAR_8, ((void*)0));
        FUNC_6(FUNC_3(), 0, VAR_9);
    }
    else if (VAR_4->stgmedium.tymed != VAR_3)
    {
        VAR_8 = FUNC_2(VAR_4->stgmedium.u.hEnhMetaFile, 0, ((void*)0));
        VAR_9 = FUNC_5(FUNC_3(), 0, sizeof(DWORD) + sizeof(ENHMETAHEADER) + VAR_8);
        if (!VAR_9) return VAR_0;
        *((DWORD *)VAR_9) = sizeof(ENHMETAHEADER);
        FUNC_2(VAR_4->stgmedium.u.hEnhMetaFile, VAR_8, VAR_9 + sizeof(DWORD) + sizeof(ENHMETAHEADER));
        FUNC_10(VAR_9 + sizeof(DWORD), VAR_9 + sizeof(DWORD) + sizeof(ENHMETAHEADER), sizeof(ENHMETAHEADER));
        VAR_8 += sizeof(DWORD) + sizeof(ENHMETAHEADER);
        VAR_7 = FUNC_7(VAR_6, VAR_9, VAR_8, ((void*)0));
        FUNC_6(FUNC_3(), 0, VAR_9);
    }

    return VAR_7;
}
