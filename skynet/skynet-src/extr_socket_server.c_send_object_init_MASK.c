
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* size ) (void const*) ;int free; void const* (* buffer ) (void const*) ;} ;
struct socket_server {TYPE_1__ soi; } ;
struct send_object {size_t sz; int free_func; void const* buffer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 void const* FUNC_0 (void const*) ;
 size_t FUNC_1 (void const*) ;

__attribute__((used)) static inline bool
FUNC_2(struct socket_server *VAR_2, struct send_object *VAR_3, const void *VAR_4, size_t VAR_5) {
 if (VAR_5 == VAR_1) {
  VAR_3->buffer = VAR_2->soi.buffer(VAR_4);
  VAR_3->sz = VAR_2->soi.size(VAR_4);
  VAR_3->free_func = VAR_2->soi.free;
  return 1;
 } else {
  VAR_3->buffer = VAR_4;
  VAR_3->sz = VAR_5;
  VAR_3->free_func = VAR_0;
  return 0;
 }
}
