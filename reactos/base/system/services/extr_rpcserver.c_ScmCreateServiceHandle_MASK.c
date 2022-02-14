
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Tag; } ;
struct TYPE_5__ {int ServiceEntry; TYPE_1__ Handle; } ;
typedef int SERVICE_HANDLE ;
typedef scalar_t__ SC_HANDLE ;
typedef TYPE_2__* PSERVICE_HANDLE ;
typedef int PSERVICE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static DWORD
FUNC_2(PSERVICE VAR_4,
                       SC_HANDLE *VAR_5)
{
    PSERVICE_HANDLE VAR_6;

    VAR_6 = FUNC_1(FUNC_0(),
                    VAR_2,
                    sizeof(SERVICE_HANDLE));
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_6->Handle.Tag = VAR_3;

    VAR_6->ServiceEntry = VAR_4;

    *VAR_5 = (SC_HANDLE)VAR_6;

    return VAR_1;
}
