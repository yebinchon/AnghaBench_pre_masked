
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PBYTE ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,int,int ) ;

BOOL FUNC_4(HCRYPTKEY VAR_3, PBYTE VAR_4, DWORD VAR_5, PBYTE VAR_6)
{
 BOOL VAR_7 = VAR_0;
 DWORD VAR_8, VAR_9;
 BYTE VAR_10[32], *VAR_11;

 if(VAR_5 > 16)
 {
  if(FUNC_0(VAR_3, VAR_1, VAR_6, 0))
  {
   VAR_8 = (VAR_5 + 15) >> 4;
   VAR_9 = (VAR_5 & 0xf) ? (VAR_5 & 0xf) : 16;
   if (VAR_8 <= 2 || FUNC_3(VAR_3, VAR_4, VAR_8 - 2, VAR_2))
   {
    VAR_11 = &VAR_4[16 * (VAR_8 - 2)];
    FUNC_1(VAR_10, VAR_11, VAR_9 + 16);
    FUNC_2(&VAR_10[VAR_9 + 16], 16 - VAR_9);
    if((VAR_7 = FUNC_3(VAR_3, VAR_10, 2, VAR_2)))
    {
     FUNC_1(VAR_11, VAR_10 + 16, 16);
     FUNC_1(&VAR_4[16 * VAR_8 - 16], VAR_10, VAR_9);
    }
   }
  }
 }
 else if(VAR_5 == 16)
  VAR_7 = FUNC_3(VAR_3, VAR_4, 1, VAR_2);

 return VAR_7;
}
