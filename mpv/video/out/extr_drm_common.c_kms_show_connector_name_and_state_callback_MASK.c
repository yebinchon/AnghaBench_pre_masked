
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_4__ {scalar_t__ connection; } ;
typedef TYPE_1__ drmModeConnector ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,char*) ;
 int FUNC_1 (struct mp_log*,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_2(
    struct mp_log *VAR_2, int VAR_3, const drmModeConnector *VAR_4)
{
    char VAR_5[VAR_1];
    FUNC_0(VAR_4, VAR_5);
    const char *VAR_6 =
        (VAR_4->connection == VAR_0) ? "connected" : "disconnected";
    FUNC_1(VAR_2, "  %s (%s)\n", VAR_5, VAR_6);
}
