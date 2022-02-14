
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int LPCVOID ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int *,int,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__,int ,int *) ;
 int FUNC_5 (int *,TYPE_1__) ;
 int FUNC_6 (int *,int ,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

UINT FUNC_10( IStorage *VAR_5, LPCWSTR VAR_6,
                        LPCVOID VAR_7, UINT VAR_8, BOOL VAR_9 )
{
    HRESULT VAR_10;
    UINT VAR_11 = VAR_0;
    ULONG VAR_12;
    IStream *VAR_13 = ((void*)0);
    ULARGE_INTEGER VAR_14;
    LARGE_INTEGER VAR_15;
    LPWSTR VAR_16;

    VAR_16 = FUNC_8(VAR_9, VAR_6 );
    VAR_10 = FUNC_2( VAR_5, VAR_16, ((void*)0),
            VAR_3 | VAR_2, 0, &VAR_13);
    if( FUNC_0(VAR_10) )
    {
        VAR_10 = FUNC_1( VAR_5, VAR_16,
                VAR_3 | VAR_2, 0, 0, &VAR_13);
    }
    FUNC_9( VAR_16 );
    if( FUNC_0( VAR_10 ) )
    {
        FUNC_7("open stream failed r = %08x\n", VAR_10);
        return VAR_11;
    }

    VAR_14.QuadPart = VAR_8;
    VAR_10 = FUNC_5( VAR_13, VAR_14 );
    if( FUNC_0( VAR_10 ) )
    {
        FUNC_7("Failed to SetSize\n");
        goto end;
    }

    VAR_15.QuadPart = 0;
    VAR_10 = FUNC_4( VAR_13, VAR_15, VAR_4, ((void*)0) );
    if( FUNC_0( VAR_10 ) )
    {
        FUNC_7("Failed to Seek\n");
        goto end;
    }

    if (VAR_8)
    {
        VAR_10 = FUNC_6(VAR_13, VAR_7, VAR_8, &VAR_12 );
        if( FUNC_0( VAR_10 ) || ( VAR_12 != VAR_8 ) )
        {
            FUNC_7("Failed to Write\n");
            goto end;
        }
    }

    VAR_11 = VAR_1;

end:
    FUNC_3( VAR_13 );

    return VAR_11;
}
