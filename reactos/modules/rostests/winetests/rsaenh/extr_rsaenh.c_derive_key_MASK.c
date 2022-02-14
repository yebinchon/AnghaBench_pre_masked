
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbData ;
typedef scalar_t__ HCRYPTKEY ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef int BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned char*,int*,int ) ;
 int FUNC_4 (int ,unsigned char*,int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_7(ALG_ID VAR_7, HCRYPTKEY *VAR_8, DWORD VAR_9)
{
    HCRYPTHASH VAR_10;
    BOOL VAR_11;
    unsigned char VAR_12[2000];
    int VAR_13;

    *VAR_8 = 0;
    for (VAR_13=0; VAR_13<2000; VAR_13++) VAR_12[VAR_13] = (unsigned char)VAR_13;
    VAR_11 = FUNC_0(VAR_6, VAR_0, 0, 0, &VAR_10);
    if (!VAR_11) {

        FUNC_6(FUNC_5()==VAR_4, "%08x\n", FUNC_5());
        return VAR_2;
    }
    FUNC_6(VAR_11, "%08x\n", FUNC_5());
    VAR_11 = FUNC_4(VAR_10, VAR_12, sizeof(VAR_12), 0);
    FUNC_6(VAR_11, "%08x\n", FUNC_5());
    if (!VAR_11) return VAR_2;
    VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_10, (VAR_9 << 16) | VAR_1, VAR_8);
    FUNC_6(VAR_11, "%08x\n", FUNC_5());
    if (!VAR_11) return VAR_2;
    VAR_9 = 2000;
    VAR_11 = FUNC_3(VAR_10, VAR_3, VAR_12, &VAR_9, 0);
    FUNC_6(VAR_11, "%08x\n", FUNC_5());
    FUNC_2(VAR_10);
    return VAR_5;
}
