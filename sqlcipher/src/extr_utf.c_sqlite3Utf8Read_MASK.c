
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 unsigned int* VAR_0 ;

u32 FUNC_0(
  const unsigned char **VAR_1
){
  unsigned int VAR_2;




  VAR_2 = *((*VAR_1)++);
  if( VAR_2>=0xc0 ){
    VAR_2 = VAR_0[VAR_2-0xc0];
    while( (*(*VAR_1) & 0xc0)==0x80 ){
      VAR_2 = (VAR_2<<6) + (0x3f & *((*VAR_1)++));
    }
    if( VAR_2<0x80
        || (VAR_2&0xFFFFF800)==0xD800
        || (VAR_2&0xFFFFFFFE)==0xFFFE ){ VAR_2 = 0xFFFD; }
  }
  return VAR_2;
}
