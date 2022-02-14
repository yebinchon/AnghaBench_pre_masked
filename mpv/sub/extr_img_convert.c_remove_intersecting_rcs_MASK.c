
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int x0; int x1; int y0; int y1; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_rect*,int,int) ;
 int FUNC_1 (struct mp_rect*,struct mp_rect*) ;

__attribute__((used)) static void FUNC_2(struct mp_rect *VAR_1, int *VAR_2)
{
    int VAR_3 = VAR_0;
    bool VAR_4 = 1;
    while (VAR_4) {
        VAR_4 = 0;
        for (int VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++) {
            struct mp_rect *VAR_6 = &VAR_1[VAR_5];
            for (int VAR_7 = *VAR_2 - 1; VAR_7 > VAR_5; VAR_7--) {
                struct mp_rect *VAR_8 = &VAR_1[VAR_7];
                if (VAR_6->x0 - VAR_3 <= VAR_8->x1 && VAR_6->x1 + VAR_3 >= VAR_8->x0 &&
                    VAR_6->y0 - VAR_3 <= VAR_8->y1 && VAR_6->y1 + VAR_3 >= VAR_8->y0)
                {
                    FUNC_1(VAR_6, VAR_8);
                    FUNC_0(VAR_1, *VAR_2, VAR_7);
                    VAR_4 = 1;
                }
            }
        }
    }
}
