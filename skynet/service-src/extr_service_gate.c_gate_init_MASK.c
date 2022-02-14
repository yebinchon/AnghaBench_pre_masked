
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct skynet_context {int dummy; } ;
struct gate {int max_connection; int client_tag; int header_size; TYPE_1__* conn; int hash; struct skynet_context* ctx; int watchdog; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct skynet_context*,struct gate*,int ) ;
 int FUNC_3 (struct skynet_context*,char*,...) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (struct skynet_context*,char*) ;
 int FUNC_6 (char*,char*,char*,char*,char*,int*,int*) ;
 int FUNC_7 (struct gate*,char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(struct gate *VAR_2 , struct skynet_context * VAR_3, char * VAR_4) {
 if (VAR_4 == ((void*)0))
  return 1;
 int VAR_5 = 0;
 int VAR_6 = FUNC_8(VAR_4)+1;
 char VAR_7[VAR_6];
 char VAR_8[VAR_6];
 int VAR_9 = 0;
 char VAR_10;
 int VAR_11 = FUNC_6(VAR_4, "%c %s %s %d %d", &VAR_10, VAR_7, VAR_8, &VAR_9, &VAR_5);
 if (VAR_11<4) {
  FUNC_3(VAR_3, "Invalid gate parm %s",VAR_4);
  return 1;
 }
 if (VAR_5 <=0 ) {
  FUNC_3(VAR_3, "Need max connection");
  return 1;
 }
 if (VAR_10 != 'S' && VAR_10 !='L') {
  FUNC_3(VAR_3, "Invalid data header style");
  return 1;
 }

 if (VAR_9 == 0) {
  VAR_9 = VAR_0;
 }
 if (VAR_7[0] == '!') {
  VAR_2->watchdog = 0;
 } else {
  VAR_2->watchdog = FUNC_5(VAR_3, VAR_7);
  if (VAR_2->watchdog == 0) {
   FUNC_3(VAR_3, "Invalid watchdog %s",VAR_7);
   return 1;
  }
 }

 VAR_2->ctx = VAR_3;

 FUNC_0(&VAR_2->hash, VAR_5);
 VAR_2->conn = FUNC_4(VAR_5 * sizeof(struct connection));
 FUNC_1(VAR_2->conn, 0, VAR_5 *sizeof(struct connection));
 VAR_2->max_connection = VAR_5;
 int VAR_12;
 for (VAR_12=0;VAR_12<VAR_5;VAR_12++) {
  VAR_2->conn[VAR_12].id = -1;
 }

 VAR_2->client_tag = VAR_9;
 VAR_2->header_size = VAR_10=='S' ? 2 : 4;

 FUNC_2(VAR_3,VAR_2,VAR_1);

 return FUNC_7(VAR_2,VAR_8);
}
