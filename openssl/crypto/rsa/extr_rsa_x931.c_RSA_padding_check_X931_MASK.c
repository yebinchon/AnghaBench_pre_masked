
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_2(unsigned char *VAR_4, int VAR_5,
                           const unsigned char *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = 0, VAR_10;
    const unsigned char *VAR_11;

    VAR_11 = VAR_6;
    if ((VAR_8 != VAR_7) || ((*VAR_11 != 0x6A) && (*VAR_11 != 0x6B))) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    if (*VAR_11++ == 0x6B) {
        VAR_10 = VAR_7 - 3;
        for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
            unsigned char VAR_12 = *VAR_11++;
            if (VAR_12 == 0xBA)
                break;
            if (VAR_12 != 0xBB) {
                FUNC_0(VAR_0, VAR_2);
                return -1;
            }
        }

        VAR_10 -= VAR_9;

        if (VAR_9 == 0) {
            FUNC_0(VAR_0, VAR_2);
            return -1;
        }

    } else {
        VAR_10 = VAR_7 - 2;
    }

    if (VAR_11[VAR_10] != 0xCC) {
        FUNC_0(VAR_0, VAR_3);
        return -1;
    }

    FUNC_1(VAR_4, VAR_11, (unsigned int)VAR_10);

    return VAR_10;
}
