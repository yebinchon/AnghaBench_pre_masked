
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_sendbuffer {int id; size_t sz; int type; void const* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct socket_sendbuffer *VAR_2, int VAR_3, const void *VAR_4, int VAR_5) {
 VAR_2->id = VAR_3;
 VAR_2->buffer = VAR_4;
 if (VAR_5 < 0) {
  VAR_2->type = VAR_1;
 } else {
  VAR_2->type = VAR_0;
 }
 VAR_2->sz = (size_t)VAR_5;
}
