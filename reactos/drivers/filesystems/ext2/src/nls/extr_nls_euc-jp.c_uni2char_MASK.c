
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int (* uni2char ) (int const,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char,unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char,unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char,unsigned char) ;
 int FUNC_5 (unsigned char,unsigned char,int,unsigned char,unsigned char,int) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (unsigned char*,unsigned char,unsigned char) ;
 int FUNC_7 (unsigned char*,unsigned char,unsigned char) ;
 int FUNC_8 (int const,unsigned char*,int) ;

__attribute__((used)) static int FUNC_9(const wchar_t VAR_5,
                    unsigned char *VAR_6, int VAR_7)
{
    int VAR_8;

    if (!VAR_4)
        return -VAR_0;
    if ((VAR_8 = VAR_4->uni2char(VAR_5, VAR_6, VAR_7)) < 0)
        return VAR_8;


    if (VAR_8 == 1) {
        if (FUNC_1(VAR_6[0])) {

            if (VAR_7 < 2)
                return -VAR_1;

            VAR_6[1] = VAR_6[0];
            VAR_6[0] = VAR_2;
            return 2;
        }
    } else if (VAR_8 == 2) {

        FUNC_7(VAR_6, VAR_6[0], VAR_6[1]);

        if (FUNC_4(VAR_6[0], VAR_6[1])) {

            FUNC_5(VAR_6[0], VAR_6[1], 0xF0, VAR_6[0], VAR_6[1], 0xF5);
        } else if (FUNC_3(VAR_6[0], VAR_6[1])) {

            unsigned char VAR_9, VAR_10;

            if (VAR_7 < 3)
                return -VAR_1;

            VAR_8 = 3;
            VAR_9 = VAR_6[0];
            VAR_10 = VAR_6[1];
            VAR_6[0] = VAR_3;
            FUNC_5(VAR_9, VAR_10, 0xF5, VAR_6[1], VAR_6[2], 0xF5);
        } else if (FUNC_0(VAR_6[0], VAR_6[1])) {

            unsigned char VAR_11[3], VAR_12;

            VAR_8 = FUNC_6(VAR_11, VAR_6[0], VAR_6[1]);
            if (VAR_7 < VAR_8)
                return -VAR_1;
            for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
                VAR_6[VAR_12] = VAR_11[VAR_12];
        } else if (FUNC_2(VAR_6[0], VAR_6[1])) {

            VAR_6[0] = (VAR_6[0]^0xA0)*2 + 0x5F;
            if (VAR_6[1] > 0x9E)
                VAR_6[0]++;

            if (VAR_6[1] < 0x7F)
                VAR_6[1] = VAR_6[1] + 0x61;
            else if (VAR_6[1] < 0x9F)
                VAR_6[1] = VAR_6[1] + 0x60;
            else
                VAR_6[1] = VAR_6[1] + 0x02;
        } else {

            return -VAR_0;
        }
    }
    else
        return -VAR_0;

    return VAR_8;
}
