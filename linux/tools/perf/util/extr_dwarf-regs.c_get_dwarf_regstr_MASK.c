
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

const char *FUNC_3(unsigned int VAR_9, unsigned int VAR_10)
{
 switch (VAR_10) {
 case 136:
  return FUNC_1(VAR_9);
 case 139:
  return FUNC_0(VAR_6, VAR_9);
 case 129:
  return FUNC_0(VAR_7, VAR_9);
 case 137:
  return FUNC_0(VAR_1, VAR_9);
 case 138:
  return FUNC_0(VAR_0, VAR_9);
 case 132:
  return FUNC_0(VAR_4, VAR_9);
 case 133:
  return FUNC_0(VAR_3, VAR_9);
 case 135:
 case 134:
  return FUNC_0(VAR_2, VAR_9);
 case 131:
 case 130:
  return FUNC_0(VAR_5, VAR_9);
 case 128:
  return FUNC_0(VAR_8, VAR_9);
 default:
  FUNC_2("ELF MACHINE %x is not supported.\n", VAR_10);
 }
 return ((void*)0);
}
