
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int file_handler_action_t ;
typedef enum event_result { ____Placeholder_event_result } event_result ;
struct TYPE_12__ {int has_frame; } ;
struct TYPE_10__ {int file; } ;
struct TYPE_9__ {int event; } ;
struct TYPE_11__ {int type; TYPE_2__ drop; int button; int wheel; int motion; int key; int text; TYPE_1__ window; } ;
typedef TYPE_3__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 TYPE_4__ VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int VAR_8 ;

__attribute__((used)) static enum event_result
FUNC_11(SDL_Event *VAR_9, bool VAR_10) {
    switch (VAR_9->type) {
        case 140:
            FUNC_0("Video stream stopped");
            return VAR_3;
        case 132:
            FUNC_0("User requested to quit");
            return VAR_4;
        case 141:
            if (!VAR_7.has_frame) {
                VAR_7.has_frame = 1;

                FUNC_9(&VAR_7);
            }
            if (!FUNC_10(&VAR_7, &VAR_8)) {
                return VAR_2;
            }
            break;
        case 130:
            switch (VAR_9->window.event) {
                case 129:
                case 128:
                    FUNC_8(&VAR_7);
                    break;
            }
            break;
        case 131:
            if (!VAR_10) {
                break;
            }
            FUNC_6(&VAR_6, &VAR_9->text);
            break;
        case 138:
        case 137:


            FUNC_2(&VAR_6, &VAR_9->key, VAR_10);
            break;
        case 134:
            if (!VAR_10) {
                break;
            }
            FUNC_4(&VAR_6, &VAR_9->motion);
            break;
        case 133:
            if (!VAR_10) {
                break;
            }
            FUNC_5(&VAR_6, &VAR_9->wheel);
            break;
        case 136:
        case 135:


            FUNC_3(&VAR_6, &VAR_9->button,
                                               VAR_10);
            break;
        case 139: {
            if (!VAR_10) {
                break;
            }
            file_handler_action_t VAR_11;
            if (FUNC_7(VAR_9->drop.file)) {
                VAR_11 = VAR_0;
            } else {
                VAR_11 = VAR_1;
            }
            FUNC_1(&VAR_5, VAR_11, VAR_9->drop.file);
            break;
        }
    }
    return VAR_2;
}
