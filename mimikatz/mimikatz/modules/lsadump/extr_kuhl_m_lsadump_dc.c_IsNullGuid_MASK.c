
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ Data1; scalar_t__ Data2; scalar_t__ Data3; scalar_t__ Data4; } ;
typedef TYPE_1__ GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(GUID* VAR_2)
{
 if (VAR_2->Data1 == 0 && VAR_2->Data2 == 0 && VAR_2->Data3 == 0 &&
  ((ULONG *)VAR_2->Data4)[0] == 0 && ((ULONG *)VAR_2->Data4)[1] == 0)
 {
  return VAR_1;
 }
 return VAR_0;
}
