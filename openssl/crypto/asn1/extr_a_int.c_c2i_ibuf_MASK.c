
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t,int) ;

__attribute__((used)) static size_t FUNC_2(unsigned char *VAR_3, int *VAR_4,
                       const unsigned char *VAR_5, size_t VAR_6)
{
    int VAR_7, VAR_8;

    if (VAR_6 == 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_7 = VAR_5[0] & 0x80;
    if (VAR_4)
        *VAR_4 = VAR_7;

    if (VAR_6 == 1) {
        if (VAR_3 != ((void*)0)) {
            if (VAR_7)
                VAR_3[0] = (VAR_5[0] ^ 0xFF) + 1;
            else
                VAR_3[0] = VAR_5[0];
        }
        return 1;
    }

    VAR_8 = 0;
    if (VAR_5[0] == 0) {
        VAR_8 = 1;
    } else if (VAR_5[0] == 0xFF) {
        size_t VAR_9;





        for (VAR_8 = 0, VAR_9 = 1; VAR_9 < VAR_6; VAR_9++)
            VAR_8 |= VAR_5[VAR_9];
        VAR_8 = VAR_8 != 0 ? 1 : 0;
    }

    if (VAR_8 && (VAR_7 == (VAR_5[1] & 0x80))) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }


    VAR_5 += VAR_8;
    VAR_6 -= VAR_8;

    if (VAR_3 != ((void*)0))
        FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7 ? 0xffU : 0);

    return VAR_6;
}
