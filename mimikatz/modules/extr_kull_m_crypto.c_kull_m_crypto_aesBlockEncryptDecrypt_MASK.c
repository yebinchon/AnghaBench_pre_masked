
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PBYTE ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int*,int) ;
 int VAR_0 ;

BOOL FUNC_2(HCRYPTKEY VAR_1, PBYTE VAR_2, DWORD VAR_3, BOOL VAR_4)
{
 VAR_3 *= 16;
 return (VAR_4 ? FUNC_1(VAR_1, 0, VAR_0, 0, VAR_2, &VAR_3, VAR_3) : FUNC_0(VAR_1, 0, VAR_0, 0, VAR_2, &VAR_3));
}
