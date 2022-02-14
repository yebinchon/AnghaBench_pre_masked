
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(int VAR_7)
{
 if (!VAR_5)
  FUNC_0(1, "EPB not enabled on this platform");

 VAR_6 = 1;

 switch (VAR_7) {
 case 128:
  return VAR_4;
 case 131:
  return VAR_1;
 case 130:
  return VAR_2;
 case 132:
  return VAR_0;
 case 129:
  return VAR_3;
 }
 if (VAR_7 < 0 || VAR_7 > VAR_4)
  FUNC_0(1, "--epb must be from 0 to 15");
 return VAR_7;
}
