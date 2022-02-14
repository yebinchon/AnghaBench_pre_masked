
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PWCHAR ;
typedef char* LPWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int ,int ,char*,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,char*) ;

void
FUNC_4(
 PWCHAR VAR_4,
 DWORD VAR_5
 )
{
    LPWSTR VAR_6;

 FUNC_0(
  (VAR_0 | VAR_1),
  ((void*)0),
  VAR_5,
  FUNC_2(VAR_2, VAR_3),
  (LPWSTR)& VAR_6,
  0,
  ((void*)0)
  );
 FUNC_3(
  L"%s: %s\n",
  VAR_4,
  VAR_6
  );
 FUNC_1( VAR_6 );
}
