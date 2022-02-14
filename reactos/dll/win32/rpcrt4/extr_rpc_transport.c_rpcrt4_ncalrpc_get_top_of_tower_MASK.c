
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; size_t count_rhs; int protid; } ;
typedef TYPE_1__ twr_empty_floor_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char*,char const*,char const*) ;
 int FUNC_1 (unsigned char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static size_t FUNC_3(unsigned char *VAR_1,
                                              const char *VAR_2,
                                              const char *VAR_3)
{
    twr_empty_floor_t *VAR_4;
    size_t VAR_5;
    size_t VAR_6;

    FUNC_0("(%p, %s, %s)\n", VAR_1, VAR_2, VAR_3);

    VAR_6 = FUNC_2(VAR_3) + 1;
    VAR_5 = sizeof(*VAR_4) + VAR_6;

    if (!VAR_1)
        return VAR_5;

    VAR_4 = (twr_empty_floor_t *)VAR_1;

    VAR_1 += sizeof(*VAR_4);

    VAR_4->count_lhs = sizeof(VAR_4->protid);
    VAR_4->protid = VAR_0;
    VAR_4->count_rhs = VAR_6;

    FUNC_1(VAR_1, VAR_3, VAR_6);

    return VAR_5;
}
