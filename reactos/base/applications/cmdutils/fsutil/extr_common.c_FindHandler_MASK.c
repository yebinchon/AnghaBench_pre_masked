
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* Handler ) (int,int const**) ;int Command; } ;
typedef int TCHAR ;
typedef TYPE_1__ HandlerItem ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int,int const**) ;

int FUNC_2(int VAR_0,
                const TCHAR *VAR_1[],
                HandlerItem * VAR_2,
                int VAR_3,
                void (*VAR_4)(const TCHAR *))
{
    int VAR_5;
    int VAR_6;
    const TCHAR * VAR_7;

    VAR_6 = 1;
    VAR_7 = ((void*)0);
    VAR_5 = VAR_3;


    if (VAR_0 > 1)
    {

        VAR_7 = VAR_1[1];
        for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
        {
            if (FUNC_0(VAR_7, VAR_2[VAR_5].Command) == 0)
            {
                VAR_6 = VAR_2[VAR_5].Handler(VAR_0 - 1, &VAR_1[1]);
                break;
            }
        }
    }


    if (VAR_5 == VAR_3)
    {
        VAR_4(VAR_7);
    }

    return VAR_6;
}
