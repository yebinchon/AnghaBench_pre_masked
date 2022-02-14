
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int **** LPWSTR ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ****) ;
 size_t FUNC_2 (TYPE_1__*,int ****) ;
 int ****** FUNC_3 (int ,int ) ;
 int FUNC_4 (int ****) ;
 int ******* FUNC_5 (int ****,char) ;
 int VAR_1 ;

UINT FUNC_6( MSIPACKAGE *VAR_2 )
{
    LPWSTR VAR_3, *VAR_4;
    UINT VAR_5, VAR_6 = VAR_0;

    VAR_3 = FUNC_3( VAR_2->db, VAR_1 );

    FUNC_0("patches to be applied: %s\n", FUNC_1(VAR_3));

    VAR_4 = FUNC_5( VAR_3, ';' );
    for (VAR_5 = 0; VAR_4 && VAR_4[VAR_5] && VAR_6 == VAR_0; VAR_5++)
        VAR_6 = FUNC_2( VAR_2, VAR_4[VAR_5] );

    FUNC_4( *VAR_4 );
    FUNC_4( VAR_3 );
    return VAR_6;
}
