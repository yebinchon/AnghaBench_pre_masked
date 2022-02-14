
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;







 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*,int ) ;

void FUNC_3(int VAR_1, const char *VAR_2, va_list VAR_3)
{
 switch (VAR_1) {
 case 131:
  FUNC_1("GD Error: ", VAR_0);
  break;
 case 128:
  FUNC_1("GD Warning: ", VAR_0);
  break;
 case 129:
  FUNC_1("GD Notice: ", VAR_0);
  break;

 case 130:
  FUNC_1("GD Info: ", VAR_0);
  break;
 case 132:
  FUNC_1("GD Debug: ", VAR_0);
  break;

 }
 FUNC_2(VAR_0, VAR_2, VAR_3);
 FUNC_0(VAR_0);
}
