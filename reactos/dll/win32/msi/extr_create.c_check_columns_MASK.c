
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int column; struct TYPE_3__* next; } ;
typedef TYPE_1__ column_info ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static UINT FUNC_1( const column_info *VAR_2 )
{
    const column_info *VAR_3, *VAR_4;


    for( VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next )
        for( VAR_4 = VAR_3->next; VAR_4; VAR_4 = VAR_4->next )
            if (!FUNC_0( VAR_3->column, VAR_4->column ))
                return VAR_0;

    return VAR_1;
}
