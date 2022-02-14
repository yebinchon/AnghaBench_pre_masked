
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_obj_settings {int dummy; } ;
struct m_config_option {int opt; int data; } ;
struct MPContext {int mconfig; } ;
typedef int optname ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
typedef int bstr ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 char const** VAR_0 ;
 struct m_config_option* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct m_obj_settings**,int ) ;
 int FUNC_4 (int ,struct m_obj_settings**) ;
 int FUNC_5 (struct mp_log*,int ,int ,int ,struct m_obj_settings**) ;
 int FUNC_6 (struct MPContext*,int,struct m_obj_settings*) ;
 int FUNC_7 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_8(struct MPContext *VAR_1, struct mp_log *VAR_2,
                        enum stream_type VAR_3,
                        const char *VAR_4, const char *VAR_5)
{
    bstr VAR_6 = FUNC_1(VAR_0[VAR_3]);
    struct m_config_option *VAR_7 = FUNC_2(VAR_1->mconfig, VAR_6);
    if (!VAR_7)
        return -1;


    char VAR_8[20];
    FUNC_7(VAR_8, sizeof(VAR_8), "%.*s-%s", FUNC_0(VAR_6), VAR_4);

    struct m_obj_settings *VAR_9 = ((void*)0);
    FUNC_3(VAR_7->opt, &VAR_9, VAR_7->data);

    int VAR_10 = FUNC_5(VAR_2, VAR_7->opt, FUNC_1(VAR_8), FUNC_1(VAR_5), &VAR_9);
    if (VAR_10 >= 0)
        VAR_10 = FUNC_6(VAR_1, VAR_3, VAR_9);

    FUNC_4(VAR_7->opt, &VAR_9);

    return VAR_10 >= 0 ? 0 : -1;
}
