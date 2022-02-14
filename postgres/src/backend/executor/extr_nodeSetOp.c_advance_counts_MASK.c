
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numLeft; int numRight; } ;
typedef TYPE_1__* SetOpStatePerGroup ;



__attribute__((used)) static inline void
FUNC_0(SetOpStatePerGroup VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0->numRight++;
 else
  VAR_0->numLeft++;
}
