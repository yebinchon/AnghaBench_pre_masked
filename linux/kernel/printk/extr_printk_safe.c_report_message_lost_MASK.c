
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printk_safe_seq_buf {int message_lost; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct printk_safe_seq_buf *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->message_lost, 0);

 if (VAR_1)
  FUNC_1("Lost %d message(s)!\n", VAR_1);
}
