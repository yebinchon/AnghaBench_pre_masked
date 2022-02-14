
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct m_property {int name; } ;
struct m_obj_settings {int dummy; } ;
struct m_config_option {scalar_t__ data; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
struct TYPE_5__ {int mconfig; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 struct m_config_option* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct m_property*,int,void*) ;
 char* FUNC_3 (struct m_obj_settings*) ;
 int FUNC_4 (TYPE_1__*,int,struct m_obj_settings*) ;

__attribute__((used)) static int FUNC_5(struct m_property *VAR_2, int VAR_3, void *VAR_4,
                           MPContext *VAR_5, enum stream_type VAR_6)
{
    switch (VAR_3) {
    case 129: {
        struct m_config_option *VAR_7 = FUNC_1(VAR_5->mconfig,
                                                      FUNC_0(VAR_2->name));
        *(char **)VAR_4 = FUNC_3(*(struct m_obj_settings **)VAR_7->data);
        return VAR_1;
    }
    case 128:
        return FUNC_4(VAR_5, VAR_6, *(struct m_obj_settings **)VAR_4) >= 0
            ? VAR_1 : VAR_0;
    }
    return FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
}
