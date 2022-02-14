
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int column; struct TYPE_6__* next; } ;
typedef TYPE_1__ column_info ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_2( column_info **VAR_3,
                                 column_info *VAR_4 )
{
    column_info *VAR_5;
    BOOL VAR_6 = VAR_2;
    int VAR_7;

    for( VAR_5 = VAR_4, VAR_7 = 0; VAR_5 && VAR_6; VAR_5 = VAR_5->next, VAR_7++ )
    {
        column_info *VAR_8;
        int VAR_9;

        VAR_6 = VAR_0;
        for( VAR_8 = *VAR_3, VAR_9 = 0; VAR_8 && !VAR_6; VAR_8 = VAR_8->next, VAR_9++ )
        {
            if( FUNC_0( VAR_5->column, VAR_8->column ) )
                continue;
            VAR_8->type |= VAR_1;
            VAR_6 = VAR_2;
            if (VAR_9 != VAR_7)
                FUNC_1( VAR_3, VAR_8, VAR_7 );
        }
    }

    return VAR_6;
}
