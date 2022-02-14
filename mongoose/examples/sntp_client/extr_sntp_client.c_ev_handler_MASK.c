
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct mg_sntp_message {int time; } ;
struct mg_connection {int dummy; } ;




 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  struct mg_sntp_message *VAR_7 = (struct mg_sntp_message *) VAR_6;
  time_t VAR_8;
  (void) VAR_4;

  switch (VAR_5) {
    case 128:
      VAR_8 = FUNC_2(((void*)0));
      FUNC_1(VAR_3, "Local time: %s", FUNC_0(&VAR_8));
      VAR_8 = (time_t) VAR_7->time;
      FUNC_1(VAR_3, "Time from %s: %s", VAR_0, FUNC_0(&VAR_8));
      VAR_1 = 1;
      break;
    case 129:
      FUNC_1(VAR_2, "Failed to get time\n");
      VAR_1 = 1;
      break;
  }
}
