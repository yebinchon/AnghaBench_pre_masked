
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct remote_message_header {int session; int destination; int source; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(const struct remote_message_header * VAR_0, uint8_t * VAR_1) {
 FUNC_0(VAR_1 , VAR_0->source);
 FUNC_0(VAR_1+4 , VAR_0->destination);
 FUNC_0(VAR_1+8 , VAR_0->session);
}
