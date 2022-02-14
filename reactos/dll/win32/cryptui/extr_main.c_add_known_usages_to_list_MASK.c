
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCCRYPT_OID_INFO ;
typedef int HWND ;
typedef int CheckBitmapIndex ;


 scalar_t__ FUNC_0 (int,scalar_t__**) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(HWND VAR_0, CheckBitmapIndex VAR_1)
{
    PCCRYPT_OID_INFO *VAR_2;

    if (FUNC_0(1, &VAR_2))
    {
        PCCRYPT_OID_INFO *VAR_3;

        for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
            FUNC_1(VAR_0, *VAR_3, VAR_1);
        FUNC_0(2, &VAR_2);
    }
}
