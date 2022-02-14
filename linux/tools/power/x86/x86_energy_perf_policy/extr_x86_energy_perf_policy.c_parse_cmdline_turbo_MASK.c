
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

int FUNC_2(int VAR_2)
{
 VAR_1 = 1;

 switch (VAR_2) {
 case 128:
  return 0;
 case 130:
 case 131:
 case 132:
 case 129:
  return 1;
 }
 if (VAR_2 < 0 || VAR_2 > 1) {
  FUNC_0(VAR_0, "--turbo-enable: 1 to enable, 0 to disable\n");
  FUNC_1();
 }
 return VAR_2;
}
