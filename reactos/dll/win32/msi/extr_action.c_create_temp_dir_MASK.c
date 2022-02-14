
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int tempfolder; } ;
typedef TYPE_1__ MSIDATABASE ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static WCHAR *FUNC_9( MSIDATABASE *VAR_4 )
{
    static UINT VAR_5;
    WCHAR *VAR_6;

    if (!VAR_4->tempfolder)
    {
        WCHAR VAR_7[VAR_1];
        UINT VAR_8 = sizeof(VAR_7)/sizeof(VAR_7[0]);

        if (FUNC_6( VAR_4, VAR_3, VAR_7, &VAR_8 ) ||
            FUNC_1( VAR_7 ) != VAR_0)
        {
            FUNC_3( VAR_1, VAR_7 );
        }
        if (!(VAR_4->tempfolder = FUNC_7( VAR_7 ))) return ((void*)0);
    }

    if ((VAR_6 = FUNC_4( (FUNC_8( VAR_4->tempfolder ) + 20) * sizeof(WCHAR) )))
    {
        for (;;)
        {
            if (!FUNC_2( VAR_4->tempfolder, VAR_2, ++VAR_5, VAR_6 ))
            {
                FUNC_5( VAR_6 );
                return ((void*)0);
            }
            if (FUNC_0( VAR_6, ((void*)0) )) break;
        }
    }

    return VAR_6;
}
