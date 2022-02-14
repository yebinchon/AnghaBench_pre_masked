
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef scalar_t__ HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*,int ,int ,scalar_t__*) ;
 int FUNC_2 (int,char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_2, HKEY VAR_3, const char *VAR_4)
{
    HKEY VAR_5;
    LONG VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_4, 0, VAR_1, &VAR_5);
    FUNC_2(VAR_6 == VAR_0, "registry key '%s' shouldn't exist; got %d, expected 2\n",
        VAR_4, VAR_6);

    if (VAR_5)
        FUNC_0(VAR_5);
}
