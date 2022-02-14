
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; size_t alloc; char* buf; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,size_t) ;

ssize_t FUNC_4(struct strbuf *VAR_0, int VAR_1, ssize_t VAR_2)
{
 size_t VAR_3 = VAR_0->len;
 size_t VAR_4 = VAR_0->alloc;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_2 ? VAR_2 : 8192);
 if (VAR_5)
  return VAR_5;

 for (;;) {
  ssize_t VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_0->buf + VAR_0->len, VAR_0->alloc - VAR_0->len - 1);
  if (VAR_6 < 0) {
   if (VAR_4 == 0)
    FUNC_2(VAR_0);
   else
    FUNC_3(VAR_0, VAR_3);
   return VAR_6;
  }
  if (!VAR_6)
   break;
  VAR_0->len += VAR_6;
  VAR_5 = FUNC_1(VAR_0, 8192);
  if (VAR_5)
   return VAR_5;
 }

 VAR_0->buf[VAR_0->len] = '\0';
 return VAR_0->len - VAR_3;
}
