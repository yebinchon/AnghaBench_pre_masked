
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int* buf; size_t len; } ;


 int FUNC_0 (struct strbuf*,int) ;

int FUNC_1(struct strbuf *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2)
  return VAR_2;

 VAR_0->buf[VAR_0->len++] = VAR_1;
 VAR_0->buf[VAR_0->len] = '\0';
 return 0;
}
