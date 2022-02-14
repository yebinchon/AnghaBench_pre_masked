
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int timeo ;
struct nn_stopwatch {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (int,char*,int,int ) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (struct nn_stopwatch*) ;
 int FUNC_6 (struct nn_stopwatch*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;

int FUNC_10 ()
{
    int VAR_6;
    int VAR_7;
    int VAR_8;
    char VAR_9 [3];
    struct nn_stopwatch VAR_10;
    uint64_t VAR_11;

    VAR_7 = FUNC_8 (VAR_0, VAR_2);

    VAR_8 = 100;
    VAR_6 = FUNC_4 (VAR_7, VAR_5, VAR_3, &VAR_8, sizeof (VAR_8));
    FUNC_0 (VAR_6 == 0);
    FUNC_5 (&VAR_10);
    VAR_6 = FUNC_2 (VAR_7, VAR_9, sizeof (VAR_9), 0);
    VAR_11 = FUNC_6 (&VAR_10);
    FUNC_0 (VAR_6 < 0 && FUNC_1 () == VAR_1);
    FUNC_9 (VAR_11, 100000);

    VAR_8 = 100;
    VAR_6 = FUNC_4 (VAR_7, VAR_5, VAR_4, &VAR_8, sizeof (VAR_8));
    FUNC_0 (VAR_6 == 0);
    FUNC_5 (&VAR_10);
    VAR_6 = FUNC_3 (VAR_7, "ABC", 3, 0);
    VAR_11 = FUNC_6 (&VAR_10);
    FUNC_0 (VAR_6 < 0 && FUNC_1 () == VAR_1);
    FUNC_9 (VAR_11, 100000);

    FUNC_7 (VAR_7);

    return 0;
}
