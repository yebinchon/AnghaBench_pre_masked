
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_watcher {TYPE_1__* hosts; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (int *,char,int*) ;

__attribute__((used)) static int FUNC_1(sd_bus *VAR_0, const char *VAR_1,
  const char *VAR_2, const char *VAR_3, sd_bus_message *VAR_4,
  void *VAR_5, sd_bus_error *VAR_6) {
 struct swaybar_watcher *VAR_7 = VAR_5;
 int VAR_8 = VAR_7->hosts->length > 0;
 return FUNC_0(VAR_4, 'b', &VAR_8);
}
