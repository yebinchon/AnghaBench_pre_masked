
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* count; int* state; } ;
typedef TYPE_1__ SHA1Context ;


 int FUNC_0 (TYPE_1__*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, SHA1Context *VAR_1){
    unsigned int VAR_2;
    unsigned char VAR_3[8];

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_3[VAR_2] = (unsigned char)((VAR_1->count[(VAR_2 >= 4 ? 0 : 1)]
         >> ((3-(VAR_2 & 3)) * 8) ) & 255);
    }
    FUNC_0(VAR_1, (const unsigned char *)"\200", 1);
    while ((VAR_1->count[0] & 504) != 448)
        FUNC_0(VAR_1, (const unsigned char *)"\0", 1);
    FUNC_0(VAR_1, VAR_3, 8);

    if (VAR_0) {
        for (VAR_2 = 0; VAR_2 < 20; VAR_2++)
            VAR_0[VAR_2] = (unsigned char)
                ((VAR_1->state[VAR_2>>2] >> ((3-(VAR_2 & 3)) * 8) ) & 255);
    }
}
