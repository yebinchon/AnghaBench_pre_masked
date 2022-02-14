
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {int text; } ;
typedef TYPE_1__ json_error_t ;
struct TYPE_6__ {int version; } ;
typedef TYPE_2__ CheckProtocolData ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_0, int VAR_1, CheckProtocolData *VAR_2)
{
    json_t *VAR_3 = ((void*)0);
    json_error_t VAR_4;
    int VAR_5;

    VAR_3 = FUNC_1 (VAR_0, VAR_1, 0, &VAR_4);
    if (!VAR_3) {
        FUNC_4 ("Parse response failed: %s.\n", VAR_4.text);
        return -1;
    }

    if (FUNC_3 (VAR_3, "version")) {
        VAR_5 = FUNC_2 (VAR_3, "version");
        VAR_2->version = VAR_5;
    } else {
        FUNC_4 ("Response doesn't contain protocol version.\n");
        FUNC_0 (VAR_3);
        return -1;
    }

    FUNC_0 (VAR_3);
    return 0;
}
