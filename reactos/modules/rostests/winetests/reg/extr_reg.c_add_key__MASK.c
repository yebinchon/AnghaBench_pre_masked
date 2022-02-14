
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const,char const*,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_4, const HKEY VAR_5, const char *VAR_6, HKEY *VAR_7)
{
    LONG VAR_8;

    VAR_8 = FUNC_0(VAR_5, VAR_6, 0, ((void*)0), VAR_3,
                          VAR_1|VAR_2, ((void*)0), VAR_7, ((void*)0));
    FUNC_1(VAR_8 == VAR_0, "RegCreateKeyExA failed: %d\n", VAR_8);
}
