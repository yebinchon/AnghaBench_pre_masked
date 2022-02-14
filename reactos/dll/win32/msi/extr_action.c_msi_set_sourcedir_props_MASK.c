
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int) ;
 int * FUNC_6 (int *,char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

UINT FUNC_7(MSIPACKAGE *VAR_6, BOOL VAR_7)
{
    WCHAR *VAR_8, *VAR_9, *VAR_10, *VAR_11;
    DWORD VAR_12;

    if (!(VAR_11 = FUNC_2( VAR_6->db, VAR_3 )))
        return VAR_0;

    if (!(VAR_10 = FUNC_6( VAR_11, '\\' )) && !(VAR_10 = FUNC_6( VAR_11, '/' )))
    {
        FUNC_3(VAR_11);
        return VAR_1;
    }
    VAR_12 = VAR_10 - VAR_11 + 2;
    VAR_8 = FUNC_1( VAR_12 * sizeof(WCHAR) );
    FUNC_0( VAR_8, VAR_11, VAR_12 );
    FUNC_3( VAR_11 );

    VAR_9 = FUNC_2( VAR_6->db, VAR_5 );
    if (!VAR_9 || VAR_7)
    {
        UINT VAR_13 = FUNC_5( VAR_6->db, VAR_5, VAR_8, -1 );
        if (VAR_13 == VAR_1)
            FUNC_4( VAR_6, VAR_2 );
    }
    FUNC_3( VAR_9 );

    VAR_9 = FUNC_2( VAR_6->db, VAR_4 );
    if (!VAR_9 || VAR_7)
        FUNC_5( VAR_6->db, VAR_4, VAR_8, -1 );

    FUNC_3( VAR_9 );
    FUNC_3( VAR_8 );

    return VAR_1;
}
