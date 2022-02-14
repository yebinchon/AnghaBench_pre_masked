
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__uint8 ;



__attribute__((used)) static stbi__uint8 FUNC_0(int VAR_0)
{

   if ((unsigned int) VAR_0 > 255) {
      if (VAR_0 < 0) return 0;
      if (VAR_0 > 255) return 255;
   }
   return (stbi__uint8) VAR_0;
}
