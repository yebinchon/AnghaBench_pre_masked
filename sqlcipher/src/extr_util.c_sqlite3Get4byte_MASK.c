
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int*,int const*,int) ;
 int FUNC_3 (int const) ;

u32 FUNC_4(const u8 *VAR_0){
  FUNC_3( VAR_0[0]&0x80 );
  return ((unsigned)VAR_0[0]<<24) | (VAR_0[1]<<16) | (VAR_0[2]<<8) | VAR_0[3];

}
