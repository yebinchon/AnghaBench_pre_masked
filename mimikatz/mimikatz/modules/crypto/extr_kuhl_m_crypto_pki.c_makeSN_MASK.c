
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbData; scalar_t__ pbData; } ;
typedef TYPE_1__* PCRYPT_INTEGER_BLOB ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPCWCHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,int*) ;

BOOL FUNC_6(LPCWCHAR VAR_2, PCRYPT_INTEGER_BLOB VAR_3)
{
 BOOL VAR_4 = VAR_0;
 if(VAR_2)
 {
  VAR_4 = FUNC_5(VAR_2, &VAR_3->pbData, &VAR_3->cbData);
  if(!VAR_4)
   FUNC_4(L"Unable to use \'%s\' as a HEX string\n", VAR_2);
 }
 else
 {
  VAR_3->cbData = 20;
  if((VAR_3->pbData = (PBYTE) FUNC_1(VAR_1, VAR_3->cbData)))
  {
   VAR_4 = FUNC_3(FUNC_0(VAR_3->pbData, VAR_3->cbData));
   if(!VAR_4)
    FUNC_2(VAR_3->pbData);
  }
 }
 return VAR_4;
}
