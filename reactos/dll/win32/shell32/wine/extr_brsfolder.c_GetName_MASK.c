
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRRET ;
typedef int LPWSTR ;
typedef int LPSHELLFOLDER ;
typedef int LPCITEMIDLIST ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(LPSHELLFOLDER VAR_3, LPCITEMIDLIST VAR_4, DWORD VAR_5, LPWSTR VAR_6)
{
 BOOL VAR_7=VAR_2;
 STRRET VAR_8;

 FUNC_3("%p %p %x %p\n", VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_1(FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8)))
          VAR_7 = FUNC_2(VAR_6, VAR_1, &VAR_8, VAR_4);
 else
   VAR_7 = VAR_0;

 FUNC_3("-- %s\n", FUNC_4(VAR_6));
 return VAR_7;
}
