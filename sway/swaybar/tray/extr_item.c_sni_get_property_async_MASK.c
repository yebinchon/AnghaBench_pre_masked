
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_sni {int watcher_id; int interface; int path; int service; TYPE_1__* tray; } ;
struct get_property_data {char const* prop; char const* type; void* dest; struct swaybar_sni* sni; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct get_property_data* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ,int ,char*,char*,int ,struct get_property_data*,char*,int ,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,char const*,int ) ;

__attribute__((used)) static void FUNC_4(struct swaybar_sni *VAR_2, const char *VAR_3,
  const char *VAR_4, void *VAR_5) {
 struct get_property_data *VAR_6 = FUNC_0(sizeof(struct get_property_data));
 VAR_6->sni = VAR_2;
 VAR_6->prop = VAR_3;
 VAR_6->type = VAR_4;
 VAR_6->dest = VAR_5;
 int VAR_7 = FUNC_1(VAR_2->tray->bus, ((void*)0), VAR_2->service,
   VAR_2->path, "org.freedesktop.DBus.Properties", "Get",
   VAR_1, VAR_6, "ss", VAR_2->interface, VAR_3);
 if (VAR_7 < 0) {
  FUNC_3(VAR_0, "%s %s: %s", VAR_2->watcher_id, VAR_3, FUNC_2(-VAR_7));
 }
}
