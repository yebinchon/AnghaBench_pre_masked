
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,char*,char const*) ;

int
FUNC_1(const char* VAR_4, const char* VAR_5)
{
 int VAR_6 = -1;

 switch (VAR_4[0]) {
 case 'r':
  VAR_6 = VAR_1;
  if (VAR_4[1] == '+')
   VAR_6 = VAR_2;
  break;
 case 'w':
 case 'a':
  VAR_6 = VAR_2|VAR_0;
  if (VAR_4[0] == 'w')
   VAR_6 |= VAR_3;
  break;
 default:
  FUNC_0(0, VAR_5, "\"%s\": Bad mode", VAR_4);
  break;
 }
 return (VAR_6);
}
