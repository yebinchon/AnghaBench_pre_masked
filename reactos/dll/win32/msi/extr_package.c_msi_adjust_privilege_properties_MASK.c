
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3( MSIPACKAGE *VAR_3 )
{

    if (FUNC_1( VAR_3->db, VAR_1, 0 ) == 2)
    {
        FUNC_0("resetting ALLUSERS property from 2 to 1\n");
        FUNC_2( VAR_3->db, VAR_1, VAR_2, -1 );
    }
    FUNC_2( VAR_3->db, VAR_0, VAR_2, -1 );
}
