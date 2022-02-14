
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const EVP_MD *VAR_6, int VAR_7)
{
    int VAR_8;

    if (!VAR_6)
        return 1;

    VAR_8 = FUNC_0(VAR_6);

    if (VAR_7 == VAR_1) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }

    if (VAR_7 == VAR_5) {
        if (FUNC_1(VAR_8) == -1) {
            FUNC_2(VAR_0, VAR_4);
            return 0;
        }
    } else {
        switch(VAR_8) {

        case 136:
        case 135:
        case 134:
        case 133:
        case 128:
        case 140:
        case 139:
        case 142:
        case 141:
        case 138:
        case 137:
        case 132:
        case 131:
        case 130:
        case 129:
            return 1;

        default:
            FUNC_2(VAR_0, VAR_2);
            return 0;

        }
    }

    return 1;
}
