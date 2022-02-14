
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int dummy; } ;
struct config_option {int flags; char const* value; } ;
struct config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct config_option* FUNC_0 (struct section*,char const*,int ) ;
 struct section* FUNC_1 (struct config*,char const*) ;
 char const* FUNC_2 (struct config*,char const*,char const*,char const*) ;
 int FUNC_3 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 char const* FUNC_6 (char const*) ;

const char *FUNC_7(struct config *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
    struct config_option *VAR_8;

    FUNC_3(VAR_3, "request to set default config in section '%s', name '%s', value '%s'", VAR_5, VAR_6, VAR_7);

    struct section *VAR_9 = FUNC_1(VAR_4, VAR_5);
    if(!VAR_9) return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

    VAR_8 = FUNC_0(VAR_9, VAR_6, 0);
    if(!VAR_8) return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

    VAR_8->flags |= VAR_2;

    if(VAR_8->flags & VAR_1)
        return VAR_8->value;

    if(FUNC_5(VAR_8->value, VAR_7) != 0) {
        VAR_8->flags |= VAR_0;

        FUNC_4(VAR_8->value);
        VAR_8->value = FUNC_6(VAR_7);
    }

    return VAR_8->value;
}
