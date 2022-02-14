
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t USHORT ;
typedef int ULONG ;
struct TYPE_3__ {int (* OutD ) (size_t,int ) ;} ;
struct TYPE_4__ {scalar_t__ hVdd; TYPE_1__ IoHandlers; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (size_t,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t,int ) ;

VOID
FUNC_4(USHORT VAR_2,
         ULONG VAR_3)
{
    if (VAR_1[VAR_2].hVdd == VAR_0 &&
        VAR_1[VAR_2].IoHandlers.OutD)
    {
        VAR_1[VAR_2].IoHandlers.OutD(VAR_2, VAR_3);
    }
    else
    {

        FUNC_1(VAR_2, FUNC_2(VAR_3));
        FUNC_1(VAR_2 + sizeof(USHORT), FUNC_0(VAR_3));
    }
}
