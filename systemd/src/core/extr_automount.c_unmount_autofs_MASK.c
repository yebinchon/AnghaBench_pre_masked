
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* manager; } ;
struct TYPE_9__ {scalar_t__ pipe_fd; scalar_t__ where; int expire_tokens; int tokens; int pipe_event_source; } ;
struct TYPE_8__ {int objective; } ;
typedef TYPE_2__ Automount ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Automount *VAR_4) {
        int VAR_5;

        FUNC_2(VAR_4);

        if (VAR_4->pipe_fd < 0)
                return;

        VAR_4->pipe_event_source = FUNC_7(VAR_4->pipe_event_source);
        VAR_4->pipe_fd = FUNC_6(VAR_4->pipe_fd);


        if (!FUNC_0(FUNC_1(VAR_4)->manager->objective, VAR_2, VAR_1)) {

                FUNC_3(VAR_4, VAR_4->tokens, -VAR_0);
                FUNC_3(VAR_4, VAR_4->expire_tokens, -VAR_0);

                if (VAR_4->where) {
                        VAR_5 = FUNC_5(VAR_4->where, VAR_3);
                        if (VAR_5 < 0)
                                FUNC_4(VAR_5, "Failed to unmount: %m");
                }
        }
}
