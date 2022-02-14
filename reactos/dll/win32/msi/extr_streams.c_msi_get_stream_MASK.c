
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
struct TYPE_5__ {int * stream; } ;
typedef TYPE_1__ MSISTREAM ;
typedef int MSIDATABASE ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,int const*,int *) ;
 int * FUNC_5 (int ,int const*) ;
 TYPE_1__* FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int **) ;

UINT FUNC_9( MSIDATABASE *VAR_5, const WCHAR *VAR_6, IStream **VAR_7 )
{
    MSISTREAM *VAR_8;
    WCHAR *VAR_9;
    HRESULT VAR_10;
    UINT VAR_11;

    if ((VAR_8 = FUNC_6( VAR_5, VAR_6 )))
    {
        LARGE_INTEGER VAR_12;

        VAR_12.QuadPart = 0;
        VAR_10 = FUNC_3( VAR_8->stream, VAR_12, VAR_4, ((void*)0) );
        if (FUNC_0( VAR_10 ))
            return VAR_0;

        *VAR_7 = VAR_8->stream;
        FUNC_1( *VAR_7 );
        return VAR_2;
    }

    if (!(VAR_9 = FUNC_5( VAR_3, VAR_6 )))
        return VAR_1;

    VAR_10 = FUNC_8( VAR_5, VAR_9, VAR_7 );
    FUNC_7( VAR_9 );
    if (FUNC_0( VAR_10 ))
        return VAR_0;

    VAR_11 = FUNC_4( VAR_5, VAR_6, *VAR_7 );
    if (VAR_11 != VAR_2)
    {
        FUNC_2( *VAR_7 );
        return VAR_11;
    }

    FUNC_1( *VAR_7 );
    return VAR_2;
}
