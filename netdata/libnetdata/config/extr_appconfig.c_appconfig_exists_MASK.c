
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int dummy; } ;
struct config_option {int dummy; } ;
struct config {int dummy; } ;


 int VAR_0 ;
 struct config_option* FUNC_0 (struct section*,char const*,int ) ;
 struct section* FUNC_1 (struct config*,char const*) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;

int FUNC_3(struct config *VAR_1, const char *VAR_2, const char *VAR_3) {
    struct config_option *VAR_4;

    FUNC_2(VAR_0, "request to get config in section '%s', name '%s'", VAR_2, VAR_3);

    struct section *VAR_5 = FUNC_1(VAR_1, VAR_2);
    if(!VAR_5) return 0;

    VAR_4 = FUNC_0(VAR_5, VAR_3, 0);
    if(!VAR_4) return 0;

    return 1;
}
