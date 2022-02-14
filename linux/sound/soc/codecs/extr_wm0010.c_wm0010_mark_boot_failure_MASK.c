
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm0010_priv {int state; int boot_failed; int dev; int irq_lock; } ;
typedef enum wm0010_state { ____Placeholder_wm0010_state } wm0010_state ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct wm0010_priv *VAR_0)
{
 enum wm0010_state VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->irq_lock, VAR_2);
 VAR_1 = VAR_0->state;
 FUNC_2(&VAR_0->irq_lock, VAR_2);

 FUNC_0(VAR_0->dev, "Failed to transition from `%s' state to `%s' state\n",
  FUNC_3(VAR_1), FUNC_3(VAR_1 + 1));

 VAR_0->boot_failed = 1;
}
