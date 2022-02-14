
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long size; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,long) ;
 int FUNC_2 (int **,long*,int ) ;

__attribute__((used)) static int FUNC_3(ASN1_VALUE **VAR_3, const unsigned char *VAR_4, int VAR_5,
                    int VAR_6, char *VAR_7, const ASN1_ITEM *VAR_8)
{
    int VAR_9;
    long VAR_10;
    unsigned long VAR_11 = 0, VAR_12 = 0x100;

    if (VAR_5 > 1) {





        switch (VAR_4[0]) {
        case 0xff:
            VAR_4++;
            VAR_5--;
            VAR_12 = 0xff;
            break;
        case 0:
            VAR_4++;
            VAR_5--;
            VAR_12 = 0;
            break;
        }
    }
    if (VAR_5 > (int)sizeof(long)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_12 == 0x100) {

        if (VAR_5 && (VAR_4[0] & 0x80))
            VAR_12 = 0xff;
        else
            VAR_12 = 0;
    } else if (((VAR_12 ^ VAR_4[0]) & 0x80) == 0) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_11 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        VAR_11 <<= 8;
        VAR_11 |= VAR_4[VAR_9] ^ VAR_12;
    }
    VAR_10 = (long)VAR_11;
    if (VAR_10 < 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_12)
        VAR_10 = -VAR_10 - 1;
    if (VAR_10 == VAR_8->size) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    FUNC_2(VAR_3, &VAR_10, FUNC_1(*VAR_3, VAR_10));
    return 1;
}
