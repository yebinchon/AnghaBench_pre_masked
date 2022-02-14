
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;



__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0){
  return (((VAR_0)&0x000000FF)<<24) + (((VAR_0)&0x0000FF00)<<8)
         + (((VAR_0)&0x00FF0000)>>8) + (((VAR_0)&0xFF000000)>>24);
}
