
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SecCertificateRef ;
typedef scalar_t__ OSStatus ;
typedef scalar_t__ HCERTSTORE ;
typedef size_t DWORD ;
typedef int CFDataRef ;
typedef int CFArrayRef ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int ,int ,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,int,unsigned int) ;
 int VAR_6 ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_15(HCERTSTORE VAR_9)
{
    HCERTSTORE VAR_10 = FUNC_8(VAR_2,
     VAR_6, 0, VAR_1, ((void*)0));

    if (VAR_10)
    {
        DWORD VAR_11;
        BOOL VAR_12 = VAR_4;
        for (VAR_11 = 0; !VAR_12 && VAR_11 < FUNC_0(VAR_3); VAR_11++)
            VAR_12 = FUNC_14(VAR_3[VAR_11], VAR_10, VAR_5);
        FUNC_13(VAR_10, VAR_9);
    }
    FUNC_7(VAR_10, 0);
}
