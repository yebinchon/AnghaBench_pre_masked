
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rtfClass; } ;
typedef TYPE_1__ RTF_Info ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3( RTF_Info *VAR_4 )
{
    int VAR_5 = 1;

    for (;;)
    {
        FUNC_1 (VAR_4);

        if (VAR_4->rtfClass == VAR_1) return;
        if (FUNC_0( VAR_4, VAR_3, VAR_2 ))
        {
            if (--VAR_5 == 0) break;
        }
        else if (FUNC_0( VAR_4, VAR_3, VAR_0 ))
        {
            VAR_5++;
        }
        else
        {
            FUNC_2( VAR_4 );
            if (FUNC_0( VAR_4, VAR_3, VAR_2 ))
                VAR_5--;
        }
    }

    FUNC_2( VAR_4 );
    return;
}
