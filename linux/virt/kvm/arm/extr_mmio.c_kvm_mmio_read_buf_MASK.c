
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u64 ;
typedef unsigned long u32 ;
typedef unsigned long u16 ;


 int FUNC_0 (unsigned long*,void const*,unsigned int) ;

unsigned long FUNC_1(const void *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = 0;
 union {
  u16 hword;
  u32 word;
  u64 dword;
 } VAR_3;

 switch (VAR_1) {
 case 1:
  VAR_2 = *(u8 *)VAR_0;
  break;
 case 2:
  FUNC_0(&VAR_3.hword, VAR_0, VAR_1);
  VAR_2 = VAR_3.hword;
  break;
 case 4:
  FUNC_0(&VAR_3.word, VAR_0, VAR_1);
  VAR_2 = VAR_3.word;
  break;
 case 8:
  FUNC_0(&VAR_3.dword, VAR_0, VAR_1);
  VAR_2 = VAR_3.dword;
  break;
 }

 return VAR_2;
}
