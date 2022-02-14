
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbus_sleep_info {scalar_t__ id; int type; int c; int * pending; TYPE_1__* service; } ;
typedef int dbus_uint32_t ;
typedef scalar_t__ dbus_bool_t ;
struct TYPE_2__ {char* uninhibit; int name; int path; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int **,int) ;
 scalar_t__ FUNC_5 (int *,int ,...) ;
 scalar_t__ FUNC_6 (int *,int *,int ,scalar_t__*,int ) ;
 int * FUNC_7 (int ,int ,int ,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct dbus_sleep_info *VAR_4, const char *VAR_5,
   bool VAR_6)
{
 DBusMessage *VAR_7;
 const char *VAR_8;
 dbus_bool_t VAR_9;

 if (VAR_4->pending) {

  FUNC_9(VAR_4->pending);
  VAR_7 = FUNC_10(VAR_4->pending);
  FUNC_11(VAR_4->pending);
  VAR_4->pending = ((void*)0);

  if (VAR_7) {
   VAR_9 = FUNC_6(VAR_7, ((void*)0),
       VAR_2,
       &VAR_4->id,
       VAR_0);
   if (!VAR_9)
    VAR_4->id = 0;
   FUNC_8(VAR_7);
  }
 }

 if (VAR_6 == !!VAR_4->id)
  return;

 VAR_8 = VAR_6 ? "Inhibit" : VAR_4->service->uninhibit;

 VAR_7 = FUNC_7(VAR_4->service->name,
          VAR_4->service->path,
          VAR_4->service->name, VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_3, "dbus_message_new_method_call failed");
  return;
 }

 if (VAR_6) {
  const char *VAR_10 = "libobs";
  dbus_uint32_t VAR_11 = 0xC;
  dbus_uint32_t VAR_12 = 0;

  FUNC_0(VAR_4->id == 0);

  switch (VAR_4->type) {
  case 128:
  case 129:
   VAR_9 = FUNC_5(
    VAR_7, VAR_1, &VAR_10,
    VAR_2, &VAR_12, VAR_1,
    &VAR_5, VAR_2, &VAR_11,
    VAR_0);
   break;
  default:
   VAR_9 = FUNC_5(
    VAR_7, VAR_1, &VAR_10,
    VAR_1, &VAR_5, VAR_0);
  }

  if (VAR_9) {
   VAR_9 = FUNC_4(
    VAR_4->c, VAR_7, &VAR_4->pending, -1);
   if (!VAR_9)
    VAR_4->pending = ((void*)0);
  }
 } else {
  FUNC_0(VAR_4->id != 0);
  VAR_9 = FUNC_5(
   VAR_7, VAR_2, &VAR_4->id, VAR_0);
  if (VAR_9)
   VAR_9 = FUNC_3(VAR_4->c, VAR_7, ((void*)0));
  if (!VAR_9)
   VAR_4->id = 0;
 }

 FUNC_2(VAR_4->c);
 FUNC_8(VAR_7);
}
