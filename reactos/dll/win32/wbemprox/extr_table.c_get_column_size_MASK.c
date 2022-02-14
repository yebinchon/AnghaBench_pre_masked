
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {TYPE_1__* columns; } ;
typedef size_t UINT ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;

__attribute__((used)) static UINT FUNC_1( const struct table *VAR_1, UINT VAR_2 )
{
    return FUNC_0( VAR_1->columns[VAR_2].type & VAR_0 );
}
