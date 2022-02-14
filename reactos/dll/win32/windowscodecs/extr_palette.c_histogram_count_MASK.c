
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {scalar_t__*** data; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct histogram *VAR_0, int VAR_1, int VAR_2,
                                           int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    unsigned int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;
    for (VAR_8 = VAR_1; VAR_8 <= VAR_2; VAR_8++)
    for (VAR_9 = VAR_3; VAR_9 <= VAR_4; VAR_9++)
    for (VAR_10 = VAR_5; VAR_10 <= VAR_6; VAR_10++)
        if (VAR_0->data[VAR_8][VAR_9][VAR_10] != 0) VAR_7++;
    return VAR_7;
}
