
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct completion {scalar_t__ done; TYPE_1__ wait; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

bool FUNC_3(struct completion *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3 = 1;







 if (!FUNC_0(VAR_1->done))
  return 0;

 FUNC_1(&VAR_1->wait.lock, VAR_2);
 if (!VAR_1->done)
  VAR_3 = 0;
 else if (VAR_1->done != VAR_0)
  VAR_1->done--;
 FUNC_2(&VAR_1->wait.lock, VAR_2);
 return VAR_3;
}
