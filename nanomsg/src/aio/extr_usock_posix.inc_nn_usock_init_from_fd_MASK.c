
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {scalar_t__ state; int s; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_4 (struct nn_usock *VAR_11, int VAR_12)
{
    int VAR_13;
    int VAR_14;

    FUNC_2 (VAR_11->state == VAR_6 ||
        VAR_11->state == VAR_5);


    FUNC_2 (VAR_11->s == -1);
    VAR_11->s = VAR_12;
    VAR_14 = FUNC_1 (VAR_11->s, VAR_2, 0);
    if (VAR_14 == -1)
        VAR_14 = 0;
    if (!(VAR_14 & VAR_7)) {
        VAR_13 = FUNC_1 (VAR_11->s, VAR_4, VAR_14 | VAR_7);



        FUNC_0 (VAR_13 != -1);

    }
}
