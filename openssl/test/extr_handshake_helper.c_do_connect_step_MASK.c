
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int connect_phase_t ;
typedef int SSL_TEST_CTX ;
typedef int PEER ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(const SSL_TEST_CTX *VAR_0, PEER *VAR_1,
                            connect_phase_t VAR_2)
{
    switch (VAR_2) {
    case 132:
        FUNC_2(VAR_1);
        break;
    case 131:
        FUNC_1(VAR_1);
        break;
    case 129:
        FUNC_3(VAR_0, VAR_1);
        break;
    case 130:
        FUNC_2(VAR_1);
        break;
    case 134:
        FUNC_1(VAR_1);
        break;
    case 128:
        FUNC_4(VAR_1);
        break;
    case 133:
        FUNC_0("Action after connection done");
        break;
    }
}
