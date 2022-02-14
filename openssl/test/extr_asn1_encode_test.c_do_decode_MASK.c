
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ success; } ;
struct TYPE_9__ {int (* ifree ) (TYPE_2__*) ;TYPE_2__* (* d2i ) (int *,unsigned char**,long) ;} ;
typedef TYPE_1__ TEST_PACKAGE ;
typedef TYPE_2__ EXPECTED ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__ const*,size_t) ;
 TYPE_2__* FUNC_2 (int *,unsigned char**,long) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_0, long VAR_1,
                     const EXPECTED *VAR_2, size_t VAR_3,
                     const TEST_PACKAGE *VAR_4)
{
    EXPECTED *VAR_5 = ((void*)0);
    const unsigned char *VAR_6;
    int VAR_7 = 0;

    VAR_6 = VAR_0;
    VAR_5 = VAR_4->d2i(((void*)0), &VAR_0, VAR_1);
    if (VAR_5 == ((void*)0)) {
        if (VAR_2->success == 0) {
            VAR_7 = 1;
            FUNC_0();
        } else {
            VAR_7 = -1;
        }
    } else {
        if (VAR_6 + VAR_1 == VAR_0
            && FUNC_1(VAR_5, VAR_2, VAR_3) == 0)
            VAR_7 = 1;
        else
            VAR_7 = 0;
    }

    VAR_4->ifree(VAR_5);
    return VAR_7;
}
