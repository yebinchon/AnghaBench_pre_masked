
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TidyDoc ;
typedef int TidyBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int VAR_2 ;

void FUNC_9(TidyBuffer* VAR_3,
                     TidyBuffer* VAR_4,
                     TidyBuffer* VAR_5) {
    TidyDoc VAR_6 = FUNC_2();
    if (FUNC_8(VAR_6, VAR_5) < 0) {
        FUNC_0();
    }
    FUNC_3(VAR_6, VAR_1, VAR_2);
    FUNC_3(VAR_6, VAR_0, VAR_2);

    if (FUNC_4(VAR_6, VAR_3) >= 0 &&
            FUNC_1(VAR_6) >= 0 &&
            FUNC_6(VAR_6) >= 0) {
        FUNC_7(VAR_6, VAR_4);
    }
    FUNC_5(VAR_6);
}
