
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int attr_list_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;





 int VAR_3 ;






 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int ) ;
 unsigned int FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 (int const*,char const**) ;
 int FUNC_9 (int const*,int const*) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_10 (int const*) ;
 int * FUNC_11 (int const*) ;
 int * FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*,int *,int ) ;

__attribute__((used)) static unsigned int FUNC_15(
    const type_t *VAR_5, const char *VAR_6, const attr_list_t *VAR_7, int VAR_8, unsigned int *VAR_9)
{
    *VAR_9 = 0;
    switch (FUNC_14(VAR_5, ((void*)0), VAR_3))
    {
    case 128:
    {
        const char *VAR_10 = ((void*)0);
        const type_t *VAR_11 = FUNC_8(VAR_5, &VAR_10);
        return FUNC_15(VAR_11, VAR_10, ((void*)0), VAR_0, VAR_9);
    }
    case 132:
        switch (FUNC_4(VAR_5))
        {
        case 153:
        case 152:
        case 135:
        case 140:
            *VAR_9 = 4;
            return 1;

        case 134:
        case 136:
        case 141:
            *VAR_9 = 4;
            return 2;

        case 137:
        case 142:
        case 147:
        case 148:
            *VAR_9 = 4;
            return 4;

        case 146:
        case 151:
            *VAR_9 = 8;
            return 8;

        case 144:
        case 138:
            FUNC_0( VAR_4 );
            *VAR_9 = VAR_4;
            return VAR_4;

        case 145:
        case 154:
            return 0;

        default:
            FUNC_1("get_required_buffer_size: unknown basic type 0x%02x\n",
                  FUNC_4(VAR_5));
            return 0;
        }
        break;

    case 131:
        switch (FUNC_5(VAR_5))
        {
        case 149:
            *VAR_9 = 4;
            return 4;
        case 150:
            *VAR_9 = 4;
            return 2;
        }
        break;

    case 129:
        if (FUNC_7(VAR_5) == VAR_2)
        {
            if (!FUNC_13(VAR_5)) return 0;
            return FUNC_2(FUNC_13(VAR_5), VAR_9);
        }
        break;

    case 130:
        {
            unsigned int VAR_12, VAR_13;
            const type_t *VAR_14 = FUNC_12(VAR_5);
            if (FUNC_9( VAR_7, VAR_14 )) break;
            if (!(VAR_12 = FUNC_15( VAR_14, VAR_6, ((void*)0), VAR_0, &VAR_13 ))) break;
            if (FUNC_6(VAR_5, VAR_7, VAR_8) != VAR_1)
            {
                VAR_12 += 4 + VAR_13;
                VAR_13 = 4;
            }
            *VAR_9 = VAR_13;
            return VAR_12;
        }

    case 133:
        if (FUNC_6(VAR_5, VAR_7, VAR_8) == VAR_1)
        {
            switch (FUNC_3(VAR_5))
            {
            case 139:
            case 143:
                return FUNC_10(VAR_5) *
                    FUNC_15(FUNC_11(VAR_5), VAR_6,
                                                  ((void*)0), VAR_0, VAR_9);
            }
        }
        break;

    default:
        break;
    }
    return 0;
}
