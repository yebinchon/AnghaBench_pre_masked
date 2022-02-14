
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LCID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_4(LCID VAR_2, DWORD VAR_3, char* VAR_4, const char* VAR_5, BOOL VAR_6)
{
  int VAR_7;

  if(!VAR_5[0])
      return 0;

  VAR_4[0] = 0;
  FUNC_0(VAR_2, VAR_3|VAR_0, VAR_4, VAR_1);
  if (!VAR_4[0])
    return 0;


  VAR_7 = FUNC_2(VAR_5);
  if(VAR_6 || VAR_7<=3)
    return !FUNC_1(VAR_5, VAR_4);
  else
    return !FUNC_3(VAR_5, VAR_4, VAR_7);
}
