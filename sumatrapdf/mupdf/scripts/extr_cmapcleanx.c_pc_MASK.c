
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0)
{
 if (VAR_0 <= 0xff) FUNC_0("<%02x>", VAR_0);
 else if (VAR_0 <= 0xffff) FUNC_0("<%04x>", VAR_0);
 else if (VAR_0 <= 0xffffff) FUNC_0("<%06x>", VAR_0);
 else FUNC_0("<%010x>", VAR_0);
}
