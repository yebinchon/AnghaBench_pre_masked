
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int value; scalar_t__ wstr; } ;
typedef char* LPCWSTR ;
typedef int BYTE ;
typedef TYPE_1__ ACEFLAG ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int) ;

__attribute__((used)) static BYTE FUNC_2(LPCWSTR* VAR_1)
{
    UINT VAR_2 = 0;
    LPCWSTR VAR_3 = *VAR_1;
    const ACEFLAG *VAR_4 = VAR_0;

    while (*VAR_3 == ' ')
        VAR_3++;

    while (VAR_4->wstr &&
        (VAR_2 = FUNC_0(VAR_4->wstr)) &&
        FUNC_1(VAR_4->wstr, VAR_3, VAR_2))
        VAR_4++;

    if (!VAR_4->wstr)
        return 0;

    *VAR_1 = VAR_3 + VAR_2;
    return VAR_4->value;
}
