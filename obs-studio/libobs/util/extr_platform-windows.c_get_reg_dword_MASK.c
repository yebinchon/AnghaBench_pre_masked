
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_dword {int size; scalar_t__ return_value; scalar_t__ status; int member_0; } ;
typedef scalar_t__ LSTATUS ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int ,int*) ;

void FUNC_3(HKEY VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4,
     struct reg_dword *VAR_5)
{
 struct reg_dword VAR_6 = {0};
 HKEY VAR_7;
 LSTATUS VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, 0, VAR_1, &VAR_7);

 if (VAR_8 != VAR_0) {
  VAR_5->status = VAR_8;
  VAR_5->size = 0;
  VAR_5->return_value = 0;
  return;
 }

 VAR_6.size = sizeof(VAR_6.return_value);

 VAR_6.status = FUNC_2(VAR_7, VAR_4, ((void*)0), ((void*)0),
          (LPBYTE)&VAR_6.return_value, &VAR_6.size);

 FUNC_0(VAR_7);

 *VAR_5 = VAR_6;
}
