
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {char* name; } ;
struct m_option {int dummy; } ;
struct m_config_option {int data; struct m_option* opt; } ;
struct TYPE_4__ {int mconfig; TYPE_1__* command_ctx; } ;
struct TYPE_3__ {scalar_t__ silence_option_deprecations; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (char const*) ;
 struct m_config_option* FUNC_1 (int ,int ) ;
 struct m_config_option* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct m_config_option*,void*,int ) ;
 int FUNC_4 (struct m_option*,void*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct m_property *VAR_5,
                                      int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    const char *VAR_9 = VAR_5->name;
    struct m_config_option *VAR_10;
    if (VAR_8->command_ctx->silence_option_deprecations) {

        VAR_10 = FUNC_2(VAR_8->mconfig, FUNC_0(VAR_9));
    } else {
        VAR_10 = FUNC_1(VAR_8->mconfig, FUNC_0(VAR_9));
    }

    if (!VAR_10)
        return VAR_3;

    switch (VAR_6) {
    case 129:
        *(struct m_option *)VAR_7 = *(VAR_10->opt);
        return VAR_2;
    case 130:
        if (!VAR_10->data)
            return VAR_1;
        FUNC_4(VAR_10->opt, VAR_7, VAR_10->data);
        return VAR_2;
    case 128:
        if (FUNC_3(VAR_8->mconfig, VAR_10, VAR_7, 0) < 0)
            return VAR_0;
        return VAR_2;
    }
    return VAR_1;
}
