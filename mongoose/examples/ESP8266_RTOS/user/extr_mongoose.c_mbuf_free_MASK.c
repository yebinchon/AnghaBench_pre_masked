
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int * buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mbuf*,int ) ;

void FUNC_2(struct mbuf *VAR_0) {
  if (VAR_0->buf != ((void*)0)) {
    FUNC_0(VAR_0->buf);
    FUNC_1(VAR_0, 0);
  }
}
