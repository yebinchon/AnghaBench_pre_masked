
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct swaybar_watcher {TYPE_1__* items; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ items; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,char**) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_0, const char *VAR_1,
  const char *VAR_2, const char *VAR_3, sd_bus_message *VAR_4,
  void *VAR_5, sd_bus_error *VAR_6) {
 struct swaybar_watcher *VAR_7 = VAR_5;
 FUNC_0(VAR_7->items, ((void*)0));
 int VAR_8 = FUNC_2(VAR_4, (char **)VAR_7->items->items);
 FUNC_1(VAR_7->items, VAR_7->items->length - 1);
 return VAR_8;
}
