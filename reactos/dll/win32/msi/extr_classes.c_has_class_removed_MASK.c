
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action; int ProgID; } ;
typedef int MSIPROGID ;
typedef TYPE_1__ MSICLASS ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int const*) ;

__attribute__((used)) static BOOL FUNC_1( const MSIPROGID *VAR_2 )
{
    const MSICLASS *VAR_3 = FUNC_0( VAR_2 );
    if (!VAR_3 || !VAR_3->ProgID) return VAR_0;
    return (VAR_3->action == VAR_1);
}
