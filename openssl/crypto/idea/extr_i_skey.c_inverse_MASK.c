
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDEA_INT ;



__attribute__((used)) static IDEA_INT FUNC_0(unsigned int VAR_0)
{
    long VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    if (VAR_0 == 0)
        VAR_6 = 0;
    else {
        VAR_1 = 0x10001;
        VAR_2 = VAR_0;
        VAR_6 = 1;
        VAR_5 = 0;

        do {
            VAR_4 = (VAR_1 % VAR_2);
            VAR_3 = (VAR_1 - VAR_4) / VAR_2;
            if (VAR_4 == 0) {
                if (VAR_6 < 0)
                    VAR_6 = 0x10001 + VAR_6;
            } else {
                VAR_1 = VAR_2;
                VAR_2 = VAR_4;
                VAR_7 = VAR_6;
                VAR_6 = VAR_5 - VAR_3 * VAR_6;
                VAR_5 = VAR_7;
            }
        } while (VAR_4 != 0);
    }
    return (IDEA_INT)VAR_6;
}
