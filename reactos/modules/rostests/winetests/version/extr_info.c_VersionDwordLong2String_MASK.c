
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int LPSTR ;
typedef int DWORDLONG ;


 int FUNC_0 (int ,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(DWORDLONG VAR_0, LPSTR VAR_1)
{
    WORD VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_2 = (WORD)(VAR_0 >> 48);
    VAR_3 = (WORD)((VAR_0 >> 32) & 0xffff);
    VAR_4 = (WORD)((VAR_0 >> 16) & 0xffff);
    VAR_5 = (WORD)(VAR_0 & 0xffff);

    FUNC_0(VAR_1, "%d.%d.%d.%d", VAR_2, VAR_3, VAR_4, VAR_5);
}
