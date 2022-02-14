
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {scalar_t__ size; size_t buffer; size_t len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,char const*,size_t) ;
 scalar_t__ FUNC_2 (struct seq_buf*,size_t) ;
 int FUNC_3 (struct seq_buf*) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(struct seq_buf *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_0->size == 0);


 VAR_2 += 1;

 if (FUNC_2(VAR_0, VAR_2)) {
  FUNC_1(VAR_0->buffer + VAR_0->len, VAR_1, VAR_2);

  VAR_0->len += VAR_2 - 1;
  return 0;
 }
 FUNC_3(VAR_0);
 return -1;
}
