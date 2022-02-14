
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG ;
struct TYPE_3__ {int (* InD ) (size_t) ;} ;
struct TYPE_4__ {scalar_t__ hVdd; TYPE_1__ IoHandlers; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t) ;

ULONG
FUNC_3(USHORT VAR_2)
{
    if (VAR_1[VAR_2].hVdd == VAR_0 &&
        VAR_1[VAR_2].IoHandlers.InD)
    {
        return VAR_1[VAR_2].IoHandlers.InD(VAR_2);
    }
    else
    {
        USHORT VAR_3, VAR_4;


        VAR_3 = FUNC_0(VAR_2);
        VAR_4 = FUNC_0(VAR_2 + sizeof(USHORT));
        return FUNC_1(VAR_3, VAR_4);
    }
}
