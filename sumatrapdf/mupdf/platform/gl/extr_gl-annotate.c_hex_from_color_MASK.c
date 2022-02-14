
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,float*,int ,float*,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(int VAR_2, float VAR_3[4])
{
 float VAR_4[4];
 int VAR_5, VAR_6, VAR_7;
 switch (VAR_2)
 {
 default:
  return 0;
 case 1:
  VAR_5 = VAR_3[0] * 255;
  return 0xff000000 | (VAR_5<<16) | (VAR_5<<8) | VAR_5;
 case 3:
  VAR_5 = VAR_3[0] * 255;
  VAR_6 = VAR_3[1] * 255;
  VAR_7 = VAR_3[2] * 255;
  return 0xff000000 | (VAR_5<<16) | (VAR_6<<8) | VAR_7;
 case 4:
  FUNC_0(VAR_0, FUNC_1(VAR_0), VAR_3, FUNC_2(VAR_0), VAR_4, ((void*)0), VAR_1);
  VAR_5 = VAR_4[0] * 255;
  VAR_6 = VAR_4[1] * 255;
  VAR_7 = VAR_4[2] * 255;
  return 0xff000000 | (VAR_5<<16) | (VAR_6<<8) | VAR_7;
 }
}
