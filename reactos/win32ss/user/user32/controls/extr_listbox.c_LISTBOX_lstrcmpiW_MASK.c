
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int LCID ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static inline INT FUNC_1( LCID VAR_4, LPCWSTR VAR_5, LPCWSTR VAR_6 )
{
    INT VAR_7 = FUNC_0( VAR_4, VAR_3, VAR_5, -1, VAR_6, -1 );
    if (VAR_7 == VAR_2)
        return -1;
    if (VAR_7 == VAR_0)
        return 0;
    if (VAR_7 == VAR_1)
        return 1;
    return -1;
}
