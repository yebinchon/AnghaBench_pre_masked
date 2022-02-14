
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* table; } ;
struct TYPE_5__ {int row_count; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;

__attribute__((used)) static int FUNC_2( MSITABLEVIEW *VAR_0, MSIRECORD *VAR_1 )
{
    int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = VAR_0->table->row_count - 1;

    FUNC_0("%p %p\n", VAR_0, VAR_1);

    while (VAR_4 <= VAR_5)
    {
        VAR_2 = (VAR_4 + VAR_5) / 2;
        VAR_3 = FUNC_1( VAR_0, VAR_2, VAR_1 );

        if (VAR_3 < 0)
            VAR_5 = VAR_2 - 1;
        else if (VAR_3 > 0)
            VAR_4 = VAR_2 + 1;
        else
        {
            FUNC_0("found %u\n", VAR_2);
            return VAR_2;
        }
    }
    FUNC_0("found %u\n", VAR_5 + 1);
    return VAR_5 + 1;
}
