
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int address; int * member_1; int * member_0; } ;
typedef int * PKULL_M_MEMORY_HANDLE ;
typedef int LPCWSTR ;
typedef TYPE_1__ KULL_M_MEMORY_ADDRESS ;
typedef scalar_t__ DWORD32 ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(PKULL_M_MEMORY_HANDLE VAR_2, DWORD32 VAR_3, DWORD VAR_4, LPCWSTR VAR_5)
{
 KULL_M_MEMORY_ADDRESS VAR_6 = {*FUNC_2(VAR_3), VAR_2}, VAR_7 = {((void*)0), &VAR_0};

 if(VAR_3 && VAR_4)
 {
  FUNC_3(L"%s: ", VAR_5);
  if((VAR_7.address = FUNC_0(VAR_1, VAR_4)))
  {
   if(FUNC_4(&VAR_7, &VAR_6, VAR_4))
    FUNC_5(VAR_7.address, VAR_4, 0);
   FUNC_1(VAR_7.address);
  }
  FUNC_3(L"\n");
 }
}
