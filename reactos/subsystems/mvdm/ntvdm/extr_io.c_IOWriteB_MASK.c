
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
struct TYPE_4__ {int (* outb_handler ) (size_t,int ) ;} ;
struct TYPE_5__ {int (* OutB ) (size_t,int ) ;} ;
struct TYPE_6__ {TYPE_1__ VddIoHandlers; int * hVdd; TYPE_2__ IoHandlers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t) ;
 int * VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t,int ) ;

VOID
FUNC_4(USHORT VAR_3,
         UCHAR VAR_4)
{
    if (VAR_1[VAR_3].hVdd == VAR_0 &&
        VAR_1[VAR_3].IoHandlers.OutB)
    {
        VAR_1[VAR_3].IoHandlers.OutB(VAR_3, VAR_4);
    }
    else if (VAR_1[VAR_3].hVdd != ((void*)0) && VAR_1[VAR_3].hVdd != VAR_0 &&
             VAR_1[VAR_3].VddIoHandlers.outb_handler)
    {
        FUNC_0(VAR_3 <= VAR_2);
        VAR_1[VAR_3].VddIoHandlers.outb_handler(VAR_3, VAR_4);
    }
    else
    {

        FUNC_1("Write to unknown port: 0x%X\n", VAR_3);
    }
}
