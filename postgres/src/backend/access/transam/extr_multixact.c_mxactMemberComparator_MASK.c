
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xid; scalar_t__ status; } ;
typedef TYPE_1__ MultiXactMember ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 MultiXactMember VAR_2 = *(const MultiXactMember *) VAR_0;
 MultiXactMember VAR_3 = *(const MultiXactMember *) VAR_1;

 if (VAR_2 > VAR_3)
  return 1;
 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;
 if (VAR_2 < VAR_3)
  return -1;
 return 0;
}
