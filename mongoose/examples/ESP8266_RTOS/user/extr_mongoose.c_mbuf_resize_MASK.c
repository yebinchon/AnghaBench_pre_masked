
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t size; size_t len; char* buf; } ;


 scalar_t__ FUNC_0 (char*,size_t) ;

void FUNC_1(struct mbuf *VAR_0, size_t VAR_1) {
  if (VAR_1 > VAR_0->size || (VAR_1 < VAR_0->size && VAR_1 >= VAR_0->len)) {
    char *VAR_2 = (char *) FUNC_0(VAR_0->buf, VAR_1);





    if (VAR_2 == ((void*)0) && VAR_1 != 0) return;
    VAR_0->buf = VAR_2;
    VAR_0->size = VAR_1;
  }
}
