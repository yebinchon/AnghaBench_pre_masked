
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* table; } ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ num_cols; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_1( const struct view *VAR_0 )
{
    UINT VAR_1, VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->table->num_cols; VAR_1++)
    {
        if (!FUNC_0( VAR_0->table, VAR_1)) VAR_2++;
    }
    return VAR_2;
}
