
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct xt_led_info* targinfo; } ;
struct TYPE_2__ {struct xt_led_info_internal* name; } ;
struct xt_led_info_internal {int refcnt; struct xt_led_info_internal* trigger_id; int list; int timer; TYPE_1__ netfilter_led_trigger; } ;
struct xt_led_info {char* id; struct xt_led_info_internal* internal_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xt_led_info_internal*) ;
 struct xt_led_info_internal* FUNC_1 (char*,int ) ;
 struct xt_led_info_internal* FUNC_2 (int,int ) ;
 int VAR_3 ;
 struct xt_led_info_internal* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(const struct xt_tgchk_param *VAR_6)
{
 struct xt_led_info *VAR_7 = VAR_6->targinfo;
 struct xt_led_info_internal *VAR_8;
 int VAR_9;

 if (VAR_7->id[0] == '\0')
  return -VAR_0;

 FUNC_6(&VAR_4);

 VAR_8 = FUNC_3(VAR_7->id);
 if (VAR_8) {
  VAR_8->refcnt++;
  goto out;
 }

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_2(sizeof(struct xt_led_info_internal), VAR_2);
 if (!VAR_8)
  goto exit_mutex_only;

 VAR_8->trigger_id = FUNC_1(VAR_7->id, VAR_2);
 if (!VAR_8->trigger_id)
  goto exit_internal_alloc;

 VAR_8->refcnt = 1;
 VAR_8->netfilter_led_trigger.name = VAR_8->trigger_id;

 VAR_9 = FUNC_4(&VAR_8->netfilter_led_trigger);
 if (VAR_9) {
  FUNC_8("Trigger name is already in use.\n");
  goto exit_alloc;
 }




 FUNC_9(&VAR_8->timer, VAR_3, 0);

 FUNC_5(&VAR_8->list, &VAR_5);

out:
 FUNC_7(&VAR_4);

 VAR_7->internal_data = VAR_8;

 return 0;

exit_alloc:
 FUNC_0(VAR_8->trigger_id);

exit_internal_alloc:
 FUNC_0(VAR_8);

exit_mutex_only:
 FUNC_7(&VAR_4);

 return VAR_9;
}
