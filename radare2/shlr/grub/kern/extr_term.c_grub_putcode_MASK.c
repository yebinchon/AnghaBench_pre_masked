
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_term_output {int (* getxy ) () ;int (* putchar ) (char) ;} ;
typedef char grub_uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;

void
FUNC_3 (grub_uint32_t VAR_0, struct grub_term_output *VAR_1)
{
  if (VAR_0 == '\t' && VAR_1->getxy)
    {
      int VAR_2;

      VAR_2 = 8 - ((VAR_1->getxy () >> 8) & 7);
      while (VAR_2--)
 FUNC_3 (' ', VAR_1);

      return;
    }

  (VAR_1->putchar) (VAR_0);
  if (VAR_0 == '\n')
    (VAR_1->putchar) ('\r');
}
