
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; } ;
struct TYPE_4__ {TYPE_1__ trace_buffer; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 if (VAR_0)
  return;

 if (FUNC_0())
  return;



 FUNC_1("\n");
 FUNC_1("**********************************************************\n");
 FUNC_1("**   NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE   **\n");
 FUNC_1("**                                                      **\n");
 FUNC_1("** trace_printk() being used. Allocating extra memory.  **\n");
 FUNC_1("**                                                      **\n");
 FUNC_1("** This means that this is a DEBUG kernel and it is     **\n");
 FUNC_1("** unsafe for production use.                           **\n");
 FUNC_1("**                                                      **\n");
 FUNC_1("** If you see this message and you are not debugging    **\n");
 FUNC_1("** the kernel, report this immediately to your vendor!  **\n");
 FUNC_1("**                                                      **\n");
 FUNC_1("**   NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE NOTICE   **\n");
 FUNC_1("**********************************************************\n");


 FUNC_3();

 VAR_0 = 1;







 if (VAR_1.trace_buffer.buffer)
  FUNC_2();
}
