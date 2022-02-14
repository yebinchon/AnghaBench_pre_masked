
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT ;
typedef unsigned char* LPSTR ;
typedef size_t* LPCWSTR ;


 size_t FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (size_t*) ;

__attribute__((used)) static UINT FUNC_3( LPCWSTR VAR_1, LPSTR VAR_2 )
{
    unsigned int VAR_3 = 0;

    while(*VAR_1)
    {
        signed char VAR_4[4];

        if (VAR_1[0] >= FUNC_0(VAR_0) ||
            ((VAR_4[0] = VAR_0[VAR_1[0]]) == -1) ||
            VAR_1[1] >= FUNC_0(VAR_0) ||
            ((VAR_4[1] = VAR_0[VAR_1[1]]) == -1))
        {
            FUNC_1("invalid base64: %s\n", FUNC_2(VAR_1));
            return 0;
        }
        if (VAR_2)
            VAR_2[VAR_3] = (unsigned char) (VAR_4[0] << 2 | VAR_4[1] >> 4);
        VAR_3++;

        if ((VAR_1[2] == '=') && (VAR_1[3] == '='))
            break;
        if (VAR_1[2] > FUNC_0(VAR_0) ||
            ((VAR_4[2] = VAR_0[VAR_1[2]]) == -1))
        {
            FUNC_1("invalid base64: %s\n", FUNC_2(&VAR_1[2]));
            return 0;
        }
        if (VAR_2)
            VAR_2[VAR_3] = (unsigned char) (VAR_4[1] << 4 | VAR_4[2] >> 2);
        VAR_3++;

        if (VAR_1[3] == '=')
            break;
        if (VAR_1[3] > FUNC_0(VAR_0) ||
            ((VAR_4[3] = VAR_0[VAR_1[3]]) == -1))
        {
            FUNC_1("invalid base64: %s\n", FUNC_2(&VAR_1[3]));
            return 0;
        }
        if (VAR_2)
            VAR_2[VAR_3] = (unsigned char) (((VAR_4[2] << 6) & 0xc0) | VAR_4[3]);
        VAR_3++;

        VAR_1 += 4;
    }

    return VAR_3;
}
