
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_5__ {size_t num_streams; TYPE_1__* streams; int storage; int strings; } ;
struct TYPE_4__ {int stream; int str_index; } ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int const*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;

UINT FUNC_12( MSIDATABASE *VAR_7 )
{
    UINT VAR_8;
    const WCHAR *VAR_9;
    WCHAR *VAR_10;
    IStream *VAR_11;
    HRESULT VAR_12;

    FUNC_6("got %u streams\n", VAR_7->num_streams);

    for (VAR_8 = 0; VAR_8 < VAR_7->num_streams; VAR_8++)
    {
        VAR_9 = FUNC_10( VAR_7->strings, VAR_7->streams[VAR_8].str_index, ((void*)0) );
        if (!(VAR_10 = FUNC_8( VAR_3, VAR_9 ))) return VAR_1;

        VAR_12 = FUNC_2( VAR_7->storage, VAR_10, VAR_5|VAR_4, 0, 0, &VAR_11 );
        if (FUNC_5( VAR_12 ))
        {
            VAR_12 = FUNC_11( VAR_11, VAR_7->streams[VAR_8].stream );
            if (FUNC_1( VAR_12 ))
            {
                FUNC_0("failed to write stream %s (hr = %08x)\n", FUNC_7(VAR_10), VAR_12);
                FUNC_9( VAR_10 );
                FUNC_4( VAR_11 );
                return VAR_0;
            }
            VAR_12 = FUNC_3( VAR_11, 0 );
            FUNC_4( VAR_11 );
            if (FUNC_1( VAR_12 ))
            {
                FUNC_0("failed to commit stream %s (hr = %08x)\n", FUNC_7(VAR_10), VAR_12);
                FUNC_9( VAR_10 );
                return VAR_0;
            }
        }
        else if (VAR_12 != VAR_6)
        {
            FUNC_0("failed to create stream %s (hr = %08x)\n", FUNC_7(VAR_10), VAR_12);
            FUNC_9( VAR_10 );
            return VAR_0;
        }
        FUNC_9( VAR_10 );
    }

    return VAR_2;
}
