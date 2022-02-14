
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct gate {int max_connection; scalar_t__ id; scalar_t__ listen_id; struct gate* conn; int hash; int mp; struct skynet_context* ctx; } ;
struct connection {int max_connection; scalar_t__ id; scalar_t__ listen_id; struct connection* conn; int hash; int mp; struct skynet_context* ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gate*) ;
 int FUNC_3 (struct skynet_context*,scalar_t__) ;

void
FUNC_4(struct gate *VAR_0) {
 int VAR_1;
 struct skynet_context *VAR_2 = VAR_0->ctx;
 for (VAR_1=0;VAR_1<VAR_0->max_connection;VAR_1++) {
  struct connection *VAR_3 = &VAR_0->conn[VAR_1];
  if (VAR_3->id >=0) {
   FUNC_3(VAR_2, VAR_3->id);
  }
 }
 if (VAR_0->listen_id >= 0) {
  FUNC_3(VAR_2, VAR_0->listen_id);
 }
 FUNC_1(&VAR_0->mp);
 FUNC_0(&VAR_0->hash);
 FUNC_2(VAR_0->conn);
 FUNC_2(VAR_0);
}
