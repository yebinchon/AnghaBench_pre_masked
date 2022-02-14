
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct remote_message_header {void* session; void* destination; void* source; } ;


 void* FUNC_0 (int const) ;

__attribute__((used)) static inline void
FUNC_1(const uint32_t *VAR_0, struct remote_message_header *VAR_1) {
 VAR_1->source = FUNC_0(VAR_0[0]);
 VAR_1->destination = FUNC_0(VAR_0[1]);
 VAR_1->session = FUNC_0(VAR_0[2]);
}
