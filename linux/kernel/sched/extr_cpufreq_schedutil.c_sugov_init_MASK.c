
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct sugov_tunables {TYPE_2__ attr_set; int rate_limit_us; } ;
struct sugov_policy {struct sugov_tunables* tunables; int tunables_hook; } ;
struct cpufreq_policy {struct sugov_policy* governor_data; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (struct cpufreq_policy*) ;
 int FUNC_4 (struct cpufreq_policy*) ;
 struct sugov_tunables* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_12 (struct sugov_policy*) ;
 int FUNC_13 (struct sugov_policy*) ;
 struct sugov_policy* FUNC_14 (struct cpufreq_policy*) ;
 int FUNC_15 (struct sugov_policy*) ;
 struct sugov_tunables* FUNC_16 (struct sugov_policy*) ;
 int FUNC_17 (struct sugov_tunables*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_18(struct cpufreq_policy *VAR_7)
{
 struct sugov_policy *VAR_8;
 struct sugov_tunables *VAR_9;
 int VAR_10 = 0;


 if (VAR_7->governor_data)
  return -VAR_0;

 FUNC_2(VAR_7);

 VAR_8 = FUNC_14(VAR_7);
 if (!VAR_8) {
  VAR_10 = -VAR_2;
  goto disable_fast_switch;
 }

 VAR_10 = FUNC_12(VAR_8);
 if (VAR_10)
  goto free_sg_policy;

 FUNC_9(&VAR_4);

 if (VAR_3) {
  if (FUNC_0(FUNC_6())) {
   VAR_10 = -VAR_1;
   goto stop_kthread;
  }
  VAR_7->governor_data = VAR_8;
  VAR_8->tunables = VAR_3;

  FUNC_5(&VAR_3->attr_set, &VAR_8->tunables_hook);
  goto out;
 }

 VAR_9 = FUNC_16(VAR_8);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto stop_kthread;
 }

 VAR_9->rate_limit_us = FUNC_3(VAR_7);

 VAR_7->governor_data = VAR_8;
 VAR_8->tunables = VAR_9;

 VAR_10 = FUNC_7(&VAR_9->attr_set.kobj, &VAR_6,
       FUNC_4(VAR_7), "%s",
       VAR_5.name);
 if (VAR_10)
  goto fail;

out:
 FUNC_10(&VAR_4);
 return 0;

fail:
 FUNC_8(&VAR_9->attr_set.kobj);
 VAR_7->governor_data = ((void*)0);
 FUNC_17(VAR_9);

stop_kthread:
 FUNC_13(VAR_8);
 FUNC_10(&VAR_4);

free_sg_policy:
 FUNC_15(VAR_8);

disable_fast_switch:
 FUNC_1(VAR_7);

 FUNC_11("initialization failed (error %d)\n", VAR_10);
 return VAR_10;
}
