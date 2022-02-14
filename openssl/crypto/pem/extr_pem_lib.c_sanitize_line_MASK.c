
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,unsigned char const*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, int VAR_3, unsigned int VAR_4, int VAR_5)
{
    int VAR_6;
    if (VAR_5) {


        const unsigned char VAR_7[3] = {0xEF, 0xBB, 0xBF};

        if (VAR_3 > 3 && FUNC_0(VAR_2, VAR_7, 3) == 0) {
            FUNC_1(VAR_2, VAR_2 + 3, VAR_3 - 3);
            VAR_2[VAR_3 - 3] = 0;
            VAR_3 -= 3;
        }
    }

    if (VAR_4 & VAR_0) {

        while ((VAR_3 >= 0) && (VAR_2[VAR_3] <= ' '))
            VAR_3--;

        VAR_3++;
    } else if (VAR_4 & VAR_1) {
        for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
            if (!FUNC_2(VAR_2[VAR_6]) || VAR_2[VAR_6] == '\n'
                || VAR_2[VAR_6] == '\r')
                break;
        }
        VAR_3 = VAR_6;
    } else {


        for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
            if (VAR_2[VAR_6] == '\n' || VAR_2[VAR_6] == '\r')
                break;
            if (FUNC_3(VAR_2[VAR_6]))
                VAR_2[VAR_6] = ' ';
        }
        VAR_3 = VAR_6;
    }

    VAR_2[VAR_3++] = '\n';
    VAR_2[VAR_3] = '\0';
    return VAR_3;
}
