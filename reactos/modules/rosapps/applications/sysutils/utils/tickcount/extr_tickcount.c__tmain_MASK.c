
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_ ;
typedef scalar_t__ _TCHAR ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__* FUNC_2 (scalar_t__*,int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(int VAR_2, _TCHAR * VAR_3[])
{
 int VAR_4;

 if(VAR_2 <= 1)
 {
  FUNC_6((uint64_)FUNC_0(), 0, ((void*)0), 0);
  FUNC_3(FUNC_1('\n'), VAR_1);
 }
 else if(VAR_2 == 2 && VAR_3[1][0] == FUNC_1('-') && VAR_3[1][1] == 0)
 {
  while(!FUNC_4(VAR_0))
  {
   _TCHAR VAR_5[23];
   _TCHAR * VAR_6;

   VAR_6 = FUNC_2(VAR_5, 22, VAR_0);

   if(VAR_6 == ((void*)0))
    return 0;

   if((VAR_4 = FUNC_5(VAR_6)) != 0)
    return VAR_4;
  }
 }
 else
 {
  int VAR_7;

  for(VAR_7 = 1; VAR_7 < VAR_2; ++ VAR_7)
   if((VAR_4 = FUNC_5(VAR_3[VAR_7])) != 0)
    return VAR_4;
 }

 return 0;
}
