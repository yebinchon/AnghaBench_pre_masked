
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_6)
{
 if (VAR_6 >= 8000 && VAR_6 <= 12000)
  return VAR_4;
 else if (VAR_6 >= 16000 && VAR_6 <= 24000)
  return VAR_1;
 else if (VAR_6 >= 32000 && VAR_6 <= 48000)
  return VAR_2;
 else if (VAR_6 >= 64000 && VAR_6 <= 96000)
  return VAR_3;
 else if (VAR_6 >= 128000 && VAR_6 <= 192000)
  return VAR_0;
 else
  return -VAR_5;
}
