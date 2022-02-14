
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int Sectors; } ;
typedef TYPE_1__ GEOMETRY ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

ULONG
FUNC_2(UCHAR VAR_0)
{
    GEOMETRY VAR_1;



    if (FUNC_0(VAR_0))
    {
        return 64;
    }


    else if (!FUNC_1(VAR_0, &VAR_1))
    {
        return 1;
    }
    else
    {
        return VAR_1.Sectors;
    }
}
