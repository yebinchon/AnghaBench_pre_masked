
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct service_info {int name; } ;
struct dbus_sleep_info {int type; struct service_info const* service; int c; } ;
typedef enum service_type { ____Placeholder_service_type } service_type ;
struct TYPE_4__ {int message; } ;
typedef TYPE_1__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dbus_sleep_info*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct dbus_sleep_info* FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct dbus_sleep_info*) ;
 size_t VAR_3 ;
 struct service_info* VAR_4 ;

struct dbus_sleep_info *FUNC_7(void)
{
 struct dbus_sleep_info *VAR_5 = FUNC_2(sizeof(*VAR_5));
 DBusError VAR_6;

 FUNC_5(&VAR_6);

 VAR_5->c = FUNC_3(VAR_0, &VAR_6);
 if (!VAR_5->c) {
  FUNC_1(VAR_2, "Could not create dbus connection: %s",
       VAR_6.message);
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 for (size_t VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  const struct service_info *VAR_8 = &VAR_4[VAR_7];

  if (!VAR_8->name)
   continue;

  if (FUNC_4(VAR_5->c, VAR_8->name, ((void*)0))) {
   FUNC_1(VAR_1, "Found dbus service: %s",
        VAR_8->name);
   VAR_5->service = VAR_8;
   VAR_5->type = (enum service_type)VAR_7;
   return VAR_5;
  }
 }

 FUNC_6(VAR_5);
 return ((void*)0);
}
