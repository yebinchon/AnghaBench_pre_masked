
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef scalar_t__ (* CertCompareFunc ) (int *,int ,int ,void const*) ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline PCCERT_CONTEXT FUNC_1(HCERTSTORE VAR_1,
 PCCERT_CONTEXT VAR_2, CertCompareFunc VAR_3, DWORD VAR_4, DWORD VAR_5,
 const void *VAR_6)
{
    BOOL VAR_7 = VAR_0;
    PCCERT_CONTEXT VAR_8;

    VAR_8 = VAR_2;
    do {
        VAR_8 = FUNC_0(VAR_1, VAR_8);
        if (VAR_8)
            VAR_7 = VAR_3(VAR_8, VAR_4, VAR_5, VAR_6);
    } while (VAR_8 != ((void*)0) && !VAR_7);
    return VAR_8;
}
