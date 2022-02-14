
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ l ;
struct TYPE_5__ {scalar_t__ neg; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__ const*,unsigned char*) ;
 int FUNC_1 (TYPE_1__ const*) ;

int FUNC_2(const BIGNUM *VAR_0, unsigned char *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;
    int VAR_4 = 0;
    long VAR_5;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = (VAR_2 + 7) / 8;
    if (VAR_2 > 0) {
        VAR_4 = ((VAR_2 & 0x07) == 0);
    }
    if (VAR_1 == ((void*)0))
        return (VAR_3 + 4 + VAR_4);

    VAR_5 = VAR_3 + VAR_4;
    VAR_1[0] = (unsigned char)(VAR_5 >> 24) & 0xff;
    VAR_1[1] = (unsigned char)(VAR_5 >> 16) & 0xff;
    VAR_1[2] = (unsigned char)(VAR_5 >> 8) & 0xff;
    VAR_1[3] = (unsigned char)(VAR_5) & 0xff;
    if (VAR_4)
        VAR_1[4] = 0;
    VAR_3 = FUNC_0(VAR_0, &(VAR_1[4 + VAR_4]));
    if (VAR_0->neg)
        VAR_1[4] |= 0x80;
    return (VAR_3 + 4 + VAR_4);
}
