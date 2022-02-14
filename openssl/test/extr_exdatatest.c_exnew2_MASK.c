
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int new; } ;
typedef TYPE_1__ MYOBJ_EX_DATA ;
typedef int CRYPTO_EX_DATA ;


 int FUNC_0 (int *,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (long,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(void *VAR_5, void *VAR_6, CRYPTO_EX_DATA *VAR_7,
          int VAR_8, long VAR_9, void *VAR_10)
{
    MYOBJ_EX_DATA *VAR_11 = FUNC_2(sizeof(*VAR_11));

    if (!FUNC_7(VAR_8 == VAR_3 || VAR_8 == VAR_4)
        || !FUNC_3(VAR_9, VAR_1)
        || !FUNC_5(VAR_10, VAR_2)
        || !FUNC_6(VAR_6)
        || !FUNC_4(VAR_11)
        || !FUNC_7(FUNC_0(VAR_7, VAR_8, VAR_11))) {
        VAR_0 = 0;
        FUNC_1(VAR_11);
    } else {
        VAR_11->new = 1;
    }
}
