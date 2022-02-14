
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int error_prefix ;
struct TYPE_5__ {scalar_t__ protocol; } ;
typedef TYPE_1__ conn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (char*,char const*,int const) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(conn *VAR_2, char *VAR_3) {
    const static char VAR_4[] = "SERVER_ERROR ";
    const static int VAR_5 = sizeof(VAR_4) - 1;

    if (VAR_2->protocol == VAR_1) {

        if (!FUNC_1(VAR_3, VAR_4, VAR_5)) {
            VAR_3 += VAR_5;
        }
        FUNC_2(VAR_2, VAR_0, VAR_3, 0);
    } else {
        FUNC_0(VAR_2, VAR_3);
    }
}
