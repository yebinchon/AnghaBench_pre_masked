
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long size; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int FUNC_0 (int const*,long) ;
 int FUNC_1 (long*,int const**,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(const ASN1_VALUE **VAR_0, unsigned char *VAR_1, int *VAR_2,
                    const ASN1_ITEM *VAR_3)
{
    long VAR_4;
    unsigned long VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9;

    FUNC_1(&VAR_4, VAR_0, FUNC_0(*VAR_0, VAR_4));
    if (VAR_4 == VAR_3->size)
        return -1;





    if (VAR_4 < 0) {
        VAR_6 = 0xff;
        VAR_5 = 0 - (unsigned long)VAR_4 - 1;
    } else {
        VAR_6 = 0;
        VAR_5 = VAR_4;
    }
    VAR_7 = FUNC_2(VAR_5);

    if (!(VAR_7 & 0x7))
        VAR_8 = 1;
    else
        VAR_8 = 0;


    VAR_7 = (VAR_7 + 7) >> 3;

    if (VAR_1 != ((void*)0)) {
        if (VAR_8)
            *VAR_1++ = (unsigned char)VAR_6;
        for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--) {
            VAR_1[VAR_9] = (unsigned char)(VAR_5 ^ VAR_6);
            VAR_5 >>= 8;
        }
    }
    return VAR_7 + VAR_8;
}
