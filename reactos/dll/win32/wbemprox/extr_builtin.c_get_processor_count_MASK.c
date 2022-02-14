
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
typedef int UINT ;
struct TYPE_3__ {int NumberOfProcessors; } ;
typedef TYPE_1__ SYSTEM_BASIC_INFORMATION ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static UINT FUNC_1(void)
{
    SYSTEM_BASIC_INFORMATION VAR_1;

    if (FUNC_0( VAR_0, &VAR_1, sizeof(VAR_1), ((void*)0) )) return 1;
    return VAR_1.NumberOfProcessors;
}
