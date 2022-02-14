
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {int help; } ;
typedef int LPTSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(const char **VAR_10)
{
 DWORD VAR_11 = VAR_4;
 char *VAR_12 = ((void*)0);

 if (VAR_10 && *VAR_10) {
  int VAR_13 = FUNC_4(*VAR_10);

  if (VAR_13 < 0) {
   VAR_11 = VAR_5;
  }
  else {
   VAR_11 = VAR_3[VAR_13].help;
  }
 }

 FUNC_1(
  VAR_2 |
  VAR_0 |
  VAR_1,
  ((void*)0), VAR_11, 0, (LPTSTR)&VAR_12, 0,
  (va_list *)&VAR_9);

 if (VAR_12 == ((void*)0)) {
  FUNC_6("%s", FUNC_5(FUNC_2()));
  return VAR_7;
 }

 FUNC_0(VAR_12, VAR_6);
 FUNC_3(VAR_12);

 return VAR_8;
}
