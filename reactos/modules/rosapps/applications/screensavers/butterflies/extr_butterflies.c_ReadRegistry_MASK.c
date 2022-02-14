
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*,int ,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5(){
 LONG VAR_5;
 HKEY VAR_6;
 DWORD VAR_7, VAR_8, VAR_9;

 FUNC_3();

 VAR_5 = FUNC_1(VAR_1, VAR_4, 0, VAR_2, &VAR_6);
 if(VAR_5 != VAR_0)
  return;

 VAR_8=sizeof(VAR_9);

 VAR_5 = FUNC_2(VAR_6, FUNC_4("Rotate"), 0, &VAR_7, (LPBYTE)&VAR_9, &VAR_8);
 if(VAR_5 == VAR_0)
  VAR_3 = VAR_9;
 FUNC_0(VAR_6);
}
