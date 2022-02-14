
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 16000:
  VAR_2 = 3;
  break;
 case 32000:
  VAR_2 = 6;
  break;
 case 48000:
  VAR_2 = 8;
  break;
 default:
  return -VAR_0;
 }
 return VAR_2;
}
