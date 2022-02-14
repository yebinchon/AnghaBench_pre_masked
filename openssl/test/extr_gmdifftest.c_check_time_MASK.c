
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;


 int FUNC_0 (scalar_t__*,struct tm*) ;
 int FUNC_1 (struct tm*,int ,long) ;
 int FUNC_2 (int*,int*,struct tm*,struct tm*) ;
 long VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (long,long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static int FUNC_7(long VAR_1)
{
    struct tm VAR_2, VAR_3, VAR_4;
    int VAR_5, VAR_6;
    long VAR_7;
    time_t VAR_8, VAR_9;

    FUNC_6(&VAR_8);

    VAR_9 = VAR_8 + VAR_1;
    FUNC_0(&VAR_9, &VAR_3);
    FUNC_0(&VAR_8, &VAR_2);
    VAR_4 = VAR_2;
    FUNC_1(&VAR_2, 0, VAR_1);
    if (!FUNC_3(VAR_2, VAR_3)
        || !FUNC_3(VAR_2, VAR_3)
        || !FUNC_3(VAR_2, VAR_3)
        || !FUNC_3(VAR_2, VAR_3)
        || !FUNC_3(VAR_2, VAR_3)
        || !FUNC_3(VAR_2, VAR_3)
        || !FUNC_5(FUNC_2(&VAR_5, &VAR_6, &VAR_4, &VAR_2)))
        return 0;
    VAR_7 = (long)VAR_5 * VAR_0 + VAR_6;
    if (!FUNC_4(VAR_1, VAR_7))
        return 0;
    return 1;
}
