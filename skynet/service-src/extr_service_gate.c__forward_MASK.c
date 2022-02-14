
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct gate {int client_tag; int watchdog; int mp; int broker; struct skynet_context* ctx; } ;
struct connection {int id; int buffer; int agent; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct skynet_context*,int ,int ,int,int,char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct gate *VAR_2, struct connection * VAR_3, int VAR_4) {
 struct skynet_context * VAR_5 = VAR_2->ctx;
 int VAR_6 = VAR_3->id;
 if (VAR_6 <= 0) {

  return;
 }
 if (VAR_2->broker) {
  void * VAR_7 = FUNC_1(VAR_4);
  FUNC_0(&VAR_3->buffer,&VAR_2->mp,VAR_7, VAR_4);
  FUNC_2(VAR_5, 0, VAR_2->broker, VAR_2->client_tag | VAR_0, VAR_6, VAR_7, VAR_4);
  return;
 }
 if (VAR_3->agent) {
  void * VAR_8 = FUNC_1(VAR_4);
  FUNC_0(&VAR_3->buffer,&VAR_2->mp,VAR_8, VAR_4);
  FUNC_2(VAR_5, VAR_3->client, VAR_3->agent, VAR_2->client_tag | VAR_0, VAR_6 , VAR_8, VAR_4);
 } else if (VAR_2->watchdog) {
  char * VAR_9 = FUNC_1(VAR_4 + 32);
  int VAR_10 = FUNC_3(VAR_9,32,"%d data ",VAR_3->id);
  FUNC_0(&VAR_3->buffer,&VAR_2->mp,VAR_9+VAR_10,VAR_4);
  FUNC_2(VAR_5, 0, VAR_2->watchdog, VAR_1 | VAR_0, VAR_6, VAR_9, VAR_4 + VAR_10);
 }
}
