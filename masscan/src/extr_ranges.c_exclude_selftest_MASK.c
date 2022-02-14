
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int member_0; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct RangeList*,unsigned int,unsigned int) ;
 int FUNC_2 (struct RangeList*,struct RangeList*) ;
 int FUNC_3 (struct RangeList*,struct RangeList*) ;
 int FUNC_4 (struct RangeList*,struct RangeList*) ;
 int FUNC_5 (struct RangeList*,struct RangeList*) ;
 int FUNC_6 (struct RangeList*) ;

__attribute__((used)) static int
FUNC_7(void)
{
    unsigned VAR_0 = 0;
    struct RangeList VAR_1 = {0};
    struct RangeList VAR_2 = {0};
    struct RangeList VAR_3 = {0};
    unsigned VAR_4 = 0;
    size_t VAR_5;







    static const unsigned VAR_6 = 1000;







    VAR_0 = 0;
    VAR_4 = 0;
    for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
        unsigned VAR_7;
        unsigned VAR_8;

        VAR_4 += FUNC_0(&VAR_0) & 0xF;
        VAR_7 = VAR_4;
        VAR_4 += FUNC_0(&VAR_0) & 0xF;
        VAR_8 = VAR_4;

        FUNC_1(&VAR_1, VAR_7, VAR_8);
    }
    FUNC_6(&VAR_1);




    VAR_0 = 1;
    VAR_4 = 0;
    for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
        unsigned VAR_9;
        unsigned VAR_10;

        VAR_4 += FUNC_0(&VAR_0) & 0xF;
        VAR_9 = VAR_4;
        VAR_4 += FUNC_0(&VAR_0) & 0xF;
        VAR_10 = VAR_4;

        FUNC_1(&VAR_3, VAR_9, VAR_10);
    }
    FUNC_6(&VAR_3);




    FUNC_2(&VAR_2, &VAR_1);
    if (!FUNC_5(&VAR_1, &VAR_2))
        return 1;




    FUNC_3(&VAR_1, &VAR_3);
    FUNC_4(&VAR_2, &VAR_3);
    if (!FUNC_5(&VAR_1, &VAR_2))
        return 1;


    return 0;

}
