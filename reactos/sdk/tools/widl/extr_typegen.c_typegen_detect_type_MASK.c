
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef enum typegen_type { ____Placeholder_typegen_type } typegen_type ;
typedef int attr_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int const* FUNC_5 (int const*) ;

enum typegen_type FUNC_6(const type_t *VAR_18, const attr_list_t *VAR_19, unsigned int VAR_20)
{
    if (FUNC_3(VAR_18))
        return VAR_17;

    if (FUNC_0(VAR_18, VAR_0))
        return VAR_7;

    if (!(VAR_20 & VAR_4) && FUNC_2(VAR_19, VAR_18))
        return VAR_14;

    switch (FUNC_4(VAR_18))
    {
    case 139:
        if (!(VAR_20 & VAR_3) &&
            (FUNC_1(VAR_19, VAR_2) || FUNC_0(VAR_18, VAR_2)))
            return VAR_13;
        return VAR_6;
    case 135:
        if (!(VAR_20 & VAR_3) &&
            (FUNC_1(VAR_19, VAR_2) || FUNC_0(VAR_18, VAR_2)))
            return VAR_13;
        return VAR_9;
    case 131:
        if (FUNC_4(FUNC_5(VAR_18)) == 133 ||
            (FUNC_4(FUNC_5(VAR_18)) == 128 && FUNC_1(VAR_19, VAR_1)))
            return VAR_10;
        else if (FUNC_0(FUNC_5(VAR_18), VAR_0))
            return VAR_8;
        else
            return VAR_12;
    case 130:
        return VAR_15;
    case 136:
    case 129:
        return VAR_16;
    case 140:
        return VAR_5;
    case 134:
    case 137:
    case 133:
    case 132:
    case 128:
    case 141:
    case 138:
        break;
    }
    return VAR_11;
}
