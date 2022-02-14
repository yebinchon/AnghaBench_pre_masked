
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buf ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {TYPE_4__ cbSize; } ;
typedef TYPE_1__ STATSTG ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_2__,int ,int *) ;
 int FUNC_3 (int *,TYPE_4__) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,char*,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_8( IStream *VAR_4, IStream *VAR_5 )
{
    HRESULT VAR_6;
    char VAR_7[4096];
    STATSTG VAR_8;
    LARGE_INTEGER VAR_9;
    UINT VAR_10, VAR_11;

    VAR_6 = FUNC_4( VAR_5, &VAR_8, VAR_1 );
    if (FUNC_0( VAR_6 )) return VAR_6;

    VAR_6 = FUNC_3( VAR_4, VAR_8.cbSize );
    if (FUNC_0( VAR_6 )) return VAR_6;

    VAR_9.QuadPart = 0;
    VAR_6 = FUNC_2( VAR_4, VAR_9, VAR_2, ((void*)0) );
    if (FUNC_0( VAR_6 )) return VAR_6;

    for (;;)
    {
        VAR_11 = FUNC_7( sizeof(VAR_7), VAR_8.cbSize.QuadPart );
        VAR_6 = FUNC_1( VAR_5, VAR_7, VAR_11, &VAR_10 );
        if (FUNC_0( VAR_6 ) || VAR_10 != VAR_11)
        {
            FUNC_6("failed to read stream: %08x\n", VAR_6);
            return VAR_0;
        }
        VAR_8.cbSize.QuadPart -= VAR_10;
        if (VAR_10)
        {
            VAR_11 = VAR_10;
            VAR_6 = FUNC_5( VAR_4, VAR_7, VAR_11, &VAR_10 );
            if (FUNC_0( VAR_6 ) || VAR_10 != VAR_11)
            {
                FUNC_6("failed to write stream: %08x\n", VAR_6);
                return VAR_0;
            }
        }
        if (!VAR_8.cbSize.QuadPart) break;
    }

    return VAR_3;
}
