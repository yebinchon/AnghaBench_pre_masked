
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lwIP_netconn ;
struct TYPE_2__ {int * conn; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(lwIP_netconn *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    FUNC_0(VAR_2);

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    {

        if (!VAR_1[VAR_4].conn)
        {
            VAR_1[VAR_4].conn = VAR_2;
            return VAR_4;
        }
    }
    return -1;
}
