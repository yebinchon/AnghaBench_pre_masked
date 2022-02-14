
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t len; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;

void FUNC_1(struct mbuf *VAR_0, size_t VAR_1) {
  if (VAR_1 > 0 && VAR_1 <= VAR_0->len) {
    FUNC_0(VAR_0->buf, VAR_0->buf + VAR_1, VAR_0->len - VAR_1);
    VAR_0->len -= VAR_1;
  }
}
