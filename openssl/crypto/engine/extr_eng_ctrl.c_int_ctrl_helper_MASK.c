
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__ const* cmd_defns; } ;
struct TYPE_7__ {int cmd_num; int cmd_flags; int * cmd_desc; int * cmd_name; } ;
typedef TYPE_1__ const ENGINE_CMD_DEFN ;
typedef TYPE_2__ ENGINE ;



 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__ const*,char*) ;
 int FUNC_2 (TYPE_1__ const*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int * VAR_7 ;
 int * FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(ENGINE *VAR_8, int VAR_9, long VAR_10, void *VAR_11,
                           void (*VAR_12) (void))
{
    int VAR_13;
    char *VAR_14 = (char *)VAR_11;
    const ENGINE_CMD_DEFN *VAR_15;


    if (VAR_9 == VAR_1) {
        if ((VAR_8->cmd_defns == ((void*)0)) || FUNC_3(VAR_8->cmd_defns))
            return 0;
        return VAR_8->cmd_defns->cmd_num;
    }

    if ((VAR_9 == VAR_0) ||
        (VAR_9 == 130) ||
        (VAR_9 == 132)) {
        if (VAR_14 == ((void*)0)) {
            FUNC_0(VAR_2, VAR_6);
            return -1;
        }
    }

    if (VAR_9 == VAR_0) {
        if ((VAR_8->cmd_defns == ((void*)0))
            || ((VAR_13 = FUNC_1(VAR_8->cmd_defns, VAR_14)) < 0)) {
            FUNC_0(VAR_2, VAR_4);
            return -1;
        }
        return VAR_8->cmd_defns[VAR_13].cmd_num;
    }




    if ((VAR_8->cmd_defns == ((void*)0))
        || ((VAR_13 = FUNC_2(VAR_8->cmd_defns, (unsigned int)VAR_10)) < 0)) {
        FUNC_0(VAR_2, VAR_5);
        return -1;
    }

    VAR_15 = &VAR_8->cmd_defns[VAR_13];
    switch (VAR_9) {
    case 128:
        VAR_15++;
        return FUNC_3(VAR_15) ? 0 : VAR_15->cmd_num;
    case 129:
        return FUNC_5(VAR_15->cmd_name);
    case 130:
        return FUNC_5(FUNC_4(VAR_14, VAR_15->cmd_name));
    case 131:
        return FUNC_5(VAR_15->cmd_desc == ((void*)0) ? VAR_7
                                            : VAR_15->cmd_desc);
    case 132:
        return FUNC_5(FUNC_4(VAR_14, VAR_15->cmd_desc == ((void*)0) ? VAR_7
                                                      : VAR_15->cmd_desc));
    case 133:
        return VAR_15->cmd_flags;
    }

    FUNC_0(VAR_2, VAR_3);
    return -1;
}
