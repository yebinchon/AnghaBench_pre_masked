
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int db; } ;
typedef int MSISUMMARYINFO ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int **** LPWSTR ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int ****** FUNC_1 (int ,int ) ;
 int FUNC_2 (int ****) ;
 int ******* FUNC_3 (int ****,char) ;
 int ****** FUNC_4 (int *,int ) ;
 int FUNC_5 (int ****,int ****) ;
 int VAR_3 ;

UINT FUNC_6( MSIPACKAGE *VAR_4, MSISUMMARYINFO *VAR_5 )
{
    LPWSTR VAR_6, *VAR_7, VAR_8;
    UINT VAR_9, VAR_10 = VAR_0;

    VAR_8 = FUNC_1( VAR_4->db, VAR_3 );
    if (!VAR_8)
    {

        FUNC_0("no product code to check\n");
        return VAR_1;
    }
    VAR_6 = FUNC_4( VAR_5, VAR_2 );
    VAR_7 = FUNC_3( VAR_6, ';' );
    for (VAR_9 = 0; VAR_7[VAR_9] && VAR_10 != VAR_1; VAR_9++)
    {
        if (!FUNC_5( VAR_7[VAR_9], VAR_8 )) VAR_10 = VAR_1;
    }
    FUNC_2( *VAR_7 );
    FUNC_2( VAR_6 );
    FUNC_2( VAR_8 );
    return VAR_10;
}
