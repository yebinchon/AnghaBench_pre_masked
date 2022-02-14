
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {size_t cap; size_t len; scalar_t__ data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = 2;
 const char *VAR_4 = VAR_2;
 char *VAR_5;
 char VAR_6;

 while ((VAR_6 = *VAR_4++) != 0)
 {
  switch (VAR_6)
  {
  case '\n':
  case '\r':
  case '\t':
  case '\b':
  case '\f':
  case '(':
  case ')':
  case '\\':
   VAR_3++;
   break;
  }
  VAR_3++;
 }

 while(VAR_1->cap - VAR_1->len < VAR_3)
  FUNC_0(VAR_0, VAR_1);

 VAR_4 = VAR_2;
 VAR_5 = (char *)VAR_1->data + VAR_1->len;
 *VAR_5++ = '(';
 while ((VAR_6 = *VAR_4++) != 0)
 {
  switch (VAR_6)
  {
  case '\n':
   *VAR_5++ = '\\';
   *VAR_5++ = 'n';
   break;
  case '\r':
   *VAR_5++ = '\\';
   *VAR_5++ = 'r';
   break;
  case '\t':
   *VAR_5++ = '\\';
   *VAR_5++ = 't';
   break;
  case '\b':
   *VAR_5++ = '\\';
   *VAR_5++ = 'b';
   break;
  case '\f':
   *VAR_5++ = '\\';
   *VAR_5++ = 'f';
   break;
  case '(':
   *VAR_5++ = '\\';
   *VAR_5++ = '(';
   break;
  case ')':
   *VAR_5++ = '\\';
   *VAR_5++ = ')';
   break;
  case '\\':
   *VAR_5++ = '\\';
   *VAR_5++ = '\\';
   break;
  default:
   *VAR_5++ = VAR_6;
  }
 }
 *VAR_5 = ')';
 VAR_1->len += VAR_3;
}
