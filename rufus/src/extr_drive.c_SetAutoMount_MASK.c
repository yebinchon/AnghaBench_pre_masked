
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int enable ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

BOOL FUNC_3(BOOL VAR_9)
{
 HANDLE VAR_10;
 DWORD VAR_11;
 BOOL VAR_12 = VAR_0;

 VAR_10 = FUNC_1(VAR_7, VAR_4|VAR_5,
  VAR_2|VAR_3, ((void*)0), VAR_8, VAR_1, ((void*)0));
 if (VAR_10 == ((void*)0))
  return VAR_0;
 VAR_12 = FUNC_2(VAR_10, VAR_6, &VAR_9, sizeof(VAR_9), ((void*)0), 0, &VAR_11, ((void*)0));
 FUNC_0(VAR_10);
 return VAR_12;
}
