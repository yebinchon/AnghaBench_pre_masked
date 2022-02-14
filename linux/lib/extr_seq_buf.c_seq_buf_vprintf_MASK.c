
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct seq_buf {scalar_t__ size; scalar_t__ len; scalar_t__ buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_buf*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char const*,int ) ;

int FUNC_3(struct seq_buf *VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0->size == 0);

 if (VAR_0->len < VAR_0->size) {
  VAR_3 = FUNC_2(VAR_0->buffer + VAR_0->len, VAR_0->size - VAR_0->len, VAR_1, VAR_2);
  if (VAR_0->len + VAR_3 < VAR_0->size) {
   VAR_0->len += VAR_3;
   return 0;
  }
 }
 FUNC_1(VAR_0);
 return -1;
}
