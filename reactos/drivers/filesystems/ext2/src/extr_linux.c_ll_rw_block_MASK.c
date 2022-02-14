
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

void FUNC_7(int VAR_2, int VAR_3, struct buffer_head * VAR_4[])
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

        struct buffer_head *VAR_6 = VAR_4[VAR_5];

        if (VAR_2 == VAR_0)
            FUNC_2(VAR_6);
        else if (FUNC_5(VAR_6))
            continue;

        if (VAR_2 == VAR_1 || VAR_2 == VAR_0) {
            if (FUNC_4(VAR_6)) {
                FUNC_1(VAR_6);
                FUNC_3(VAR_1, VAR_6);
                continue;
            }
        } else {
            if (!FUNC_0(VAR_6)) {
                FUNC_1(VAR_6);
                FUNC_3(VAR_2, VAR_6);
                continue;
            }
        }
        FUNC_6(VAR_6);
    }
}
