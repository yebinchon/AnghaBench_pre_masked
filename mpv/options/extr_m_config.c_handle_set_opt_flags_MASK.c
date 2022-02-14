
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_config_option {int name; scalar_t__ is_set_from_config; scalar_t__ is_set_from_cmdline; TYPE_1__* opt; } ;
struct m_config {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (struct m_config*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct m_config*,struct m_config_option*) ;

__attribute__((used)) static int FUNC_2(struct m_config *VAR_10,
                                struct m_config_option *VAR_11, int VAR_12)
{
    int VAR_13 = VAR_11->opt->flags;
    bool VAR_14 = !(VAR_12 & VAR_4);

    if ((VAR_12 & VAR_9) && !(VAR_13 & VAR_2))
        return 0;

    if ((VAR_12 & VAR_8) && VAR_11->is_set_from_cmdline)
        VAR_14 = 0;

    if ((VAR_12 & VAR_6) &&
        (VAR_11->is_set_from_cmdline || VAR_11->is_set_from_config))
        VAR_14 = 0;

    if ((VAR_12 & VAR_7) && (VAR_13 & VAR_2))
        return VAR_0;


    if ((VAR_12 & VAR_5) && (VAR_13 & VAR_1)) {
        FUNC_0(VAR_10, "The %s option can't be used in a config file.\n",
               VAR_11->name);
        return VAR_0;
    }
    if ((VAR_12 & VAR_3) && VAR_14)
        FUNC_1(VAR_10, VAR_11);

    return VAR_14 ? 2 : 1;
}
