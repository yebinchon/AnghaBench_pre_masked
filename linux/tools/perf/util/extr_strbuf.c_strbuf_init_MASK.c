
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; scalar_t__ alloc; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct strbuf*,scalar_t__) ;
 int VAR_0 ;

int FUNC_1(struct strbuf *VAR_1, ssize_t VAR_2)
{
 VAR_1->alloc = VAR_1->len = 0;
 VAR_1->buf = VAR_0;
 if (VAR_2)
  return FUNC_0(VAR_1, VAR_2);
 return 0;
}
