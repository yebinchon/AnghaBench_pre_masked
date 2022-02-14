
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct idletimer_tg_info {int timeout; TYPE_4__* timer; int label; } ;
struct TYPE_8__ {int mode; TYPE_4__* name; } ;
struct TYPE_7__ {TYPE_2__ attr; int show; } ;
struct TYPE_9__ {int refcnt; TYPE_1__ attr; int timer; int work; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int,int ) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct idletimer_tg_info *VAR_8)
{
 int VAR_9;

 VAR_8->timer = FUNC_3(sizeof(*VAR_8->timer), VAR_1);
 if (!VAR_8->timer) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_1(VAR_8->label, sizeof(VAR_8->label));
 if (VAR_9 < 0)
  goto out_free_timer;

 FUNC_9(&VAR_8->timer->attr.attr);
 VAR_8->timer->attr.attr.name = FUNC_4(VAR_8->label, VAR_1);
 if (!VAR_8->timer->attr.attr.name) {
  VAR_9 = -VAR_0;
  goto out_free_timer;
 }
 VAR_8->timer->attr.attr.mode = 0444;
 VAR_8->timer->attr.show = VAR_5;

 VAR_9 = FUNC_10(VAR_3, &VAR_8->timer->attr.attr);
 if (VAR_9 < 0) {
  FUNC_8("couldn't add file to sysfs");
  goto out_free_attr;
 }

 FUNC_5(&VAR_8->timer->entry, &VAR_4);

 FUNC_11(&VAR_8->timer->timer, VAR_2, 0);
 VAR_8->timer->refcnt = 1;

 FUNC_0(&VAR_8->timer->work, VAR_6);

 FUNC_6(&VAR_8->timer->timer,
    FUNC_7(VAR_8->timeout * 1000) + VAR_7);

 return 0;

out_free_attr:
 FUNC_2(VAR_8->timer->attr.attr.name);
out_free_timer:
 FUNC_2(VAR_8->timer);
out:
 return VAR_9;
}
