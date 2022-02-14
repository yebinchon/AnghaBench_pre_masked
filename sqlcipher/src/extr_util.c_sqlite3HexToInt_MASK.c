
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

u8 FUNC_1(int VAR_0){
  FUNC_0( (VAR_0>='0' && VAR_0<='9') || (VAR_0>='a' && VAR_0<='f') || (VAR_0>='A' && VAR_0<='F') );






  return (u8)(VAR_0 & 0xf);
}
