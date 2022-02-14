
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sync ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void)
{
 static unsigned long VAR_1;

 if (VAR_0->sync && !(++VAR_1 & 0xfff))
  VAR_0->sync();
}
