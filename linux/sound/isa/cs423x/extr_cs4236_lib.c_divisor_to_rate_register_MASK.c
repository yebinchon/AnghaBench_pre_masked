
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static unsigned char FUNC_1(unsigned int VAR_0)
{
 switch (VAR_0) {
 case 353: return 1;
 case 529: return 2;
 case 617: return 3;
 case 1058: return 4;
 case 1764: return 5;
 case 2117: return 6;
 case 2558: return 7;
 default:
  if (VAR_0 < 21 || VAR_0 > 192) {
   FUNC_0();
   return 192;
  }
  return VAR_0;
 }
}
