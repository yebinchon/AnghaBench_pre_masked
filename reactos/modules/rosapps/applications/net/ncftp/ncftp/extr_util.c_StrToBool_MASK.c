
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(const char *const VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = *VAR_0;
 if (FUNC_1(VAR_1))
  VAR_1 = FUNC_2(VAR_1);
 VAR_2 = 0;
 switch (VAR_1) {
  case 'f':

  case 'n':
   break;
  case 'o':
   VAR_1 = (int) VAR_0[1];
   if (FUNC_1(VAR_1))
    VAR_1 = FUNC_2(VAR_1);
   if (VAR_1 == 'f')
    break;

  case 't':

  case 'y':
   VAR_2 = 1;
   break;
  default:
   if (FUNC_0(VAR_0) != 0)
    VAR_2 = 1;
 }
 return VAR_2;
}
