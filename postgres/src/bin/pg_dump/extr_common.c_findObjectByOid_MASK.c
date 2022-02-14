
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_1__ catId; } ;
typedef int Oid ;
typedef TYPE_2__ DumpableObject ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static DumpableObject *
FUNC_1(Oid VAR_0, DumpableObject **VAR_1, int VAR_2)
{
 DumpableObject **VAR_3;
 DumpableObject **VAR_4;
 if (VAR_2 <= 0)
  return ((void*)0);
 VAR_3 = VAR_1;
 VAR_4 = VAR_1 + (VAR_2 - 1);
 while (VAR_3 <= VAR_4)
 {
  DumpableObject **VAR_5;
  int VAR_6;

  VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  VAR_6 = FUNC_0((*VAR_5)->catId.oid, VAR_0);
  if (VAR_6 == 0)
   return *VAR_5;
  else if (VAR_6 < 0)
   VAR_3 = VAR_5 + 1;
  else
   VAR_4 = VAR_5 - 1;
 }
 return ((void*)0);
}
