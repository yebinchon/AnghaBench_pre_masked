
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_9__ {int display_name; } ;
struct TYPE_8__ {TYPE_1__* File; } ;
struct TYPE_7__ {int * TargetPath; } ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSIFILEPATCH ;
typedef TYPE_3__ MSIASSEMBLY ;
typedef int IAssemblyName ;
typedef int IAssemblyEnum ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int **,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,TYPE_2__*) ;

__attribute__((used)) static UINT FUNC_14( MSIPACKAGE *VAR_5, MSIASSEMBLY *VAR_6, MSIFILEPATCH *VAR_7 )
{
    UINT VAR_8 = VAR_0;
    IAssemblyName *VAR_9;
    IAssemblyEnum *VAR_10;

    if (!(VAR_10 = FUNC_10( VAR_5, VAR_6->display_name )))
        return VAR_0;

    while ((FUNC_4( VAR_10, ((void*)0), &VAR_9, 0 ) == VAR_4))
    {
        WCHAR *VAR_11, *VAR_12;
        UINT VAR_13 = 0;
        HRESULT VAR_14;

        VAR_14 = FUNC_6( VAR_9, ((void*)0), &VAR_13, 0 );
        if (VAR_14 != VAR_2 || !(VAR_11 = FUNC_9( VAR_13 * sizeof(WCHAR) )))
            break;

        VAR_14 = FUNC_6( VAR_9, VAR_11, &VAR_13, 0 );
        if (FUNC_2( VAR_14 ))
        {
            FUNC_11( VAR_11 );
            break;
        }

        if ((VAR_12 = FUNC_12( VAR_5, VAR_11 )))
        {
            if (!FUNC_0( VAR_12, VAR_7->File->TargetPath, VAR_3 ))
            {
                FUNC_1("Failed to copy file %s -> %s (%u)\n", FUNC_8(VAR_12),
                    FUNC_8(VAR_7->File->TargetPath), FUNC_3() );
                FUNC_11( VAR_12 );
                FUNC_11( VAR_11 );
                FUNC_7( VAR_9 );
                break;
            }
            VAR_8 = FUNC_13( VAR_5, VAR_7 );
            FUNC_11( VAR_12 );
        }

        FUNC_11( VAR_11 );
        FUNC_7( VAR_9 );
        if (VAR_8 == VAR_1) break;
    }

    FUNC_5( VAR_10 );
    return VAR_8;
}
