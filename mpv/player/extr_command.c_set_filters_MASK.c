
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_obj_settings {int dummy; } ;
struct m_config_option {int opt; struct m_obj_settings** data; } ;
struct MPContext {int mconfig; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
typedef int bstr ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct m_config_option* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct m_obj_settings**,struct m_obj_settings**) ;
 int FUNC_3 (int ,struct m_obj_settings**) ;
 int FUNC_4 (struct MPContext*,int ) ;
 int FUNC_5 (struct MPContext*,int) ;

__attribute__((used)) static int FUNC_6(struct MPContext *VAR_1, enum stream_type VAR_2,
                       struct m_obj_settings *VAR_3)
{
    bstr VAR_4 = FUNC_0(VAR_0[VAR_2]);
    struct m_config_option *VAR_5 = FUNC_1(VAR_1->mconfig, VAR_4);
    if (!VAR_5)
        return -1;

    struct m_obj_settings **VAR_6 = VAR_5->data;
    struct m_obj_settings *VAR_7 = *VAR_6;
    *VAR_6 = ((void*)0);
    FUNC_2(VAR_5->opt, VAR_6, &VAR_3);

    bool VAR_8 = FUNC_5(VAR_1, VAR_2);

    if (VAR_8) {
        FUNC_3(VAR_5->opt, &VAR_7);
        FUNC_4(VAR_1, VAR_0[VAR_2]);
    } else {
        FUNC_3(VAR_5->opt, VAR_6);
        *VAR_6 = VAR_7;
        FUNC_5(VAR_1, VAR_2);
    }

    return VAR_8 ? 0 : -1;
}
