
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktgen_dev {TYPE_1__* flows; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct pktgen_dev *VAR_1, int VAR_2)
{
 return !!(VAR_1->flows[VAR_2].flags & VAR_0);
}
