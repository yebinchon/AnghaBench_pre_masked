
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;

void FUNC_5(uint8 VAR_4,uint8 VAR_5,uint8 VAR_6)
{
 uint32 VAR_7;
 uint8 VAR_8;
 if(VAR_4>1) return;

 if(VAR_5) VAR_8=(VAR_6>>1)|0x80;
 else VAR_8=(VAR_6>>1)&0x7f;

 VAR_7= ((8&VAR_2)<<VAR_3)|((uint32)VAR_8);
 if(VAR_6&0x01) VAR_7|=VAR_0;
 while(FUNC_0(FUNC_2(VAR_4))&VAR_1);
 FUNC_4(FUNC_3(VAR_4), VAR_7);
 FUNC_1(FUNC_2(VAR_4), VAR_1);
}
