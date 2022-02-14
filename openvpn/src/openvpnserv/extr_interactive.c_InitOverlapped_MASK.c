
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hEvent; } ;
typedef int OVERLAPPED ;
typedef TYPE_1__* LPOVERLAPPED ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static HANDLE
FUNC_2(LPOVERLAPPED VAR_2)
{
    FUNC_1(VAR_2, sizeof(OVERLAPPED));
    VAR_2->hEvent = FUNC_0(((void*)0), VAR_1, VAR_0, ((void*)0));
    return VAR_2->hEvent;
}
