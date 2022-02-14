
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int Name; scalar_t__ PageCount; int Allocated; } ;
typedef TYPE_1__* PEMS_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static VOID FUNC_1(PEMS_HANDLE VAR_1)
{
    VAR_1->Allocated = VAR_0;
    VAR_1->PageCount = 0;
    FUNC_0(VAR_1->Name, sizeof(VAR_1->Name));

}
