
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_socket_message {int type; int id; int ud; int buffer; } ;
struct skynet_context {int dummy; } ;
struct gate {int listen_id; int hash; struct connection* conn; int mp; struct skynet_context* ctx; } ;
struct connection {int id; char* remote_name; int buffer; } ;
 int FUNC_0 (struct gate*,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct gate*,struct connection*,int,int ,int) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,struct skynet_socket_message const*,int) ;
 int FUNC_9 (struct connection*,int ,int) ;
 int FUNC_10 (struct skynet_context*,char*,int,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct skynet_context*,int) ;

__attribute__((used)) static void
FUNC_13(struct gate *VAR_0, const struct skynet_socket_message * VAR_1, int VAR_2) {
 struct skynet_context * VAR_3 = VAR_0->ctx;
 switch(VAR_1->type) {
 case 130: {
  int VAR_4 = FUNC_6(&VAR_0->hash, VAR_1->id);
  if (VAR_4>=0) {
   struct connection *VAR_5 = &VAR_0->conn[VAR_4];
   FUNC_3(VAR_0, VAR_5, VAR_1->id, VAR_1->buffer, VAR_1->ud);
  } else {
   FUNC_10(VAR_3, "Drop unknown connection %d message", VAR_1->id);
   FUNC_12(VAR_3, VAR_1->id);
   FUNC_11(VAR_1->buffer);
  }
  break;
 }
 case 131: {
  if (VAR_1->id == VAR_0->listen_id) {

   break;
  }
  int VAR_6 = FUNC_6(&VAR_0->hash, VAR_1->id);
  if (VAR_6<0) {
   FUNC_10(VAR_3, "Close unknown connection %d", VAR_1->id);
   FUNC_12(VAR_3, VAR_1->id);
  }
  break;
 }
 case 132:
 case 129: {
  int VAR_7 = FUNC_7(&VAR_0->hash, VAR_1->id);
  if (VAR_7>=0) {
   struct connection *VAR_8 = &VAR_0->conn[VAR_7];
   FUNC_2(&VAR_8->buffer,&VAR_0->mp);
   FUNC_9(VAR_8, 0, sizeof(*VAR_8));
   VAR_8->id = -1;
   FUNC_0(VAR_0, "%d close", VAR_1->id);
  }
  break;
 }
 case 133:

  FUNC_1(VAR_0->listen_id == VAR_1->id);
  if (FUNC_4(&VAR_0->hash)) {
   FUNC_12(VAR_3, VAR_1->ud);
  } else {
   struct connection *VAR_9 = &VAR_0->conn[FUNC_5(&VAR_0->hash, VAR_1->ud)];
   if (VAR_2 >= sizeof(VAR_9->remote_name)) {
    VAR_2 = sizeof(VAR_9->remote_name) - 1;
   }
   VAR_9->id = VAR_1->ud;
   FUNC_8(VAR_9->remote_name, VAR_1+1, VAR_2);
   VAR_9->remote_name[VAR_2] = '\0';
   FUNC_0(VAR_0, "%d open %d %s:0",VAR_9->id, VAR_9->id, VAR_9->remote_name);
   FUNC_10(VAR_3, "socket open: %x", VAR_9->id);
  }
  break;
 case 128:
  FUNC_10(VAR_3, "fd (%d) send buffer (%d)K", VAR_1->id, VAR_1->ud);
  break;
 }
}
