
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_14__ {int hEnhMetaFile; int hMetaFilePict; } ;
struct TYPE_15__ {int * pUnkForRelease; int tymed; TYPE_3__ u; } ;
struct TYPE_17__ {scalar_t__ load_stream_num; TYPE_4__ stgmedium; } ;
struct TYPE_12__ {int LowPart; } ;
struct TYPE_13__ {TYPE_1__ u; } ;
struct TYPE_16__ {TYPE_2__ cbSize; } ;
typedef TYPE_4__ STGMEDIUM ;
typedef TYPE_5__ STATSTG ;
typedef int IStream ;
typedef int HRESULT ;
typedef int ENHMETAHEADER ;
typedef TYPE_6__ DataCacheEntry ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *,int ,int*) ;
 int FUNC_4 (int *,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int,int *) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_6__*,int *) ;
 int FUNC_9 (int ,TYPE_4__*) ;

__attribute__((used)) static HRESULT FUNC_10( DataCacheEntry *VAR_6, IStream *VAR_7 )
{
    HRESULT VAR_8;

    if (VAR_6->load_stream_num != VAR_3)
    {
        STGMEDIUM VAR_9;

        VAR_8 = FUNC_8( VAR_6, VAR_7 );
        if (FUNC_6( VAR_8 ))
        {
            VAR_8 = FUNC_9( VAR_6->stgmedium.u.hMetaFilePict, &VAR_9 );
            FUNC_5( &VAR_6->stgmedium );
        }
        if (FUNC_6( VAR_8 ))
            VAR_6->stgmedium = VAR_9;
    }
    else
    {
        STATSTG VAR_10;
        BYTE *VAR_11;
        ULONG VAR_12, VAR_13;

        VAR_8 = FUNC_4( VAR_7, &VAR_10, VAR_2 );

        if (FUNC_6( VAR_8 ))
        {
            VAR_11 = FUNC_1( FUNC_0(), 0, VAR_10.cbSize.u.LowPart );
            if (!VAR_11) return VAR_1;

            VAR_8 = FUNC_3( VAR_7, VAR_11, VAR_10.cbSize.u.LowPart, &VAR_12 );
            if (VAR_8 != VAR_4)
            {
                FUNC_2( FUNC_0(), 0, VAR_11 );
                return VAR_8;
            }

            if (VAR_12 <= sizeof(DWORD) + sizeof(ENHMETAHEADER))
            {
                FUNC_2( FUNC_0(), 0, VAR_11 );
                return VAR_0;
            }
            VAR_13 = VAR_12 - sizeof(DWORD) - sizeof(ENHMETAHEADER);
            VAR_6->stgmedium.u.hEnhMetaFile = FUNC_7( VAR_13, VAR_11 + (VAR_12 - VAR_13) );
            VAR_6->stgmedium.tymed = VAR_5;
            VAR_6->stgmedium.pUnkForRelease = ((void*)0);

            FUNC_2( FUNC_0(), 0, VAR_11 );
        }
    }

    return VAR_8;
}
