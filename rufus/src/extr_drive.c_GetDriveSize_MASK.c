
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int geometry ;
struct TYPE_3__ {int QuadPart; } ;
struct TYPE_4__ {TYPE_1__ DiskSize; } ;
typedef TYPE_2__* PDISK_GEOMETRY_EX ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ,int *,int ,int *,int,scalar_t__*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;

uint64_t FUNC_3(DWORD VAR_4)
{
 BOOL VAR_5;
 HANDLE VAR_6;
 DWORD VAR_7;
 BYTE VAR_8[256];
 PDISK_GEOMETRY_EX VAR_9 = (PDISK_GEOMETRY_EX)(void*)VAR_8;

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_0, VAR_3);
 if (VAR_6 == VAR_1)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_6, VAR_2,
  ((void*)0), 0, VAR_8, sizeof(VAR_8), &VAR_7, ((void*)0));
 FUNC_2(VAR_6);
 if (!VAR_5 || VAR_7 <= 0)
  return 0;
 return VAR_9->DiskSize.QuadPart;
}
