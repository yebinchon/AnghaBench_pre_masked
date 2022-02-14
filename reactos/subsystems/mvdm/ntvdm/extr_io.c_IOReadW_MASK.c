
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int UCHAR ;
struct TYPE_4__ {int (* inw_handler ) (size_t,size_t*) ;} ;
struct TYPE_5__ {size_t (* InW ) (size_t) ;} ;
struct TYPE_6__ {TYPE_1__ VddIoHandlers; int * hVdd; TYPE_2__ IoHandlers; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (size_t) ;
 TYPE_3__* VAR_1 ;
 size_t FUNC_2 (int ,int ) ;
 size_t VAR_2 ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (size_t,size_t*) ;

USHORT
FUNC_5(USHORT VAR_3)
{
    if (VAR_1[VAR_3].hVdd == VAR_0 &&
        VAR_1[VAR_3].IoHandlers.InW)
    {
        return VAR_1[VAR_3].IoHandlers.InW(VAR_3);
    }
    else if (VAR_1[VAR_3].hVdd != ((void*)0) && VAR_1[VAR_3].hVdd != VAR_0 &&
             VAR_1[VAR_3].VddIoHandlers.inw_handler)
    {
        USHORT VAR_4;
        FUNC_0(VAR_3 <= VAR_2);
        VAR_1[VAR_3].VddIoHandlers.inw_handler(VAR_3, &VAR_4);
        return VAR_4;
    }
    else
    {
        UCHAR VAR_5, VAR_6;


        VAR_5 = FUNC_1(VAR_3);
        VAR_6 = FUNC_1(VAR_3 + sizeof(UCHAR));
        return FUNC_2(VAR_5, VAR_6);
    }
}
