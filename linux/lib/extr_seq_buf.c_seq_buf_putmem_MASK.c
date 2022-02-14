
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {scalar_t__ size; scalar_t__ len; scalar_t__ buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,void const*,unsigned int) ;
 scalar_t__ FUNC_2 (struct seq_buf*,unsigned int) ;
 int FUNC_3 (struct seq_buf*) ;

int FUNC_4(struct seq_buf *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_0->size == 0);

 if (FUNC_2(VAR_0, VAR_2)) {
  FUNC_1(VAR_0->buffer + VAR_0->len, VAR_1, VAR_2);
  VAR_0->len += VAR_2;
  return 0;
 }
 FUNC_3(VAR_0);
 return -1;
}
