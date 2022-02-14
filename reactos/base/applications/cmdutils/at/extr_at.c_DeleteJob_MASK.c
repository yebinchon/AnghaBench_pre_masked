
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PWSTR ;
typedef scalar_t__ NET_API_STATUS ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static
INT
FUNC_4(
    PWSTR VAR_4,
    ULONG VAR_5,
    BOOL VAR_6)
{
    NET_API_STATUS VAR_7;

    if (VAR_5 == (ULONG)-1 && VAR_6 == VAR_0)
    {
        FUNC_0(VAR_3, VAR_1);
        if (!FUNC_1())
            return 0;
    }

    VAR_7 = FUNC_2(VAR_4,
                               (VAR_5 == (ULONG)-1) ? 0 : VAR_5,
                               (VAR_5 == (ULONG)-1) ? -1 : VAR_5);
    if (VAR_7 != VAR_2)
    {
        FUNC_3(VAR_7);
        return 1;
    }

    return 0;
}
