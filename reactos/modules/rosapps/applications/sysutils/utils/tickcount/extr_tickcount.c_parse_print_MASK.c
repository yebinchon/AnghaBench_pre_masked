
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_ ;
typedef int _TCHAR ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_0 ;

int FUNC_4(const _TCHAR * VAR_1)
{
 int64_ VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if(VAR_2 < 0)
  VAR_2 = - VAR_2;
 else if(VAR_2 == 0)
  return 1;

 FUNC_3(VAR_2, 0, ((void*)0), 0);
 FUNC_1(FUNC_0('\n'), VAR_0);

 return 0;
}
