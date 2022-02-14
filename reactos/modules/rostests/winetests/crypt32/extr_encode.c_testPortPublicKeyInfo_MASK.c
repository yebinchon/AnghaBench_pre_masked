
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCERT_PUBLIC_KEY_INFO ;
typedef int HCRYPTPROV ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    HCRYPTPROV VAR_5;
    BOOL VAR_6;
    PCERT_PUBLIC_KEY_INFO VAR_7 = ((void*)0);


    FUNC_0(&VAR_5, VAR_4, VAR_2, VAR_3,
     VAR_0);
    VAR_6 = FUNC_0(&VAR_5, VAR_4, VAR_2, VAR_3,
     VAR_1);
    FUNC_4(VAR_6,"CryptAcquireContextA failed\n");

    FUNC_5(VAR_5, &VAR_7);
    FUNC_6(VAR_5, VAR_7);

    FUNC_3(FUNC_2(), 0, VAR_7);
    FUNC_1(VAR_5, 0);
    VAR_6 = FUNC_0(&VAR_5, VAR_4, VAR_2, VAR_3,
     VAR_0);
    FUNC_4(VAR_6,"CryptAcquireContextA failed\n");
}
