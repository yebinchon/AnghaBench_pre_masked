
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;

int FUNC_2(int VAR_6)
{
 VAR_5 = 1;

 switch (VAR_6) {
 case 128:
  return VAR_3;
 case 131:
  return VAR_1;
 case 130:
 case 132:
  return VAR_0;
 case 129:
  return VAR_2;
 }
 if (VAR_6 < 0 || VAR_6 > 0xff) {
  FUNC_0(VAR_4, "--hwp-epp must be from 0 to 0xff\n");
  FUNC_1();
 }
 return VAR_6;
}
