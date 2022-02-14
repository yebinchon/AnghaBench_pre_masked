
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int*,int*,int const*) ;
 size_t FUNC_3 () ;
 char* FUNC_4 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    size_t VAR_2;
    size_t VAR_3 = FUNC_3();

    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        const EVP_PKEY_METHOD *VAR_4 = FUNC_1(VAR_2);
        int VAR_5, VAR_6;

        FUNC_2(&VAR_5, &VAR_6, VAR_4);
        FUNC_0(VAR_1, "%s\n", FUNC_4(VAR_5));
        FUNC_0(VAR_1, "\tType: %s Algorithm\n",
                   VAR_6 & VAR_0 ? "External" : "Builtin");
    }
}
