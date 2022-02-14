
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 switch (VAR_1) {
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  return 112896000;
 case 8000:
 case 16000:
 case 32000:
 case 48000:
 case 96000:
  return 122880000;
 default:
  return -VAR_0;
 }
}
