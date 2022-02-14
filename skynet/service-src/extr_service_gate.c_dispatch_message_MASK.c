
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
struct gate {int mp; struct skynet_context* ctx; int header_size; } ;
struct connection {int buffer; } ;


 int FUNC_0 (struct gate*,struct connection*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,void*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct skynet_context*,char*) ;
 int FUNC_6 (struct skynet_context*,int) ;

__attribute__((used)) static void
FUNC_7(struct gate *VAR_0, struct connection *VAR_1, int VAR_2, void * VAR_3, int VAR_4) {
 FUNC_2(&VAR_1->buffer,&VAR_0->mp, VAR_3, VAR_4);
 for (;;) {
  int VAR_5 = FUNC_3(&VAR_1->buffer, &VAR_0->mp, VAR_0->header_size);
  if (VAR_5 < 0) {
   return;
  } else if (VAR_5 > 0) {
   if (VAR_5 >= 0x1000000) {
    struct skynet_context * VAR_6 = VAR_0->ctx;
    FUNC_1(&VAR_1->buffer,&VAR_0->mp);
    FUNC_6(VAR_6, VAR_2);
    FUNC_5(VAR_6, "Recv socket message > 16M");
    return;
   } else {
    FUNC_0(VAR_0, VAR_1, VAR_5);
    FUNC_4(&VAR_1->buffer);
   }
  }
 }
}
