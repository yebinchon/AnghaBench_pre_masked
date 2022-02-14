
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ht; } ;
typedef TYPE_2__ dict ;
struct TYPE_4__ {long long size; long long used; scalar_t__ table; } ;



long long FUNC_0(dict *VAR_0) {
    long long VAR_1[6], VAR_2 = 0;
    int VAR_3;

    VAR_1[0] = (long) VAR_0->ht[0].table;
    VAR_1[1] = VAR_0->ht[0].size;
    VAR_1[2] = VAR_0->ht[0].used;
    VAR_1[3] = (long) VAR_0->ht[1].table;
    VAR_1[4] = VAR_0->ht[1].size;
    VAR_1[5] = VAR_0->ht[1].used;
    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
        VAR_2 += VAR_1[VAR_3];

        VAR_2 = (~VAR_2) + (VAR_2 << 21);
        VAR_2 = VAR_2 ^ (VAR_2 >> 24);
        VAR_2 = (VAR_2 + (VAR_2 << 3)) + (VAR_2 << 8);
        VAR_2 = VAR_2 ^ (VAR_2 >> 14);
        VAR_2 = (VAR_2 + (VAR_2 << 2)) + (VAR_2 << 4);
        VAR_2 = VAR_2 ^ (VAR_2 >> 28);
        VAR_2 = VAR_2 + (VAR_2 << 31);
    }
    return VAR_2;
}
