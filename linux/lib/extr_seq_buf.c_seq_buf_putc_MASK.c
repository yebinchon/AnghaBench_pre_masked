
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {scalar_t__ size; unsigned char* buffer; int len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct seq_buf*,int) ;
 int FUNC_2 (struct seq_buf*) ;

int FUNC_3(struct seq_buf *VAR_0, unsigned char VAR_1)
{
 FUNC_0(VAR_0->size == 0);

 if (FUNC_1(VAR_0, 1)) {
  VAR_0->buffer[VAR_0->len++] = VAR_1;
  return 0;
 }
 FUNC_2(VAR_0);
 return -1;
}
