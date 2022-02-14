
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar {int mode_pango_markup; int * mode; int visible_by_mode; int ipc_event_socketfd; } ;
struct ipc_response {int type; int payload; } ;
typedef int json_object ;






 int VAR_0 ;
 int FUNC_0 (struct swaybar*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipc_response*) ;
 int FUNC_3 (struct swaybar*,int *) ;
 int FUNC_4 (struct swaybar*,int ,int *) ;
 int FUNC_5 (struct swaybar*) ;
 struct ipc_response* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int **) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (char const*,char*) ;
 int * FUNC_13 (char const*) ;
 int FUNC_14 (int ,char*) ;

bool FUNC_15(struct swaybar *VAR_1) {
 struct ipc_response *VAR_2 = FUNC_6(VAR_1->ipc_event_socketfd);
 if (!VAR_2) {
  return 0;
 }

 json_object *VAR_3 = FUNC_11(VAR_2->payload);
 if (!VAR_3) {
  FUNC_14(VAR_0, "failed to parse payload as json");
  FUNC_2(VAR_2);
  return 0;
 }

 bool VAR_4 = 1;
 switch (VAR_2->type) {
 case 128:
  VAR_4 = FUNC_5(VAR_1);
  break;
 case 129: {
  json_object *VAR_5, *VAR_6;
  if (FUNC_9(VAR_3, "change", &VAR_5)) {
   const char *VAR_7 = FUNC_8(VAR_5);
   FUNC_1(VAR_1->mode);
   VAR_1->mode = FUNC_12(VAR_7, "default") != 0 ? FUNC_13(VAR_7) : ((void*)0);
   VAR_1->visible_by_mode = VAR_1->mode != ((void*)0);
   FUNC_0(VAR_1, 0);
  } else {
   FUNC_14(VAR_0, "failed to parse response");
   VAR_4 = 0;
   break;
  }
  if (FUNC_9(VAR_3,
     "pango_markup", &VAR_6)) {
   VAR_1->mode_pango_markup = FUNC_7(VAR_6);
  }
  break;
 }
 case 131:
  VAR_4 = FUNC_4(VAR_1, VAR_2->payload, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_3(VAR_1, VAR_3);
  break;
 default:
  VAR_4 = 0;
  break;
 }
 FUNC_10(VAR_3);
 FUNC_2(VAR_2);
 return VAR_4;
}
