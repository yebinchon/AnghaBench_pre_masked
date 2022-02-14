
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef size_t USHORT ;
typedef int UCHAR ;
struct TYPE_4__ {int (* outw_handler ) (size_t,size_t) ;} ;
struct TYPE_5__ {int (* OutW ) (size_t,size_t) ;} ;
struct TYPE_6__ {TYPE_1__ VddIoHandlers; int * hVdd; TYPE_2__ IoHandlers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int * VAR_0 ;
 int FUNC_2 (size_t,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (size_t) ;
 size_t VAR_2 ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (size_t,size_t) ;

VOID
FUNC_6(USHORT VAR_3,
         USHORT VAR_4)
{
    if (VAR_1[VAR_3].hVdd == VAR_0 &&
        VAR_1[VAR_3].IoHandlers.OutW)
    {
        VAR_1[VAR_3].IoHandlers.OutW(VAR_3, VAR_4);
    }
    else if (VAR_1[VAR_3].hVdd != ((void*)0) && VAR_1[VAR_3].hVdd != VAR_0 &&
             VAR_1[VAR_3].VddIoHandlers.outw_handler)
    {
        FUNC_0(VAR_3 <= VAR_2);
        VAR_1[VAR_3].VddIoHandlers.outw_handler(VAR_3, VAR_4);
    }
    else
    {

        FUNC_2(VAR_3, FUNC_3(VAR_4));
        FUNC_2(VAR_3 + sizeof(UCHAR), FUNC_1(VAR_4));
    }
}
