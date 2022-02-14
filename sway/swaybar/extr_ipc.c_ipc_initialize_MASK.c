
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct swaybar_config {scalar_t__ workspace_buttons; scalar_t__ binding_mode_indicator; } ;
struct swaybar {char* id; int ipc_event_socketfd; struct swaybar_config* config; int ipc_socketfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct swaybar_config*,char*) ;
 char* FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(struct swaybar *VAR_2) {
 uint32_t VAR_3 = FUNC_4(VAR_2->id);
 char *VAR_4 = FUNC_2(VAR_2->ipc_socketfd,
   VAR_0, VAR_2->id, &VAR_3);
 if (!FUNC_1(VAR_2->config, VAR_4)) {
  FUNC_0(VAR_4);
  return 0;
 }
 FUNC_0(VAR_4);

 struct swaybar_config *VAR_5 = VAR_2->config;
 char VAR_6[128];
 VAR_3 = FUNC_3(VAR_6, 128,
   "[ \"barconfig_update\" , \"bar_state_update\" %s %s ]",
   VAR_5->binding_mode_indicator ? ", \"mode\"" : "",
   VAR_5->workspace_buttons ? ", \"workspace\"" : "");
 FUNC_0(FUNC_2(VAR_2->ipc_event_socketfd,
   VAR_1, VAR_6, &VAR_3));
 return 1;
}
