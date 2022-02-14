
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_0)
  FUNC_0("Name                   Objects      Alloc       Free"
   "   %%Fast Fallb O CmpX   UL\n");
 else
  FUNC_0("Name                   Objects Objsize           %s "
   "Slabs/Part/Cpu  O/S O %%Fr %%Ef Flg\n",
   VAR_1 ? " Loss" : "Space");
}
