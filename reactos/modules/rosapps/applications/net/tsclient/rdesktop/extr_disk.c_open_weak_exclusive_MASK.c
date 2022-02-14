
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int mode_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, int VAR_3, mode_t VAR_4)
{
 int VAR_5;
 struct stat VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 != -1 || !(VAR_3 & VAR_0))
 {

  return VAR_5;
 }







 switch (VAR_1)
 {
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   return VAR_5;
 }


 if (FUNC_1(VAR_2, &VAR_6) != -1)
 {

  VAR_1 = 134;
  return -1;
 }
 else
 {
  return FUNC_0(VAR_2, VAR_3 & ~VAR_0, VAR_4);
 }
}
