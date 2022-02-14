
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int io_type; int firmware_rev; } ;
__attribute__((used)) static int FUNC_0 (struct hdsp *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_0->io_type) {
 case 129:
 case 132:
 case 128:
 default:
  if (VAR_0->firmware_rev == 0xa)
   return (64 * VAR_2) + (32 + (VAR_1));
  else
   return (52 * VAR_2) + (26 + (VAR_1));
 case 131:
  return (32 * VAR_2) + (16 + (VAR_1));
 case 130:
  return (52 * VAR_2) + (26 + (VAR_1));
 }
}
