
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;
typedef int RRDPUSH_MULTIPLE_CONNECTIONS_STRATEGY ;




 char* FUNC_0 (struct config*,char const*,char const*,char*) ;
 int FUNC_1 (char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static RRDPUSH_MULTIPLE_CONNECTIONS_STRATEGY FUNC_3(struct config *VAR_0, const char *VAR_1, const char *VAR_2, RRDPUSH_MULTIPLE_CONNECTIONS_STRATEGY VAR_3) {
    char *VAR_4;
    switch(VAR_3) {
        default:
        case 129:
            VAR_4 = "allow";
            break;

        case 128:
            VAR_4 = "deny";
            break;
    }

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);

    RRDPUSH_MULTIPLE_CONNECTIONS_STRATEGY VAR_5 = VAR_3;

    if(FUNC_2(VAR_4, "allow") == 0 || FUNC_2(VAR_4, "permit") == 0 || FUNC_2(VAR_4, "accept") == 0)
        VAR_5 = 129;

    else if(FUNC_2(VAR_4, "deny") == 0 || FUNC_2(VAR_4, "reject") == 0 || FUNC_2(VAR_4, "block") == 0)
        VAR_5 = 128;

    else
        FUNC_1("Invalid stream config value at section [%s], setting '%s', value '%s'", VAR_1, VAR_2, VAR_4);

    return VAR_5;
}
