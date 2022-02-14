
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int * buf; scalar_t__ size; scalar_t__ len; } ;


 int FUNC_0 (struct mbuf*,size_t) ;

void FUNC_1(struct mbuf *VAR_0, size_t VAR_1) {
  VAR_0->len = VAR_0->size = 0;
  VAR_0->buf = ((void*)0);
  FUNC_0(VAR_0, VAR_1);
}
