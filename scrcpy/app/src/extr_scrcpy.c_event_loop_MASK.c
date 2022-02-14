
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_result { ____Placeholder_event_result } event_result ;
typedef int SDL_Event ;





 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static bool
FUNC_3(bool VAR_1, bool VAR_2) {





    SDL_Event VAR_3;
    while (FUNC_1(&VAR_3)) {
        enum event_result VAR_4 = FUNC_2(&VAR_3, VAR_2);
        switch (VAR_4) {
            case 128:
                return 1;
            case 129:
                return 0;
            case 130:
                break;
        }
    }
    return 0;
}
