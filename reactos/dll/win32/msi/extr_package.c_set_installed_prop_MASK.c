
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int db; int platform; int ProductCode; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static UINT FUNC_3( MSIPACKAGE *VAR_5 )
{
    HKEY VAR_6;
    UINT VAR_7;

    if (!VAR_5->ProductCode) return VAR_0;

    VAR_7 = FUNC_0( VAR_5->ProductCode, VAR_5->platform, &VAR_6, VAR_2 );
    if (VAR_7 == VAR_1)
    {
        FUNC_1( VAR_6 );
        FUNC_2( VAR_5->db, VAR_3, VAR_4, -1 );
    }
    return VAR_7;
}
