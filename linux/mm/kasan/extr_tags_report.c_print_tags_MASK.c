
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(u8 VAR_0, const void *VAR_1)
{
 u8 *VAR_2 = (u8 *)FUNC_0(VAR_1);

 FUNC_1("Pointer tag: [%02x], memory tag: [%02x]\n", VAR_0, *VAR_2);
}
