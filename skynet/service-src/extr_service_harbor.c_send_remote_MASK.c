
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct socket_sendbuffer {int id; size_t sz; int * buffer; int type; } ;
struct skynet_context {int dummy; } ;
struct remote_message_header {int destination; int source; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct remote_message_header*,int *) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (struct skynet_context*,char*,int ,int ) ;
 int FUNC_3 (struct skynet_context*,struct socket_sendbuffer*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct skynet_context * VAR_2, int VAR_3, const char * VAR_4, size_t VAR_5, struct remote_message_header * VAR_6) {
 size_t VAR_7 = VAR_5+sizeof(*VAR_6);
 if (VAR_7 > VAR_1) {
  FUNC_2(VAR_2, "remote message from :%08x to :%08x is too large.", VAR_6->source, VAR_6->destination);
  return;
 }
 uint8_t VAR_8[VAR_7+4];
 FUNC_4(VAR_8, (uint32_t)VAR_7);
 FUNC_1(VAR_8+4, VAR_4, VAR_5);
 FUNC_0(VAR_6, VAR_8+4+VAR_5);

 struct socket_sendbuffer VAR_9;
 VAR_9.id = VAR_3;
 VAR_9.type = VAR_0;
 VAR_9.buffer = VAR_8;
 VAR_9.sz = VAR_7+4;


 FUNC_3(VAR_2, &VAR_9);
}
