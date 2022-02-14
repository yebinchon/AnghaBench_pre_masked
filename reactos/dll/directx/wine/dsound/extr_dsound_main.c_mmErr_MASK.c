
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
HRESULT FUNC_1(UINT VAR_7)
{
 switch(VAR_7) {
 case 133:
  return VAR_6;
 case 138:
  return VAR_0;
 case 137:
 case 136:
 case 129:
  return VAR_1;
 case 134:
  return VAR_3;
 case 132:
  return VAR_4;
 case 135:
 case 130:
 case 128:
  return VAR_2;
 case 131:
  return VAR_5;
 default:
  FUNC_0("Unknown MMSYS error %d\n",VAR_7);
  return VAR_1;
 }
}
