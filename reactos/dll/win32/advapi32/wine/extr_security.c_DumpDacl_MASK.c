
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int SECURITY_DESCRIPTOR_CONTROL ;
typedef int PSECURITY_DESCRIPTOR ;
typedef int PACL ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,char**,int *,int,int,int) ;
 int FUNC_1 (char const*,int,char**,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(PSECURITY_DESCRIPTOR VAR_5, WCHAR **VAR_6, ULONG *VAR_7)
{
    static const WCHAR VAR_8[] = {'D',':',0};
    SECURITY_DESCRIPTOR_CONTROL VAR_9;
    BOOL VAR_10, VAR_11;
    DWORD VAR_12;
    PACL VAR_13;

    if (!FUNC_3(VAR_5, &VAR_10, &VAR_13, &VAR_11))
        return VAR_0;

    if (!FUNC_2(VAR_5, &VAR_9, &VAR_12))
        return VAR_0;

    if (!VAR_10)
        return VAR_4;

    FUNC_1(VAR_8, 2, VAR_6, VAR_7);
    if (!FUNC_0(VAR_13, VAR_6, VAR_7, VAR_9 & VAR_3, VAR_9 & VAR_2, VAR_9 & VAR_1))
        return VAR_0;
    return VAR_4;
}
