
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PBYTE ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ,int *,int,scalar_t__) ;

BOOL FUNC_6(HCRYPTKEY VAR_2, PBYTE VAR_3, DWORD VAR_4, PBYTE VAR_5)
{
 BOOL VAR_6 = VAR_0;
 DWORD VAR_7, VAR_8, VAR_9;
 BYTE VAR_10[32], *VAR_11;
 HCRYPTKEY VAR_12;

 if(VAR_4 > 16)
 {
  if(FUNC_1(VAR_2, ((void*)0), 0, &VAR_12))
  {
   if(FUNC_2(VAR_2, VAR_1, VAR_5, 0))
   {
    VAR_7 = (VAR_4 + 15) >> 4;
    VAR_8 = (VAR_4 & 0xf) ? (VAR_4 & 0xf) : 16;
    if (VAR_7 <= 2 || FUNC_5(VAR_2, VAR_3, VAR_7 - 2, VAR_0))
    {
     VAR_11 = &VAR_3[16 * (VAR_7 - 2)];
     FUNC_3(VAR_10, VAR_11, VAR_8 + 16);
     FUNC_4(&VAR_10[VAR_8 + 16], 16 - VAR_8);
     if(FUNC_5(VAR_12, VAR_10, 1, VAR_0))
     {
      for(VAR_9 = 0; VAR_9 < 16; VAR_9++)
       VAR_10[VAR_9] ^= VAR_10[VAR_9 + 16];
      FUNC_3(&VAR_10[VAR_8 + 16], &VAR_10[VAR_8], 16 - VAR_8);
      if((VAR_6 = FUNC_5(VAR_2, VAR_10 + 16, 1, VAR_0)))
      {
       FUNC_3(VAR_11, VAR_10 + 16, 16);
       FUNC_3(&VAR_3[16 * VAR_7 - 16], VAR_10, VAR_8);
      }
     }
    }
   }
   FUNC_0(VAR_12);
  }
 }
 else if(VAR_4 == 16)
  VAR_6 = FUNC_5(VAR_2, VAR_3, 1, VAR_0);

 return VAR_6;
}
