
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u64 ;
typedef unsigned long u32 ;
typedef unsigned long u16 ;


 int FUNC_0 (void*,void*,unsigned int) ;

void FUNC_1(void *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 void *VAR_3 = ((void*)0);
 union {
  u8 byte;
  u16 hword;
  u32 word;
  u64 dword;
 } VAR_4;

 switch (VAR_1) {
 case 1:
  VAR_4.byte = VAR_2;
  VAR_3 = &VAR_4.byte;
  break;
 case 2:
  VAR_4.hword = VAR_2;
  VAR_3 = &VAR_4.hword;
  break;
 case 4:
  VAR_4.word = VAR_2;
  VAR_3 = &VAR_4.word;
  break;
 case 8:
  VAR_4.dword = VAR_2;
  VAR_3 = &VAR_4.dword;
  break;
 }

 FUNC_0(VAR_0, VAR_3, VAR_1);
}
