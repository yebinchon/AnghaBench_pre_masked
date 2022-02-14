
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_opts {double doubleclick_time; int enable_mouse_movements; } ;
struct input_ctx {int last_doubleclick_key_down; double last_doubleclick_time; struct input_opts* opts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct input_ctx*,char*) ;
 int FUNC_4 (struct input_ctx*,int *,int) ;
 int FUNC_5 (struct input_ctx*,int,int,int) ;
 int FUNC_6 (struct input_ctx*,int ) ;
 int FUNC_7 (int) ;
 double FUNC_8 () ;
 int FUNC_9 (struct input_ctx*,int,double*,int*) ;
 int FUNC_10 (struct input_ctx*,int) ;
 int FUNC_11 (struct input_ctx*) ;

__attribute__((used)) static void FUNC_12(struct input_ctx *VAR_9, int VAR_10, double VAR_11,
                              bool VAR_12)
{
    struct input_opts *VAR_13 = VAR_9->opts;

    VAR_10 = FUNC_7(VAR_10);
    int VAR_14 = VAR_10 & ~VAR_1;
    if (VAR_10 == VAR_0) {
        FUNC_3(VAR_9, "release all\n");
        FUNC_10(VAR_9, 0);
        return;
    }
    if (!VAR_13->enable_mouse_movements && FUNC_0(VAR_14) && !VAR_12)
        return;
    if (VAR_14 == VAR_3 || VAR_14 == VAR_2) {
        FUNC_11(VAR_9);
        FUNC_6(VAR_9, FUNC_4(VAR_9, ((void*)0), VAR_10));
        return;
    }
    double VAR_15 = FUNC_8();

    if (!VAR_12 && VAR_13->doubleclick_time && FUNC_1(VAR_14))
        return;
    int VAR_16 = 1;
    if (FUNC_2(VAR_14) && !FUNC_9(VAR_9, VAR_14, &VAR_11, &VAR_16))
        return;
    FUNC_5(VAR_9, VAR_10, VAR_11, VAR_16);
    if (VAR_10 & VAR_4) {
        VAR_10 &= ~VAR_4;
        if (VAR_9->last_doubleclick_key_down == VAR_10 &&
            VAR_15 - VAR_9->last_doubleclick_time < VAR_13->doubleclick_time / 1000.0)
        {
            if (VAR_10 >= VAR_7 && VAR_10 <= VAR_8) {
                FUNC_5(VAR_9, VAR_10 - VAR_5 + VAR_6,
                              1, 1);
            }
        }
        VAR_9->last_doubleclick_key_down = VAR_10;
        VAR_9->last_doubleclick_time = VAR_15;
    }
}
