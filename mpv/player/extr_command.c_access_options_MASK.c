
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_property_action_arg {int action; scalar_t__ arg; int key; } ;
struct m_option {int dummy; } ;
struct m_config_option {struct m_option* opt; int data; } ;
struct TYPE_4__ {int mconfig; int playing; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct m_config_option* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct m_config_option*,scalar_t__,int) ;
 int FUNC_3 (struct m_option*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct m_property_action_arg *VAR_6, bool VAR_7,
                          MPContext *VAR_8)
{
    struct m_config_option *VAR_9 = FUNC_1(VAR_8->mconfig,
                                                  FUNC_0(VAR_6->key));
    if (!VAR_9)
        return VAR_4;
    if (!VAR_9->data)
        return VAR_3;

    switch (VAR_6->action) {
    case 130:
        FUNC_3(VAR_9->opt, VAR_6->arg, VAR_9->data);
        return VAR_2;
    case 128: {
        if (VAR_7 && !VAR_8->playing)
            return VAR_0;
        int VAR_10 = VAR_7 ? VAR_5 : 0;
        int VAR_11 = FUNC_2(VAR_8->mconfig, VAR_9, VAR_6->arg, VAR_10);
        FUNC_4(VAR_8);
        return VAR_11 < 0 ? VAR_0 : VAR_2;
    }
    case 129:
        *(struct m_option *)VAR_6->arg = *VAR_9->opt;
        return VAR_2;
    }
    return VAR_1;
}
