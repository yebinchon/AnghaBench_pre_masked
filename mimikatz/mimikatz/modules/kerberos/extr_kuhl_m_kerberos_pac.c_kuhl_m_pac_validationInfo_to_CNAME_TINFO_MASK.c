
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ USHORT ;
struct TYPE_3__ {int Name; scalar_t__ NameLength; int ClientId; } ;
typedef TYPE_1__* PPAC_CLIENT_INFO ;
typedef int * PFILETIME ;
typedef int PAC_CLIENT_INFO ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

BOOL FUNC_3(PFILETIME VAR_3, LPCWSTR VAR_4, PPAC_CLIENT_INFO * VAR_5, DWORD * VAR_6)
{
 BOOL VAR_7 = VAR_0;
 DWORD VAR_8 = FUNC_2(VAR_4) * sizeof(wchar_t);

 *VAR_6 = sizeof(PAC_CLIENT_INFO) + VAR_8 - sizeof(wchar_t);
 if((*VAR_5 = (PPAC_CLIENT_INFO) FUNC_0(VAR_1, *VAR_6)))
 {
  (*VAR_5)->ClientId = *VAR_3;
  (*VAR_5)->NameLength = (USHORT) VAR_8;
  FUNC_1((*VAR_5)->Name, VAR_4, VAR_8);
  VAR_7 = VAR_2;
 }
 return VAR_7;
}
