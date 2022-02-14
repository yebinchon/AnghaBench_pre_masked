
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int geometry ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int ,int *,int,scalar_t__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

BOOL FUNC_3(DWORD VAR_3)
{
 BOOL VAR_4;
 HANDLE VAR_5;
 DWORD VAR_6;
 BYTE VAR_7[128];

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_0, VAR_2);
 VAR_4 = FUNC_0(VAR_5, VAR_1,
   ((void*)0), 0, VAR_7, sizeof(VAR_7), &VAR_6, ((void*)0)) && (VAR_6 > 0);
 FUNC_2(VAR_5);
 return VAR_4;
}
