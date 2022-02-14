
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PDWORD ;
typedef int * PBYTE ;
typedef int * LPCVOID ;
typedef int HCRYPTPROV ;
typedef int HCRYPTHASH ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int *,scalar_t__,int *,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

BOOL FUNC_11(DWORD VAR_6, LPCVOID VAR_7, DWORD VAR_8, LPCVOID VAR_9, DWORD VAR_10, DWORD VAR_11, BYTE *VAR_12, DWORD VAR_13, BOOL VAR_14)
{
 BOOL VAR_15 = VAR_1;
 HCRYPTPROV VAR_16;
 HCRYPTHASH VAR_17;
 DWORD VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 PBYTE VAR_23, VAR_24, VAR_25;

 if(FUNC_0(&VAR_16, ((void*)0), ((void*)0), VAR_4, VAR_0))
 {
  if(FUNC_1(VAR_16, VAR_6, 0, 0, &VAR_17))
  {
   if(FUNC_3(VAR_17, VAR_2, ((void*)0), &VAR_18, 0))
   {
    if((VAR_23 = (PBYTE) FUNC_5(VAR_3, VAR_10 + sizeof(DWORD))))
    {
     if((VAR_24 = (PBYTE) FUNC_5(VAR_3, VAR_18)))
     {
      if((VAR_25 = (PBYTE) FUNC_5(VAR_3, VAR_18)))
      {
       VAR_15 = VAR_5;
       FUNC_7(VAR_23, VAR_9, VAR_10);
       for (VAR_19 = 1; VAR_13 > 0; VAR_19++)
       {
        *(PDWORD) (VAR_23 + VAR_10) = FUNC_8(VAR_19);
        FUNC_9(VAR_6, VAR_7, VAR_8, VAR_23, VAR_10 + 4, VAR_25, VAR_18);
        FUNC_7(VAR_24, VAR_25, VAR_18);
        for (VAR_20 = 1; VAR_20 < VAR_11; VAR_20++)
        {
         FUNC_9(VAR_6, VAR_7, VAR_8, VAR_25, VAR_18, VAR_25, VAR_18);
         for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
          VAR_24[VAR_21] ^= VAR_25[VAR_21];
         if(VAR_14)
          FUNC_7(VAR_25, VAR_24, VAR_18);
        }
        VAR_22 = FUNC_10(VAR_13, VAR_18);
        FUNC_7(VAR_12, VAR_24, VAR_22);
        VAR_12 += VAR_22;
        VAR_13 -= VAR_22;
       }
       FUNC_6(VAR_25);
      }
      FUNC_6(VAR_24);
     }
     FUNC_6(VAR_23);
    }
   }
   FUNC_2(VAR_17);
  }
  FUNC_4(VAR_16, 0);
 }
 return VAR_15;
}
