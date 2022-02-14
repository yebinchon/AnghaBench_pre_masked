
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int db; } ;
typedef int SID_NAME_USE ;
typedef int * PSID ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int * LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int*,int *,int*,int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_7( MSIPACKAGE *VAR_3 )
{
    SID_NAME_USE VAR_4;
    LPWSTR VAR_5;
    LPWSTR VAR_6 = ((void*)0), VAR_7 = ((void*)0);
    DWORD VAR_8, VAR_9;
    PSID VAR_10 = ((void*)0);
    UINT VAR_11 = VAR_0;

    VAR_8 = 0;
    FUNC_1( ((void*)0), &VAR_8 );

    VAR_5 = FUNC_4( (VAR_8 + 1) * sizeof(WCHAR) );
    if (!VAR_5)
        return VAR_1;

    if (!FUNC_1( VAR_5, &VAR_8 ))
        goto done;

    VAR_8 = 0;
    VAR_9 = 0;
    FUNC_3( ((void*)0), VAR_5, ((void*)0), &VAR_8, ((void*)0), &VAR_9, &VAR_4 );

    VAR_10 = FUNC_4( VAR_8 );
    VAR_7 = FUNC_4( VAR_9*sizeof (WCHAR) );
    if (!VAR_10 || !VAR_7)
    {
        VAR_11 = VAR_1;
        goto done;
    }

    if (!FUNC_3( ((void*)0), VAR_5, VAR_10, &VAR_8, VAR_7, &VAR_9, &VAR_4 ))
        goto done;

    if (!FUNC_0( VAR_10, &VAR_6 ))
        goto done;

    VAR_11 = FUNC_6( VAR_3->db, VAR_2, VAR_6, -1 );

done:
    FUNC_2( VAR_6 );
    FUNC_5( VAR_7 );
    FUNC_5( VAR_10 );
    FUNC_5( VAR_5 );

    return VAR_11;
}
