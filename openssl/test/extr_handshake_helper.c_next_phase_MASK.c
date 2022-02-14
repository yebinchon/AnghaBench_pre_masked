
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int connect_phase_t ;
typedef int SSL_TEST_CTX ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static connect_phase_t FUNC_3(const SSL_TEST_CTX *VAR_0,
                                  connect_phase_t VAR_1)
{
    switch (VAR_1) {
    case 132:
        if (FUNC_2(VAR_0) || FUNC_1(VAR_0))
            return 131;
        return 134;
    case 131:
        return 129;
    case 129:
        if (FUNC_1(VAR_0))
            return 134;
        return 130;
    case 130:
        return 134;
    case 134:
        return 128;
    case 128:
        return 133;
    case 133:
        FUNC_0("Trying to progress after connection done");
        break;
    }
    return -1;
}
