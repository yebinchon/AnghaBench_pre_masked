
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ COLORREF ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int,int,int) ;

__attribute__((used)) static BOOL FUNC_1( COLORREF VAR_0, COLORREF VAR_1, int VAR_2, int VAR_3, int VAR_4 )
{
    if (VAR_0 == 0 || VAR_1 == 0xffffff) return FUNC_0(VAR_2,VAR_3,VAR_4) != 0xffffff && FUNC_0(VAR_2,VAR_3,VAR_4) != VAR_1;
    return FUNC_0(VAR_2,VAR_3,VAR_4) == 0x000000 || FUNC_0(VAR_2,VAR_3,VAR_4) == VAR_1;
}
