
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_sws_filter {int sws; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct mp_sws_filter *VAR_0, int VAR_1,
                                int *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        int VAR_6 = VAR_2[VAR_5];

        if (!FUNC_1(VAR_0->sws, VAR_6, VAR_1))
            continue;

        if (VAR_4) {
            int VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_1);
            if (VAR_7)
                VAR_4 = VAR_7;
        } else {
            VAR_4 = VAR_6;
        }
    }
    return VAR_4;
}
