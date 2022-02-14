
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int length; int value; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef scalar_t__* PSTR ;
typedef TYPE_1__ OssEncodedOID ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;
typedef int ATTRTYP ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*,int*,int ) ;
 scalar_t__* FUNC_4 (int ,char) ;
 int FUNC_5 (scalar_t__*,int *,int ) ;

BOOL FUNC_6(SCHEMA_PREFIX_TABLE *VAR_1, LPCSTR VAR_2, ATTRTYP *VAR_3, BOOL VAR_4)
{
 BOOL VAR_5 = VAR_0;
 DWORD VAR_6, VAR_7;
 PSTR VAR_8;
 OssEncodedOID VAR_9;

 if((VAR_8 = FUNC_4(VAR_2, '.')))
 {
  if(*(VAR_8 + 1))
  {
   VAR_8++;
   VAR_6 = FUNC_5(VAR_8, ((void*)0), 0);
   *VAR_3 = (WORD) VAR_6 % 0x4000;
   if(*VAR_3 >= 0x4000)
    *VAR_3 += 0x8000;
   if(FUNC_1(VAR_2, &VAR_9))
   {
    VAR_9.length -= (VAR_6 < 0x80) ? 1 : 2;
    if((VAR_5 = FUNC_3(VAR_1, &VAR_9, &VAR_7, VAR_4)))
     *VAR_3 |= VAR_7 << 16;
    else FUNC_0(L"kull_m_rpc_drsr_MakeAttid_addPrefixToTable\n");
    FUNC_2(VAR_9.value);
   }
  }
 }
 return VAR_5;
}
