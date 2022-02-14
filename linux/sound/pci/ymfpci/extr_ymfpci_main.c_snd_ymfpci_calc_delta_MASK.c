
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 switch (VAR_0) {
 case 8000: return 0x02aaab00;
 case 11025: return 0x03accd00;
 case 16000: return 0x05555500;
 case 22050: return 0x07599a00;
 case 32000: return 0x0aaaab00;
 case 44100: return 0x0eb33300;
 default: return ((VAR_0 << 16) / 375) << 5;
 }
}
