
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct input_manager {TYPE_2__* video_buffer; int screen; struct controller* controller; } ;
struct fps_counter {int dummy; } ;
struct controller {int dummy; } ;
struct control_msg {int dummy; } ;
struct TYPE_6__ {int mod; int sym; } ;
struct TYPE_8__ {scalar_t__ type; int repeat; TYPE_1__ keysym; } ;
struct TYPE_7__ {struct fps_counter* fps_counter; } ;
typedef int SDL_Keycode ;
typedef TYPE_3__ SDL_KeyboardEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct controller*,int) ;
 int FUNC_2 (struct controller*,int) ;
 int FUNC_3 (struct controller*,int) ;
 int FUNC_4 (struct controller*,int) ;
 int FUNC_5 (struct controller*,int) ;
 int FUNC_6 (struct controller*,int) ;
 int FUNC_7 (struct controller*,int) ;
 int FUNC_8 (struct controller*) ;
 int FUNC_9 (struct controller*) ;
 int FUNC_10 (struct controller*,struct control_msg*) ;
 scalar_t__ FUNC_11 (TYPE_3__ const*,struct control_msg*) ;
 int FUNC_12 (struct controller*) ;
 int FUNC_13 (struct controller*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct controller*) ;
 int FUNC_18 (struct controller*,int ) ;
 int FUNC_19 (struct fps_counter*) ;

void
FUNC_20(struct input_manager *VAR_12,
                          const SDL_KeyboardEvent *VAR_13,
                          bool VAR_14) {



    bool VAR_15 = VAR_13->keysym.mod & (VAR_3 | VAR_7);
    bool VAR_16 = VAR_13->keysym.mod & (VAR_2 | VAR_6);
    bool VAR_17 = VAR_13->keysym.mod & (VAR_4 | VAR_8);





    if (VAR_17) {


        return;
    }
    bool VAR_18 = VAR_15;


    if (VAR_16) {

        return;
    }

    struct controller *VAR_19 = VAR_12->controller;


    if (VAR_15 || VAR_18) {
        SDL_Keycode VAR_20 = VAR_13->keysym.sym;
        bool VAR_21 = VAR_13->type == VAR_11;
        int VAR_22 = VAR_21 ? VAR_0 : VAR_1;
        bool VAR_23 = VAR_13->repeat;
        bool VAR_24 = VAR_13->keysym.mod & (VAR_5 | VAR_9);
        switch (VAR_20) {
            case 136:


                if (VAR_14 && VAR_15 && !VAR_17 && !VAR_24 && !VAR_23) {
                    FUNC_3(VAR_19, VAR_22);
                }
                return;
            case 140:
            case 143:
                if (VAR_14 && VAR_18 && !VAR_24 && !VAR_23) {
                    FUNC_2(VAR_19, VAR_22);
                }
                return;
            case 130:
                if (VAR_14 && VAR_18 && !VAR_24 && !VAR_23) {
                    FUNC_1(VAR_19, VAR_22);
                }
                return;
            case 134:


                if (VAR_14 && VAR_15 && !VAR_17 && !VAR_24 && !VAR_23) {
                    FUNC_4(VAR_19, VAR_22);
                }
                return;
            case 131:
                if (VAR_14 && VAR_18 && !VAR_24 && !VAR_23) {
                    FUNC_5(VAR_19, VAR_22);
                }
                return;
            case 132:
                if (VAR_14 && VAR_18 && !VAR_24 && VAR_21) {
                    FUNC_18(VAR_19, VAR_10);
                }
                return;
            case 142:
                if (VAR_14 && VAR_18 && !VAR_24) {

                    FUNC_6(VAR_19, VAR_22);
                }
                return;
            case 141:
                if (VAR_14 && VAR_18 && !VAR_24) {

                    FUNC_7(VAR_19, VAR_22);
                }
                return;
            case 139:
                if (VAR_14 && VAR_18 && !VAR_24 && !VAR_23 && VAR_21) {
                    FUNC_13(VAR_19);
                }
                return;
            case 129:
                if (VAR_14 && VAR_18 && !VAR_23 && VAR_21) {
                    if (VAR_24) {

                        FUNC_17(VAR_19);
                    } else {

                        FUNC_8(VAR_19);
                    }
                }
                return;
            case 138:
                if (!VAR_24 && VAR_18 && !VAR_23 && VAR_21) {
                    FUNC_16(VAR_12->screen);
                }
                return;
            case 128:
                if (!VAR_24 && VAR_18 && !VAR_23 && VAR_21) {
                    FUNC_14(VAR_12->screen);
                }
                return;
            case 137:
                if (!VAR_24 && VAR_18 && !VAR_23 && VAR_21) {
                    FUNC_15(VAR_12->screen);
                }
                return;
            case 135:
                if (!VAR_24 && VAR_18 && !VAR_23 && VAR_21) {
                    struct fps_counter *VAR_25 =
                        VAR_12->video_buffer->fps_counter;
                    FUNC_19(VAR_25);
                }
                return;
            case 133:
                if (VAR_14 && VAR_18 && !VAR_23 && VAR_21) {
                    if (VAR_24) {
                        FUNC_9(VAR_19);
                    } else {
                        FUNC_12(VAR_19);
                    }
                }
                return;
        }

        return;
    }

    if (!VAR_14) {
        return;
    }

    struct control_msg VAR_26;
    if (FUNC_11(VAR_13, &VAR_26)) {
        if (!FUNC_10(VAR_19, &VAR_26)) {
            FUNC_0("Could not request 'inject keycode'");
        }
    }
}
