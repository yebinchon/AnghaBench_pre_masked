
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {unsigned int*** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct histogram *VAR_3, int VAR_4, int VAR_5,
                                    int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    unsigned long long VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    unsigned int VAR_13, VAR_14 = 0;
    int VAR_15, VAR_16, VAR_17;

    for (VAR_15 = VAR_4; VAR_15 <= VAR_5; VAR_15++)
    for (VAR_16 = VAR_6; VAR_16 <= VAR_7; VAR_16++)
    for (VAR_17 = VAR_8; VAR_17 <= VAR_9; VAR_17++)
    {
        if (!(VAR_13 = VAR_3->data[VAR_15][VAR_16][VAR_17])) continue;
        VAR_10 += ((VAR_15 << VAR_2) + ((1 << VAR_2) / 2)) * VAR_13;
        VAR_11 += ((VAR_16 << VAR_1) + ((1 << VAR_1) / 2)) * VAR_13;
        VAR_12 += ((VAR_17 << VAR_0) + ((1 << VAR_0) / 2)) * VAR_13;
        VAR_14 += VAR_13;
    }

    return ((VAR_12 + (VAR_14 / 2)) / VAR_14) |
           ((VAR_11 + (VAR_14 / 2)) / VAR_14) << 8 |
           ((VAR_10 + (VAR_14 / 2)) / VAR_14) << 16 | 0xff000000;
}
