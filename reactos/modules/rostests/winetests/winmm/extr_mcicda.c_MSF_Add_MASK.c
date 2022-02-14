
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static DWORD FUNC_4(DWORD VAR_1, DWORD VAR_2)
{
    WORD VAR_3, VAR_4, VAR_5, VAR_6;
    VAR_6 = FUNC_1(VAR_1) + FUNC_1(VAR_2);
    VAR_3 = VAR_6 / VAR_0;
    VAR_6 = VAR_6 % VAR_0;
    VAR_5 = FUNC_3(VAR_1) + FUNC_3(VAR_2) + VAR_3;
    VAR_3 = VAR_5 / 60;
    VAR_5 = VAR_5 % 60;
    VAR_4 = FUNC_2(VAR_1) + FUNC_2(VAR_2) + VAR_3;
    return FUNC_0(VAR_4,VAR_5,VAR_6);
}
