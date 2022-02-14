
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int log; } ;
typedef TYPE_1__ m_config_t ;
struct TYPE_9__ {int start; } ;
typedef TYPE_2__ bstr ;


 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*,TYPE_2__,char*,int) ;
 TYPE_2__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;

int FUNC_4(m_config_t *VAR_1, const char *VAR_2,
                               char *VAR_3, int VAR_4)
{
    VAR_4 = VAR_4 | VAR_0;

    FUNC_0(VAR_1, "Reading config file %s\n", VAR_2);

    bstr VAR_5 = FUNC_2(VAR_1->log, VAR_2);
    if (!VAR_5.start)
        return 0;

    int VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3, VAR_4);
    FUNC_3(VAR_5.start);
    return VAR_6;
}
