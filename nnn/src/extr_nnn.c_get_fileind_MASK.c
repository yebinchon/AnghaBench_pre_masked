
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;







 int VAR_0 ;



__attribute__((used)) static char FUNC_0(mode_t VAR_1)
{
 char VAR_2 = '\0';

 switch (VAR_1 & VAR_0) {
 case 129:
  VAR_2 = '-';
  break;
 case 132:
  VAR_2 = 'd';
  break;
 case 130:
  VAR_2 = 'l';
  break;
 case 128:
  VAR_2 = 's';
  break;
 case 131:
  VAR_2 = 'p';
  break;
 case 134:
  VAR_2 = 'b';
  break;
 case 133:
  VAR_2 = 'c';
  break;
 default:
  VAR_2 = '?';
  break;
 }

 return VAR_2;
}
