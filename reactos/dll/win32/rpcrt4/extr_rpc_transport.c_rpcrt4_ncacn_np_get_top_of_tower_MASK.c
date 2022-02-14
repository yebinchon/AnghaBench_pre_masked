
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; size_t count_rhs; int protid; } ;
typedef TYPE_1__ twr_empty_floor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char*,char const*,char const*) ;
 int FUNC_1 (unsigned char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static size_t FUNC_3(unsigned char *VAR_2,
                                               const char *VAR_3,
                                               const char *VAR_4)
{
    twr_empty_floor_t *VAR_5;
    twr_empty_floor_t *VAR_6;
    size_t VAR_7;
    size_t VAR_8;
    size_t VAR_9;

    FUNC_0("(%p, %s, %s)\n", VAR_2, VAR_3, VAR_4);

    VAR_8 = VAR_3 ? FUNC_2(VAR_3) + 1 : 1;
    VAR_9 = VAR_4 ? FUNC_2(VAR_4) + 1 : 1;
    VAR_7 = sizeof(*VAR_5) + VAR_9 + sizeof(*VAR_6) + VAR_8;

    if (!VAR_2)
        return VAR_7;

    VAR_5 = (twr_empty_floor_t *)VAR_2;

    VAR_2 += sizeof(*VAR_5);

    VAR_5->count_lhs = sizeof(VAR_5->protid);
    VAR_5->protid = VAR_1;
    VAR_5->count_rhs = VAR_9;

    if (VAR_4)
        FUNC_1(VAR_2, VAR_4, VAR_9);
    else
        VAR_2[0] = 0;
    VAR_2 += VAR_9;

    VAR_6 = (twr_empty_floor_t *)VAR_2;

    VAR_2 += sizeof(*VAR_6);

    VAR_6->count_lhs = sizeof(VAR_6->protid);
    VAR_6->protid = VAR_0;
    VAR_6->count_rhs = VAR_8;

    if (VAR_3)
        FUNC_1(VAR_2, VAR_3, VAR_8);
    else
        VAR_2[0] = 0;

    return VAR_7;
}
