
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;
typedef scalar_t__ SIZE_T ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static BOOL
FUNC_4(SOCKET VAR_4, CHAR *VAR_5)
{
    SIZE_T VAR_6 = FUNC_3(VAR_5) + 1;
    if (FUNC_2(VAR_4, VAR_5, VAR_6, 0) == VAR_2)
    {
        FUNC_0(L"DayTime: Error sending data", FUNC_1(), 0, VAR_1);
        return VAR_0;
    }

    return VAR_3;
}
