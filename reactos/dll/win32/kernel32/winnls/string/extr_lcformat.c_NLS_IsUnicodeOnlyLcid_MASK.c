
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LCID ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_1 ;

BOOL FUNC_3(LCID VAR_2)
{
  VAR_2 = FUNC_0(VAR_2);

  switch (FUNC_1(VAR_2))
  {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
    FUNC_2("lcid 0x%08x: langid 0x%4x is Unicode Only\n", VAR_2, FUNC_1(VAR_2));
    return VAR_1;
  default:
    return VAR_0;
  }
}
