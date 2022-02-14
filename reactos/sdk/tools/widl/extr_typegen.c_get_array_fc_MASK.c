
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int expr_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;

 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int *,int ) ;
 int FUNC_2 (int const*) ;
 int VAR_12 ;
 int * FUNC_3 (int const*) ;
 unsigned int FUNC_4 (int const*) ;
 int * FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 unsigned int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int *,int ) ;

__attribute__((used)) static unsigned char FUNC_10(const type_t *VAR_13)
{
    unsigned char VAR_14;
    const expr_t *VAR_15;
    const type_t *VAR_16;

    VAR_16 = FUNC_5(VAR_13);
    VAR_15 = FUNC_3(VAR_13);

    if (!VAR_15)
    {
        unsigned int VAR_17 = FUNC_8(VAR_16);
        if (VAR_17 * FUNC_4(VAR_13) > 0xffffuL)
            VAR_14 = VAR_5;
        else
            VAR_14 = VAR_8;
    }
    else
        VAR_14 = VAR_2;

    if (FUNC_6(VAR_13))
    {
        if (VAR_14 == VAR_8)
            VAR_14 = VAR_9;
        else if (VAR_14 == VAR_5)
            VAR_14 = VAR_6;
        else if (VAR_14 == VAR_2)
            VAR_14 = VAR_3;
    }

    switch (FUNC_9(VAR_16, ((void*)0), VAR_10))
    {
    case 128:
        VAR_14 = VAR_1;
        break;
    case 139:
        if (FUNC_7(VAR_16) == VAR_11 &&
            VAR_12 != 4)
            VAR_14 = VAR_1;
        break;
    case 130:
        switch (FUNC_2(VAR_16))
        {
        case 141:
            VAR_14 = VAR_1;
            break;
        }
        break;
    case 136:


        if (FUNC_0(VAR_16) == VAR_4)
            VAR_14 = VAR_1;
        break;
    case 129:
    case 135:
        VAR_14 = VAR_1;
        break;
    case 133:



        if (FUNC_1(VAR_16, ((void*)0), VAR_0) == VAR_7 || VAR_12 != 4)
            VAR_14 = VAR_1;
        break;
    case 132:
        VAR_14 = VAR_1;
        break;
    case 138:
    case 137:
    case 131:
    case 134:
    case 140:

        break;
    }

    return VAR_14;
}
