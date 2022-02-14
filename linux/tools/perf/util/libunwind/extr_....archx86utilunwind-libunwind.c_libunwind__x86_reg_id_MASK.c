
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;

int FUNC_1(int VAR_10)
{
 int VAR_11;

 switch (VAR_10) {
 case 136:
  VAR_11 = VAR_1;
  break;
 case 131:
  VAR_11 = VAR_6;
  break;
 case 133:
  VAR_11 = VAR_4;
  break;
 case 134:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_8;
  break;
 case 132:
  VAR_11 = VAR_5;
  break;
 case 135:
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_9;
  break;
 case 130:
  VAR_11 = VAR_7;
  break;
 default:
  FUNC_0("unwind: invalid reg id %d\n", VAR_10);
  return -VAR_0;
 }

 return VAR_11;
}
