
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdspm {TYPE_1__* midi; } ;
struct TYPE_2__ {int statusOut; } ;


 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static inline int FUNC_1 (struct hdspm *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->midi[VAR_1].statusOut) & 0xFF;

 if (VAR_2 < 128)
  return 128 - VAR_2;
 else
  return 0;
}
