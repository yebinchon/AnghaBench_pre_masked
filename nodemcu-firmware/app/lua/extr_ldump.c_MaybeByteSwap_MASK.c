
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int little_endian; } ;
struct TYPE_5__ {TYPE_1__ target; } ;
typedef TYPE_2__ DumpState ;



__attribute__((used)) static void FUNC_0(char *VAR_0, size_t VAR_1, DumpState *VAR_2)
{
 int VAR_3=1;
 int VAR_4 = *(char*)&VAR_3;
 if (VAR_4 != VAR_2->target.little_endian)
 {
  unsigned long VAR_5;
  for (VAR_5=0; VAR_5<VAR_1/2; VAR_5++)
  {
   char VAR_6 = VAR_0[VAR_5];
   VAR_0[VAR_5] = VAR_0[VAR_1-1-VAR_5];
   VAR_0[VAR_1-1-VAR_5] = VAR_6;
  }
 }
}
