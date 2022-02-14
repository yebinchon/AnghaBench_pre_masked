
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ Information; } ;
typedef scalar_t__ PVOID ;
typedef int NTSTATUS ;
typedef TYPE_1__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,TYPE_1__*,scalar_t__,scalar_t__,int *,int *) ;

BOOLEAN
FUNC_2(PVOID VAR_0, PVOID VAR_1, ULONG VAR_2)
{
  NTSTATUS VAR_3;
  IO_STATUS_BLOCK VAR_4;

  VAR_3 = FUNC_1(*((HANDLE *) VAR_0),
                      ((void*)0), ((void*)0), ((void*)0),
                      &VAR_4,
                      VAR_1,
                      VAR_2,
                      ((void*)0), ((void*)0));

  return FUNC_0(VAR_3) && VAR_4.Information == VAR_2;
}
