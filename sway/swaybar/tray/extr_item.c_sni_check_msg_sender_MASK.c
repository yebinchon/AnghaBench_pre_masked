
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_sni {char* service; int watcher_id; } ;
typedef int sd_bus_message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct swaybar_sni *VAR_2, sd_bus_message *VAR_3,
  const char *VAR_4) {
 bool VAR_5 =
  FUNC_0(FUNC_1(VAR_3)) & VAR_0;
 if (VAR_2->service[0] == ':' || VAR_5) {
  FUNC_2(VAR_1, "%s has new %s", VAR_2->watcher_id, VAR_4);
  return 1;
 } else {
  FUNC_2(VAR_1, "%s may have new %s", VAR_2->watcher_id, VAR_4);
  return 0;
 }
}
