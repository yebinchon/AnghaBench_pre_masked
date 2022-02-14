
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {int *** data; } ;
struct box {scalar_t__ b_max; scalar_t__ b_min; scalar_t__ g_max; scalar_t__ g_min; scalar_t__ r_max; scalar_t__ r_min; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 struct histogram* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct histogram*) ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 unsigned int FUNC_3 (struct histogram*,struct box*) ;
 struct box* FUNC_4 (struct box*,int) ;
 struct box* FUNC_5 (struct box*,int) ;
 int FUNC_6 (struct histogram*,struct box*) ;
 int FUNC_7 (struct histogram*,struct box*,struct box*) ;

__attribute__((used)) static int FUNC_8(unsigned char *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
                      unsigned int VAR_10, int VAR_11, unsigned int *VAR_12)
{
    struct box VAR_13[256];
    struct histogram *VAR_14;
    unsigned int VAR_15, VAR_16;
    unsigned char *VAR_17;
    struct box *VAR_18, *VAR_19;
    int VAR_20, VAR_21;

    if (!(VAR_14 = FUNC_1(FUNC_0(), VAR_4, sizeof(*VAR_14))))
        return 0;

    for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
        for (VAR_15 = 0, VAR_17 = VAR_7 + VAR_16 * VAR_10; VAR_15 < VAR_8; VAR_15++, VAR_17 += 3)
            VAR_14->data[VAR_17[2] >> VAR_6][VAR_17[1] >> VAR_3][VAR_17[0] >> VAR_1]++;

    VAR_20 = 1;
    VAR_13[0].r_min = 0; VAR_13[0].r_max = VAR_5 - 1;
    VAR_13[0].g_min = 0; VAR_13[0].g_max = VAR_2 - 1;
    VAR_13[0].b_min = 0; VAR_13[0].b_max = VAR_0 - 1;
    FUNC_6(VAR_14, &VAR_13[0]);

    while (VAR_20 <= VAR_11 / 2)
    {
        if (!(VAR_18 = FUNC_4(VAR_13, VAR_20))) break;
        VAR_19 = &VAR_13[VAR_20++];
        FUNC_7(VAR_14, VAR_18, VAR_19);
    }
    while (VAR_20 < VAR_11)
    {
        if (!(VAR_18 = FUNC_5(VAR_13, VAR_20))) break;
        VAR_19 = &VAR_13[VAR_20++];
        FUNC_7(VAR_14, VAR_18, VAR_19);
    }

    for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
        VAR_12[VAR_21] = FUNC_3(VAR_14, &VAR_13[VAR_21]);

    FUNC_2(FUNC_0(), 0, VAR_14);
    return VAR_20;
}
