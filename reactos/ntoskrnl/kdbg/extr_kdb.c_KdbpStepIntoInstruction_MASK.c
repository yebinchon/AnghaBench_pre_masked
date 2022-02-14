
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_4__ {int EFlags; } ;
struct TYPE_6__ {TYPE_1__ Tf; } ;
struct TYPE_5__ {int Limit; scalar_t__ Base; int member_0; } ;
typedef int PVOID ;
typedef int Mem ;
typedef TYPE_2__ KDESCRIPTOR ;
typedef int IntDesc ;
typedef int INT ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int *,int ,int *) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int*) ;

BOOLEAN
FUNC_4(
    ULONG_PTR VAR_4)
{
    KDESCRIPTOR VAR_5 = {0};
    UCHAR VAR_6[2];
    INT VAR_7;
    ULONG VAR_8[2];
    ULONG_PTR VAR_9;


    if (!FUNC_2(FUNC_1(VAR_6, (PVOID)VAR_4, sizeof (VAR_6))))
    {

        return VAR_0;
    }



    if (VAR_6[0] == 0xcc)
        VAR_7 = 3;
    else if (VAR_6[0] == 0xcd)
        VAR_7 = VAR_6[1];
    else if (VAR_6[0] == 0xce && VAR_2->Tf.EFlags & (1<<11))
        VAR_7 = 4;
    else
        return VAR_0;

    if (VAR_7 < 32)
    {
        return VAR_0;
    }


    FUNC_3(&VAR_5.Limit);
    if (VAR_7 >= (VAR_5.Limit + 1) / 8)
    {

        return VAR_3;
    }


    if (!FUNC_2(FUNC_1(VAR_8, (PVOID)(ULONG_PTR)(VAR_5.Base + (VAR_7 * 8)), sizeof (VAR_8))))
    {

        return VAR_0;
    }


    if ((VAR_8[1] & (1 << 15)) == 0)
    {
        return VAR_0;
    }
    if ((VAR_8[1] & 0x1f00) == 0x0500)
    {

        return VAR_0;
    }
    else if (((VAR_8[1] & 0x1fe0) == 0x0e00) ||
             ((VAR_8[1] & 0x1fe0) == 0x0f00))
    {

        VAR_9 = (VAR_8[1] & 0xffff0000) | (VAR_8[0] & 0x0000ffff);
    }
    else
    {
        return VAR_0;
    }


    if (!FUNC_2(FUNC_0(VAR_9, VAR_1, 0, 0, ((void*)0), VAR_0, ((void*)0))))
        return VAR_0;

    return VAR_3;
}
