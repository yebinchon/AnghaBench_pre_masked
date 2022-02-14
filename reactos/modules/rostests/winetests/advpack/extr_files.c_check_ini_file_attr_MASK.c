
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_2(LPSTR VAR_4)
{
    BOOL VAR_5;
    DWORD VAR_6 = VAR_0 | VAR_2;
    DWORD VAR_7 = FUNC_0(VAR_4);

    VAR_5 = (VAR_7 & VAR_6) && (VAR_7 != VAR_3);
    FUNC_1(VAR_4, VAR_1);

    return VAR_5;
}
