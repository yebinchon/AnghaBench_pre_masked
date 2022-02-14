
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Context; int db; int ProductCode; } ;
typedef TYPE_1__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_3 ;

UINT FUNC_2(MSIPACKAGE *VAR_4)
{
    UINT VAR_5 = FUNC_1( VAR_4->ProductCode, &VAR_4->Context );
    if (VAR_5 != VAR_0)
    {
        int VAR_6 = FUNC_0( VAR_4->db, VAR_3, 0 );
        if (VAR_6 == 1 || VAR_6 == 2)
            VAR_4->Context = VAR_1;
        else
            VAR_4->Context = VAR_2;
    }
    return VAR_0;
}
