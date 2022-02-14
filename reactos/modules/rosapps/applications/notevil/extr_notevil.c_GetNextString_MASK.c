
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__* PDWORD ;
typedef int LPWSTR ;
typedef int INT ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

VOID
FUNC_1(LPWSTR VAR_3,
              INT VAR_4,
              PDWORD VAR_5)
{
    if (VAR_1 == *VAR_5)
        *VAR_5 = VAR_0;
    else
        ++*VAR_5;

    FUNC_0(VAR_2, *VAR_5, VAR_3, VAR_4);
}
