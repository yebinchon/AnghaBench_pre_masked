
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_4__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ CurrentByteOffset; } ;
typedef scalar_t__ PVOID ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_3__ FILE_POSITION_INFORMATION ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__,int,int ) ;

BOOLEAN
FUNC_2(PVOID VAR_2, ULONG_PTR VAR_3)
{

  IO_STATUS_BLOCK VAR_4;
  FILE_POSITION_INFORMATION VAR_5;

  VAR_5.CurrentByteOffset.u.HighPart = 0;
  VAR_5.CurrentByteOffset.u.LowPart = VAR_3;
  VAR_1 = FUNC_1(*((HANDLE *) VAR_2),
                                &VAR_4,
                                (PVOID) &VAR_5,
                                sizeof(FILE_POSITION_INFORMATION),
                                VAR_0);

  return FUNC_0(VAR_1);
}
