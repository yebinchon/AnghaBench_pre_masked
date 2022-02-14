
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int const*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int const*,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static LONG FUNC_4(
    HKEY VAR_4,
    WCHAR const *VAR_5,
    WCHAR const *VAR_6)
{
    LONG VAR_7;
    HKEY VAR_8;

    VAR_7 = FUNC_1(VAR_4, VAR_5, 0, ((void*)0), 0,
     VAR_1 | VAR_2, ((void*)0), &VAR_8, ((void*)0));
    if (VAR_7 != VAR_0) return VAR_7;
    VAR_7 = FUNC_2(VAR_8, ((void*)0), 0, VAR_3, (const BYTE*)VAR_6,
    (FUNC_3(VAR_6) + 1) * sizeof(WCHAR));
    FUNC_0(VAR_8);
    return VAR_7;
}
