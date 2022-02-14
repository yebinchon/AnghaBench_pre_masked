
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {struct socket* slot; int alloc_id; } ;
struct socket {scalar_t__ type; int id; int fd; scalar_t__ udpconnecting; int protocol; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct socket_server *VAR_4) {
 int VAR_5;
 for (VAR_5=0;VAR_5<VAR_0;VAR_5++) {
  int VAR_6 = FUNC_2(&(VAR_4->alloc_id));
  if (VAR_6 < 0) {
   VAR_6 = FUNC_0(&(VAR_4->alloc_id), 0x7fffffff);
  }
  struct socket *VAR_7 = &VAR_4->slot[FUNC_3(VAR_6)];
  if (VAR_7->type == VAR_2) {
   if (FUNC_1(&VAR_7->type, VAR_2, VAR_3)) {
    VAR_7->id = VAR_6;
    VAR_7->protocol = VAR_1;


    VAR_7->udpconnecting = 0;
    VAR_7->fd = -1;
    return VAR_6;
   } else {

    --VAR_5;
   }
  }
 }
 return -1;
}
