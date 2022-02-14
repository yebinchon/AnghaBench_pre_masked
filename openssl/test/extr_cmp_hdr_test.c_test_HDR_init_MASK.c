
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ref ;
struct TYPE_4__ {int expected; int cmp_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int (*) (TYPE_1__*)) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(void)
{
    FUNC_3(VAR_0, VAR_5);
    unsigned char VAR_6[VAR_1];

    VAR_3->expected = 1;
    if (!FUNC_4(1, FUNC_2(VAR_6, sizeof(VAR_6)))
            || !FUNC_5(FUNC_1(VAR_3->cmp_ctx,
                                                           VAR_6, sizeof(VAR_6)))) {
        FUNC_6(VAR_3);
        VAR_3 = ((void*)0);
    }
    FUNC_0(VAR_2, FUNC_6);
    return VAR_4;
}
