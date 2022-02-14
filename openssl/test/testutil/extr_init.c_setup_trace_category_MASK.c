
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bio; } ;
typedef TYPE_1__ tracedata ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int *,TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(int VAR_5)
{
    BIO *VAR_6;
    tracedata *VAR_7;

    if (FUNC_5(VAR_5))
        return;

    VAR_6 = FUNC_3(FUNC_1(FUNC_8()),
                       FUNC_2(VAR_3, VAR_1 | VAR_0));
    VAR_7 = FUNC_4(sizeof(*VAR_7));

    if (VAR_7 == ((void*)0)
        || (VAR_7->bio = VAR_6) == ((void*)0)
        || FUNC_7(VAR_5, VAR_2,
                                   VAR_7) == 0
        || FUNC_10(VAR_4, VAR_7) == 0) {

        FUNC_9(VAR_3,
                "warning: unable to setup trace callback for category '%s'.\n",
                FUNC_6(VAR_5));

        FUNC_7(VAR_5, ((void*)0), ((void*)0));
        FUNC_0(VAR_6);
    }
}
