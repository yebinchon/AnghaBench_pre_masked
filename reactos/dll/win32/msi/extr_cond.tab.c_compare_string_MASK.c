
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static INT FUNC_7( LPCWSTR VAR_3, INT VAR_4, LPCWSTR VAR_5, BOOL VAR_6 )
{
    if (VAR_4 >= VAR_1 && VAR_4 <= VAR_0)
        return FUNC_3( VAR_3, VAR_4, VAR_5 );


    if (!VAR_3) VAR_3 = VAR_2;
    if (!VAR_5) VAR_5 = VAR_2;

    if (VAR_6 && FUNC_4(VAR_3) && FUNC_4(VAR_5))
        return FUNC_2( FUNC_1(VAR_3), VAR_4, FUNC_1(VAR_5) );


    switch (VAR_4)
    {
    case 129:
        return FUNC_5( VAR_3, VAR_5 ) < 0;
    case 137:
        return FUNC_5( VAR_3, VAR_5 ) > 0;
    case 139:
        return FUNC_5( VAR_3, VAR_5 ) == 0;
    case 128:
        return FUNC_5( VAR_3, VAR_5 ) != 0;
    case 138:
        return FUNC_5( VAR_3, VAR_5 ) >= 0;
    case 130:
        return FUNC_5( VAR_3, VAR_5 ) <= 0;
    case 132:
        return FUNC_6( VAR_3, VAR_5 ) < 0;
    case 134:
        return FUNC_6( VAR_3, VAR_5 ) > 0;
    case 136:
        return FUNC_6( VAR_3, VAR_5 ) == 0;
    case 131:
        return FUNC_6( VAR_3, VAR_5 ) != 0;
    case 135:
        return FUNC_6( VAR_3, VAR_5 ) >= 0;
    case 133:
        return FUNC_6( VAR_3, VAR_5 ) <= 0;
    default:
        FUNC_0("invalid string operator\n");
        return 0;
    }
    return 0;
}
