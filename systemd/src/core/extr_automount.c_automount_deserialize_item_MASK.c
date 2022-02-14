
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ dev_t ;
typedef int Unit ;
struct TYPE_8__ {int pipe_fd; int expire_tokens; int tokens; scalar_t__ dev_id; scalar_t__ result; scalar_t__ deserialized_state; } ;
typedef TYPE_1__ FDSet ;
typedef scalar_t__ AutomountState ;
typedef scalar_t__ AutomountResult ;
typedef TYPE_1__ Automount ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (int *,int,char*) ;
 scalar_t__ FUNC_10 (char const*,int*) ;
 scalar_t__ FUNC_11 (char const*,unsigned long*) ;
 scalar_t__ FUNC_12 (char const*,unsigned int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (char const*,char*) ;

__attribute__((used)) static int FUNC_17(Unit *VAR_1, const char *VAR_2, const char *VAR_3, FDSet *VAR_4) {
        Automount *VAR_5 = FUNC_0(VAR_1);
        int VAR_6;

        FUNC_2(VAR_5);
        FUNC_2(VAR_4);

        if (FUNC_16(VAR_2, "state")) {
                AutomountState VAR_7;

                VAR_7 = FUNC_4(VAR_3);
                if (VAR_7 < 0)
                        FUNC_8(VAR_1, "Failed to parse state value: %s", VAR_3);
                else
                        VAR_5->deserialized_state = VAR_7;
        } else if (FUNC_16(VAR_2, "result")) {
                AutomountResult VAR_8;

                VAR_8 = FUNC_3(VAR_3);
                if (VAR_8 < 0)
                        FUNC_8(VAR_1, "Failed to parse result value: %s", VAR_3);
                else if (VAR_8 != VAR_0)
                        VAR_5->result = VAR_8;

        } else if (FUNC_16(VAR_2, "dev-id")) {
                unsigned long VAR_9;

                if (FUNC_11(VAR_3, &VAR_9) < 0)
                        FUNC_8(VAR_1, "Failed to parse dev-id value: %s", VAR_3);
                else
                        VAR_5->dev_id = (dev_t) VAR_9;

        } else if (FUNC_16(VAR_2, "token")) {
                unsigned VAR_10;

                if (FUNC_12(VAR_3, &VAR_10) < 0)
                        FUNC_8(VAR_1, "Failed to parse token value: %s", VAR_3);
                else {
                        VAR_6 = FUNC_14(&VAR_5->tokens, ((void*)0));
                        if (VAR_6 < 0) {
                                FUNC_7();
                                return 0;
                        }

                        VAR_6 = FUNC_15(VAR_5->tokens, FUNC_1(VAR_10));
                        if (VAR_6 < 0)
                                FUNC_9(VAR_1, VAR_6, "Failed to add token to set: %m");
                }
        } else if (FUNC_16(VAR_2, "expire-token")) {
                unsigned VAR_11;

                if (FUNC_12(VAR_3, &VAR_11) < 0)
                        FUNC_8(VAR_1, "Failed to parse token value: %s", VAR_3);
                else {
                        VAR_6 = FUNC_14(&VAR_5->expire_tokens, ((void*)0));
                        if (VAR_6 < 0) {
                                FUNC_7();
                                return 0;
                        }

                        VAR_6 = FUNC_15(VAR_5->expire_tokens, FUNC_1(VAR_11));
                        if (VAR_6 < 0)
                                FUNC_9(VAR_1, VAR_6, "Failed to add expire token to set: %m");
                }
        } else if (FUNC_16(VAR_2, "pipe-fd")) {
                int VAR_12;

                if (FUNC_10(VAR_3, &VAR_12) < 0 || VAR_12 < 0 || !FUNC_5(VAR_4, VAR_12))
                        FUNC_8(VAR_1, "Failed to parse pipe-fd value: %s", VAR_3);
                else {
                        FUNC_13(VAR_5->pipe_fd);
                        VAR_5->pipe_fd = FUNC_6(VAR_4, VAR_12);
                }
        } else
                FUNC_8(VAR_1, "Unknown serialization key: %s", VAR_2);

        return 0;
}
