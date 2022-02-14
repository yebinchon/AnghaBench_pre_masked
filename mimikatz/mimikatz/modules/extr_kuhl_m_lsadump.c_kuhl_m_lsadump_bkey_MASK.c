
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {scalar_t__ Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;
typedef int * LPCGUID ;
typedef int GUID ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (int,int **,char*,int **,int *) ;
 int FUNC_9 (int *) ;

NTSTATUS FUNC_10(int VAR_1, wchar_t * VAR_2[])
{
 NTSTATUS VAR_3;
 UNICODE_STRING VAR_4;
 GUID VAR_5;
 PCWCHAR VAR_6 = ((void*)0), VAR_7 = ((void*)0);
 BOOL VAR_8 = FUNC_8(VAR_1, VAR_2, L"export", ((void*)0), ((void*)0));
 BOOL VAR_9 = FUNC_8(VAR_1, VAR_2, L"secret", ((void*)0), ((void*)0));

 FUNC_8(VAR_1, VAR_2, L"system", &VAR_7, ((void*)0));
 FUNC_8(VAR_1, VAR_2, L"guid", &VAR_6, ((void*)0));
 if(VAR_6)
 {
  FUNC_4(&VAR_4, VAR_6);
  VAR_3 = FUNC_3(&VAR_4, &VAR_5);
  if(FUNC_1(VAR_3))
  {
   FUNC_5(L"\n"); FUNC_9(&VAR_5); FUNC_5(L" seems to be a valid GUID\n");
   FUNC_7(&VAR_5, VAR_8, VAR_7, VAR_9);
  }
  else FUNC_2(L"Invalid GUID (0x%08x) ; %s\n", VAR_3, VAR_6);
 }
 else
 {
  FUNC_5(L"\nCurrent prefered key:       ");
  VAR_3 = FUNC_6(VAR_7, L"G$BCKUPKEY_PREFERRED", &VAR_4, VAR_9);
  if(FUNC_1(VAR_3))
  {
   FUNC_9((LPCGUID) VAR_4.Buffer); FUNC_5(L"\n");
   FUNC_7((LPCGUID) VAR_4.Buffer, VAR_8, VAR_7, VAR_9);
   FUNC_0(VAR_4.Buffer);
  }
  else FUNC_2(L"kuhl_m_lsadump_LsaRetrievePrivateData: 0x%08x\n", VAR_3);

  FUNC_5(L"\nCompatibility prefered key: ");
  VAR_3 = FUNC_6(VAR_7, L"G$BCKUPKEY_P", &VAR_4, VAR_9);
  if(FUNC_1(VAR_3))
  {
   FUNC_9((LPCGUID) VAR_4.Buffer); FUNC_5(L"\n");
   FUNC_7((LPCGUID) VAR_4.Buffer, VAR_8, VAR_7, VAR_9);
   FUNC_0(VAR_4.Buffer);
  }
  else FUNC_2(L"kuhl_m_lsadump_LsaRetrievePrivateData: 0x%08x\n", VAR_3);
 }
 return VAR_0;
}
