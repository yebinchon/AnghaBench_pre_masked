
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {int event_fd; struct socket* slot; } ;
struct TYPE_2__ {int size; } ;
struct socket {scalar_t__ type; int id; int fd; int sending; int protocol; uintptr_t opaque; int stat; scalar_t__ dw_size; int * dw_buffer; int low; int high; scalar_t__ warn_size; scalar_t__ wb_size; TYPE_1__ p; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int ,int,struct socket*) ;

__attribute__((used)) static struct socket *
FUNC_6(struct socket_server *VAR_3, int VAR_4, int VAR_5, int VAR_6, uintptr_t VAR_7, bool VAR_8) {
 struct socket * VAR_9 = &VAR_3->slot[FUNC_0(VAR_4)];
 FUNC_2(VAR_9->type == VAR_2);

 if (VAR_8) {
  if (FUNC_5(VAR_3->event_fd, VAR_5, VAR_9)) {
   VAR_9->type = VAR_1;
   return ((void*)0);
  }
 }

 VAR_9->id = VAR_4;
 VAR_9->fd = VAR_5;
 VAR_9->sending = FUNC_1(VAR_4) << 16 | 0;
 VAR_9->protocol = VAR_6;
 VAR_9->p.size = VAR_0;
 VAR_9->opaque = VAR_7;
 VAR_9->wb_size = 0;
 VAR_9->warn_size = 0;
 FUNC_3(&VAR_9->high);
 FUNC_3(&VAR_9->low);
 VAR_9->dw_buffer = ((void*)0);
 VAR_9->dw_size = 0;
 FUNC_4(&VAR_9->stat, 0, sizeof(VAR_9->stat));
 return VAR_9;
}
