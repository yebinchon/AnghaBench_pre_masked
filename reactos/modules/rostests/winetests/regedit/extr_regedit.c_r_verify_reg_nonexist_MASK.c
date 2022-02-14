
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int *,int *,int *,int *) ;
 int FUNC_1 (int,char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1, HKEY VAR_2, const char *VAR_3)
{
    LONG VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_4 == VAR_0, "registry value '%s' shouldn't exist; got %d, expected 2\n",
       (VAR_3 && *VAR_3) ? VAR_3 : "(Default)", VAR_4);
}
