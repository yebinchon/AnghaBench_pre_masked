
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int persistent; } ;
typedef TYPE_1__ MSITABLE ;
typedef int MSIDATABASE ;
typedef int MSICONDITION ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__**) ;

MSICONDITION FUNC_3( MSIDATABASE *VAR_3, LPCWSTR VAR_4 )
{
    MSITABLE *VAR_5;
    UINT VAR_6;

    FUNC_0("%p %s\n", VAR_3, FUNC_1(VAR_4));

    if (!VAR_4)
        return VAR_1;

    VAR_6 = FUNC_2( VAR_3, VAR_4, &VAR_5 );
    if (VAR_6 != VAR_0)
        return VAR_2;

    return VAR_5->persistent;
}
