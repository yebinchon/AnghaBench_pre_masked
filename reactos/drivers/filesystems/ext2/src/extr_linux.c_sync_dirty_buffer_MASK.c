
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

int FUNC_8(struct buffer_head *VAR_1)
{
    int VAR_2 = 0;

    FUNC_0(FUNC_1(&VAR_1->b_count) <= 1);
    FUNC_3(VAR_1);
    if (FUNC_5(VAR_1)) {
        FUNC_2(VAR_1);
        VAR_2 = FUNC_4(VAR_0, VAR_1);
        FUNC_7(VAR_1);
    } else {
        FUNC_6(VAR_1);
    }
    return VAR_2;
}
