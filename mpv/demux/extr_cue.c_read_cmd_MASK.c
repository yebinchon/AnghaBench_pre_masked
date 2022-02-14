
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstr {scalar_t__ len; int * start; } ;
typedef enum cue_command { ____Placeholder_cue_command } cue_command ;
struct TYPE_2__ {int command; int text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bstr FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bstr,struct bstr) ;
 struct bstr FUNC_2 (struct bstr,scalar_t__) ;
 int FUNC_3 (struct bstr,struct bstr*) ;
 struct bstr FUNC_4 (struct bstr) ;
 struct bstr FUNC_5 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static enum cue_command FUNC_7(struct bstr *VAR_4, struct bstr *VAR_5)
{
    struct bstr VAR_6 = FUNC_5(FUNC_3(*VAR_4, VAR_4));
    VAR_6 = FUNC_4(VAR_6);
    if (VAR_6.len == 0)
        return VAR_0;
    for (int VAR_7 = 0; VAR_3[VAR_7].command != -1; VAR_7++) {
        struct bstr VAR_8 = FUNC_0(VAR_3[VAR_7].text);
        if (FUNC_1(VAR_6, VAR_8)) {
            struct bstr VAR_9 = FUNC_2(VAR_6, VAR_8.len);
            if (VAR_9.len && !FUNC_6(VAR_2, VAR_9.start[0]))
                continue;
            if (VAR_5)
                *VAR_5 = FUNC_4(VAR_9);
            return VAR_3[VAR_7].command;
        }
    }
    return VAR_1;
}
