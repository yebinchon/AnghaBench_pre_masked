
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union m_option_value {int member_0; } ;
struct TYPE_3__ {int string; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;
struct m_config_option {int opt; } ;
struct m_config {int log; } ;
typedef int bstr ;
struct TYPE_4__ {char* (* print ) (int *,struct mpv_node*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct m_config*,char*,int ,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct m_config_option* FUNC_3 (struct m_config*,int ) ;
 int FUNC_4 (struct m_config*,struct m_config_option*,union m_option_value*,int) ;
 int FUNC_5 (int ,union m_option_value*) ;
 int FUNC_6 (int ,int ,int ,int ,union m_option_value*) ;
 int FUNC_7 (int ,union m_option_value*,struct mpv_node*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_4 ;
 char* FUNC_9 (int *,struct mpv_node*) ;
 int FUNC_10 (char*) ;

int FUNC_11(struct m_config *VAR_5, bstr VAR_6,
                             struct mpv_node *VAR_7, int VAR_8)
{
    int VAR_9;

    struct m_config_option *VAR_10 = FUNC_3(VAR_5, VAR_6);
    if (!VAR_10)
        return VAR_2;



    union m_option_value VAR_11 = {0};

    if (VAR_7->format == VAR_0) {
        bstr VAR_12 = FUNC_2(VAR_7->u.string);
        VAR_9 = FUNC_6(VAR_4, VAR_10->opt, VAR_6, VAR_12, &VAR_11);
    } else {
        VAR_9 = FUNC_7(VAR_10->opt, &VAR_11, VAR_7);
    }

    if (VAR_9 >= 0)
        VAR_9 = FUNC_4(VAR_5, VAR_10, &VAR_11, VAR_8);

    if (FUNC_8(VAR_5->log, VAR_1)) {
        char *VAR_13 = VAR_3.print(((void*)0), VAR_7);
        FUNC_1(VAR_5, "Setting option '%.*s' = %s (flags = %d) -> %d\n",
               FUNC_0(VAR_6), VAR_13 ? VAR_13 : "?", VAR_8, VAR_9);
        FUNC_10(VAR_13);
    }

    FUNC_5(VAR_10->opt, &VAR_11);
    return VAR_9;
}
