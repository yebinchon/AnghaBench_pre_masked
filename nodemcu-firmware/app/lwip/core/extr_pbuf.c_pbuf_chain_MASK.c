
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct pbuf*,struct pbuf*) ;
 int FUNC_2 (struct pbuf*) ;

void
FUNC_3(struct pbuf *VAR_2, struct pbuf *VAR_3)
{
  FUNC_1(VAR_2, VAR_3);

  FUNC_2(VAR_3);
  FUNC_0(VAR_1 | VAR_0, ("pbuf_chain: %p references %p\n", (void )VAR_2, (void *)VAR_3));
}
