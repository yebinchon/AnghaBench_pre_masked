
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


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

WCHAR *FUNC_8( MSIDATABASE *VAR_4 )
{
    WCHAR *VAR_5;

    if (!VAR_4->tempfolder)
    {
        WCHAR VAR_6[VAR_1];
        UINT VAR_7 = sizeof(VAR_6)/sizeof(VAR_6[0]);

        if (FUNC_5( VAR_4, VAR_3, VAR_6, &VAR_7 ) ||
            FUNC_0( VAR_6 ) != VAR_0)
        {
            FUNC_2( VAR_1, VAR_6 );
        }
        if (!(VAR_4->tempfolder = FUNC_6( VAR_6 ))) return ((void*)0);
    }

    if ((VAR_5 = FUNC_3( (FUNC_7( VAR_4->tempfolder ) + 20) * sizeof(WCHAR) )))
    {
        if (!FUNC_1( VAR_4->tempfolder, VAR_2, 0, VAR_5 ))
        {
            FUNC_4( VAR_5 );
            return ((void*)0);
        }
    }

    return VAR_5;
}
