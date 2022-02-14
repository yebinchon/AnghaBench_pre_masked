
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ dwCheckPoint; scalar_t__ dwCurrentState; } ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static
VOID
FUNC_1(
    HANDLE VAR_1,
    DWORD VAR_2,
    DWORD VAR_3)
{
    if (VAR_3 > 0)
        VAR_0.dwCheckPoint += VAR_3;
    else
        VAR_0.dwCheckPoint = 0;

    VAR_0.dwCurrentState = VAR_2;
    FUNC_0(VAR_1, &VAR_0);
}
