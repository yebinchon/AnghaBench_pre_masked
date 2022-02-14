
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fps_counter {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct fps_counter*) ;
 scalar_t__ FUNC_3 (struct fps_counter*) ;
 int FUNC_4 (struct fps_counter*) ;

__attribute__((used)) static void
FUNC_5(struct fps_counter *VAR_0) {


    if (FUNC_2(VAR_0)) {
        FUNC_4(VAR_0);
        FUNC_1("FPS counter stopped");
    } else {
        if (FUNC_3(VAR_0)) {
            FUNC_1("FPS counter started");
        } else {
            FUNC_0("FPS counter starting failed");
        }
    }
}
