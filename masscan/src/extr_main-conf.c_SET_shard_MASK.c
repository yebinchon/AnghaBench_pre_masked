
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int one; int of; } ;
struct Masscan {TYPE_1__ shard; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char*,int,int) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static int FUNC_5(struct Masscan *VAR_2, const char *VAR_3, const char *VAR_4)
{
    unsigned VAR_5 = 0;
    unsigned VAR_6 = 0;

    FUNC_1(VAR_3);
    if (VAR_2->echo) {
        if ((VAR_2->shard.one != 1 && VAR_2->shard.of != 1) || VAR_2->echo_all)
            FUNC_2(VAR_2->echo, "shard = %u/%u\n", VAR_2->shard.one, VAR_2->shard.of);
        return 0;
    }
    while (FUNC_3(*VAR_4))
        VAR_5 = VAR_5*10 + (*(VAR_4++)) - '0';
    while (FUNC_4(*VAR_4))
        VAR_4++;
    while (FUNC_3(*VAR_4))
        VAR_6 = VAR_6*10 + (*(VAR_4++)) - '0';

    if (VAR_5 < 1) {
        FUNC_0(0, "FAIL: shard index can't be zero\n");
        FUNC_0(0, "hint   it goes like 1/4 2/4 3/4 4/4\n");
        return VAR_0;
    }
    if (VAR_5 > VAR_6) {
        FUNC_0(0, "FAIL: shard spec is wrong\n");
        FUNC_0(0, "hint   it goes like 1/4 2/4 3/4 4/4\n");
        return VAR_0;
    }
    VAR_2->shard.one = VAR_5;
    VAR_2->shard.of = VAR_6;
    return VAR_1;
}
