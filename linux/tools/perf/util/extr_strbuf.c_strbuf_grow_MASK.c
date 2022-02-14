
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; size_t alloc; char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 char* FUNC_1 (char*,size_t) ;

int FUNC_2(struct strbuf *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 size_t VAR_5 = VAR_2->len + VAR_3 + 1;

 if (VAR_5 < VAR_2->alloc)
  return 0;

 if (VAR_5 <= VAR_2->len)
  return -VAR_0;

 if (FUNC_0(VAR_2->alloc) > VAR_5)
  VAR_5 = FUNC_0(VAR_2->alloc);





 VAR_4 = FUNC_1(VAR_2->alloc ? VAR_2->buf : ((void*)0), VAR_5 * sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_1;

 VAR_2->buf = VAR_4;
 VAR_2->alloc = VAR_5;
 return 0;
}
