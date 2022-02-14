
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *) ;

int FUNC_1( HANDLE VAR_1 ) {
  LONG VAR_2;
  DWORD VAR_3;

  VAR_2 = FUNC_0(VAR_1,
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       &VAR_3,
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0));
  if (VAR_2 == VAR_0)
    return VAR_3 + 1;
  else
    return -1;
}
