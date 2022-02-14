
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total; int zero_pos; int zero_cnt; scalar_t__ tmp; } ;
typedef TYPE_1__ IPV6_STAT ;


 int FUNC_0 (char const*,char,int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,scalar_t__,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_1, const char *VAR_2)
{
    IPV6_STAT VAR_3;
    VAR_3.total = 0;
    VAR_3.zero_pos = -1;
    VAR_3.zero_cnt = 0;





    if (!FUNC_0(VAR_2, ':', 0, VAR_0, &VAR_3))
        return 0;



    if (VAR_3.zero_pos == -1) {

        if (VAR_3.total != 16)
            return 0;
    } else {

        if (VAR_3.total == 16)
            return 0;

        if (VAR_3.zero_cnt > 3)
            return 0;

        else if (VAR_3.zero_cnt == 3) {
            if (VAR_3.total > 0)
                return 0;
        }

        else if (VAR_3.zero_cnt == 2) {
            if ((VAR_3.zero_pos != 0)
                && (VAR_3.zero_pos != VAR_3.total))
                return 0;
        } else

        {
            if ((VAR_3.zero_pos == 0)
                || (VAR_3.zero_pos == VAR_3.total))
                return 0;
        }
    }



    if (VAR_3.zero_pos >= 0) {

        FUNC_1(VAR_1, VAR_3.tmp, VAR_3.zero_pos);

        FUNC_2(VAR_1 + VAR_3.zero_pos, 0, 16 - VAR_3.total);

        if (VAR_3.total != VAR_3.zero_pos)
            FUNC_1(VAR_1 + VAR_3.zero_pos + 16 - VAR_3.total,
                   VAR_3.tmp + VAR_3.zero_pos,
                   VAR_3.total - VAR_3.zero_pos);
    } else
        FUNC_1(VAR_1, VAR_3.tmp, 16);

    return 1;
}
