
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_ib_device {int event_handler; int list; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 struct smc_ib_device* FUNC_0 (struct ib_device*,int *) ;
 int FUNC_1 (struct ib_device*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smc_ib_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smc_ib_device*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ib_device *VAR_2, void *VAR_3)
{
 struct smc_ib_device *VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_0);
 FUNC_1(VAR_2, &VAR_0, ((void*)0));
 FUNC_6(&VAR_1.lock);
 FUNC_4(&VAR_4->list);
 FUNC_7(&VAR_1.lock);
 FUNC_5(VAR_4);
 FUNC_2(&VAR_4->event_handler);
 FUNC_3(VAR_4);
}
