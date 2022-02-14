
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Information; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int *,TYPE_1__*,scalar_t__,int ,int *,int *) ;

BOOLEAN
FUNC_2(PVOID VAR_1, PVOID VAR_2, ULONG VAR_3)
{

  IO_STATUS_BLOCK VAR_4;

  VAR_0 = FUNC_1(*((HANDLE *) VAR_1),
                      ((void*)0), ((void*)0), ((void*)0),
                      &VAR_4,
                      VAR_2,
                      VAR_3,
                      ((void*)0), ((void*)0));

  return FUNC_0(VAR_0) && VAR_4.Information == VAR_3;
}
