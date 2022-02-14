
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retval; scalar_t__ name; } ;
typedef TYPE_1__ STRINT_PAIR ;
typedef int SSL ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(SSL *VAR_4, int VAR_5)
{
    STRINT_PAIR *VAR_6;

    for (VAR_6 = VAR_3; VAR_6->name; ++VAR_6)
        FUNC_0(VAR_2, "\t%s: %s\n",
                   VAR_6->name,
                   (VAR_5 & VAR_6->retval) ? "OK" : "NOT OK");
    FUNC_0(VAR_2, "\tSuite B: ");
    if (FUNC_2(VAR_4, 0) & VAR_1)
        FUNC_1(VAR_2, VAR_5 & VAR_0 ? "OK\n" : "NOT OK\n");
    else
        FUNC_0(VAR_2, "not tested\n");
}
