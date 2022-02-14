
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hEvent; } ;
typedef int OVERLAPPED ;
typedef TYPE_1__* LPOVERLAPPED ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static BOOL
FUNC_2(LPOVERLAPPED VAR_2)
{
    HANDLE VAR_3 = VAR_2->hEvent;
    if (!FUNC_0(VAR_3))
    {
        return VAR_0;
    }
    FUNC_1(VAR_2, sizeof(OVERLAPPED));
    VAR_2->hEvent = VAR_3;
    return VAR_1;
}
