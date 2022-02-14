
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int digest; } ;
struct TYPE_7__ {int dwData; } ;
typedef TYPE_1__ MSIFILEHASHINFO ;
typedef TYPE_2__ MD5_CTX ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int const*,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,void*,int ) ;
 void* FUNC_8 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;

UINT FUNC_13( const WCHAR *VAR_10, MSIFILEHASHINFO *VAR_11 )
{
    HANDLE VAR_12, VAR_13;
    void *VAR_14;
    DWORD VAR_15;
    UINT VAR_16 = VAR_1;

    VAR_12 = FUNC_2( VAR_10, VAR_6, VAR_5|VAR_4, ((void*)0), VAR_8, 0, ((void*)0) );
    if (VAR_12 == VAR_7)
    {
        FUNC_10("can't open file %u\n", FUNC_4());
        return VAR_0;
    }
    if ((VAR_15 = FUNC_3( VAR_12, ((void*)0) )))
    {
        if ((VAR_13 = FUNC_1( VAR_12, ((void*)0), VAR_9, 0, 0, ((void*)0) )))
        {
            if ((VAR_14 = FUNC_8( VAR_13, VAR_3, 0, 0, VAR_15 )))
            {
                MD5_CTX VAR_17;

                FUNC_6( &VAR_17 );
                FUNC_7( &VAR_17, VAR_14, VAR_15 );
                FUNC_5( &VAR_17 );
                FUNC_9( VAR_14 );

                FUNC_11( VAR_11->dwData, VAR_17.digest, sizeof(VAR_11->dwData) );
                VAR_16 = VAR_2;
            }
            FUNC_0( VAR_13 );
        }
    }
    else
    {

        FUNC_12( VAR_11->dwData, 0, sizeof(VAR_11->dwData) );
        VAR_16 = VAR_2;
    }

    FUNC_0( VAR_12 );
    return VAR_16;
}
