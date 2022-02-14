
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, char * const *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_6)
 {
  FUNC_0(VAR_0, "Error in argument %d, char %d: ", VAR_3, VAR_4+1);
  switch(VAR_5)
  {
  case 129:
   FUNC_0(VAR_0, ": in flags\n");
   break;
  case 128:
   FUNC_0(VAR_0, "option not found %c\n", VAR_2[VAR_3][VAR_4]);
   break;
  case 130:
   FUNC_0(VAR_0, "no argument for option %c\n", VAR_2[VAR_3][VAR_4]);
   break;
  default:
   FUNC_0(VAR_0, "unknown\n");
   break;
  }
 }
 return('?');
}
