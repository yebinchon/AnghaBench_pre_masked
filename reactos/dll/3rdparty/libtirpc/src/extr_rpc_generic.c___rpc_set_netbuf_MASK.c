
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {size_t len; size_t maxlen; int * buf; } ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;

struct netbuf *
FUNC_3(struct netbuf *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_0->len != VAR_2) {
  if (VAR_0->len)
   FUNC_1(VAR_0->buf, VAR_0->len);
  VAR_0->buf = FUNC_0(VAR_2);
  if (VAR_0->buf == ((void*)0))
   return ((void*)0);

  VAR_0->maxlen = VAR_0->len = VAR_2;
 }
 FUNC_2(VAR_0->buf, VAR_1, VAR_2);
 return VAR_0;
}
