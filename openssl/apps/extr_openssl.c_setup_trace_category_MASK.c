
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bio; } ;
typedef TYPE_1__ tracedata ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int *,TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(int VAR_4)
{
    BIO *VAR_5;
    tracedata *VAR_6;

    if (FUNC_4(VAR_4))
        return;

    VAR_5 = FUNC_2(FUNC_1(FUNC_7()),
                       FUNC_8(VAR_0));
    VAR_6 = FUNC_3(sizeof(*VAR_6));

    if (VAR_6 == ((void*)0)
        || (VAR_6->bio = VAR_5) == ((void*)0)
        || FUNC_6(VAR_4, VAR_1,
                                   VAR_6) == 0
        || FUNC_10(VAR_3, VAR_6) == 0) {

        FUNC_9(VAR_2,
                "warning: unable to setup trace callback for category '%s'.\n",
                FUNC_5(VAR_4));

        FUNC_6(VAR_4, ((void*)0), ((void*)0));
        FUNC_0(VAR_5);
    }
}
