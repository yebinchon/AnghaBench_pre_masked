
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbus_sleep_info {int c; scalar_t__ pending; } ;


 int FUNC_0 (struct dbus_sleep_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct dbus_sleep_info *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->pending) {
   FUNC_3(VAR_0->pending);
   FUNC_4(VAR_0->pending);
  }

  FUNC_1(VAR_0->c);
  FUNC_2(VAR_0->c);
  FUNC_0(VAR_0);
 }
}
