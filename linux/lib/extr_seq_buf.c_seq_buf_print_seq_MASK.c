
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct seq_buf {int buffer; } ;


 unsigned int FUNC_0 (struct seq_buf*) ;
 int FUNC_1 (struct seq_file*,int ,unsigned int) ;

int FUNC_2(struct seq_file *VAR_0, struct seq_buf *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, VAR_1->buffer, VAR_2);
}
