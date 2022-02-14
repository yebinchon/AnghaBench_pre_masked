
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int dummy; } ;
struct config_option {int flags; char* value; } ;
struct config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct config_option* FUNC_0 (struct section*,char const*,int ) ;
 struct section* FUNC_1 (struct config*,char const*) ;
 struct section* FUNC_2 (struct config*,char const*) ;
 struct config_option* FUNC_3 (struct section*,char const*,char const*) ;
 int FUNC_4 (int ,char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_5 (char*,char const*) ;

char *FUNC_6(struct config *VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8)
{
    struct config_option *VAR_9;

    FUNC_4(VAR_4, "request to get config in section '%s', name '%s', default_value '%s'", VAR_6, VAR_7, VAR_8);

    struct section *VAR_10 = FUNC_2(VAR_5, VAR_6);
    if(!VAR_10) VAR_10 = FUNC_1(VAR_5, VAR_6);

    VAR_9 = FUNC_0(VAR_10, VAR_7, 0);
    if(!VAR_9) {
        VAR_9 = FUNC_3(VAR_10, VAR_7, VAR_8);
        if(!VAR_9) return ((void*)0);
    }
    VAR_9->flags |= VAR_3;

    if((VAR_9->flags & VAR_2) || (VAR_9->flags & VAR_0)) {


        if(!(VAR_9->flags & VAR_1)) {
            if(FUNC_5(VAR_9->value, VAR_8) != 0) VAR_9->flags |= VAR_0;
            VAR_9->flags |= VAR_1;
        }
    }

    return(VAR_9->value);
}
