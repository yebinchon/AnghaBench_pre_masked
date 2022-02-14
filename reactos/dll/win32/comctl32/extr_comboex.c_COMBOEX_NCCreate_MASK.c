
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_3 (HWND VAR_4)
{

    DWORD VAR_5, VAR_6;

    VAR_5 = (DWORD)FUNC_0 (VAR_4, VAR_0);
    VAR_6 = VAR_5 & ~(VAR_3 | VAR_2 | VAR_1);
    if (VAR_6 != VAR_5) {
 FUNC_2("req style %08x, resetting style %08x\n",
       VAR_5, VAR_6);
 FUNC_1 (VAR_4, VAR_0, VAR_6);
    }
    return 1;
}
