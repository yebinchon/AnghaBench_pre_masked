
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info_cb_states_st {int where; int statestr; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct info_cb_states_st** VAR_6 ;
 size_t VAR_7 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(const SSL *VAR_8, int VAR_9, int VAR_10)
{
    struct info_cb_states_st *VAR_11 = VAR_6[VAR_5];


    if (!FUNC_3(VAR_10 == 0)) {
        VAR_4 = 1;
        return;
    }





    if (!FUNC_3((FUNC_1(VAR_8) && (VAR_9 & VAR_3) != 0))
            || !FUNC_3(!FUNC_1(VAR_8) && (VAR_9 & VAR_2) != 0)
            || !FUNC_5(VAR_11[++VAR_7].where, 0)) {
        VAR_4 = 1;
        return;
    }


    if (!FUNC_6((VAR_9 & VAR_11[VAR_7].where) != 0)) {
        VAR_4 = 1;
        return;
    }
    if ((VAR_9 & VAR_1) != 0
            && !FUNC_4(FUNC_7(FUNC_2(VAR_8),
                            VAR_11[VAR_7].statestr), 0)) {
        VAR_4 = 1;
        return;
    }




    if ((VAR_9 & VAR_0)
            && FUNC_0((SSL *)VAR_8) != 0) {
        VAR_4 = 1;
        return;
    }
}
