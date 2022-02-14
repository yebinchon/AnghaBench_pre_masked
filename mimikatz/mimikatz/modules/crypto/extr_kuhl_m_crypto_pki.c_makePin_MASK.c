
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPSTR ;
typedef int HCRYPTPROV ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int const*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;

BOOL FUNC_2(HCRYPTPROV VAR_4, BOOL VAR_5, LPSTR VAR_6)
{
 BOOL VAR_7 = VAR_0;
 if(VAR_5 && VAR_6)
 {
  if(!(VAR_7 = FUNC_0(VAR_4, VAR_1, (const BYTE *) VAR_6, 0)))
  {
   FUNC_1(L"CryptSetProvParam(PP_KEYEXCHANGE_PIN)");
   if(!(VAR_7 = FUNC_0(VAR_4, VAR_2, (const BYTE *) VAR_6, 0)))
    FUNC_1(L"CryptSetProvParam(PP_SIGNATURE_PIN)");
  }
 }
 else VAR_7 = VAR_3;
 return VAR_7;
}
