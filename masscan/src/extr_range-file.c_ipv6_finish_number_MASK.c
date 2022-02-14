
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int index; unsigned int ellision_index; int * tmp; int begin; int end; scalar_t__ is_second; } ;
struct RangeParser {TYPE_1__ ipv6; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static unsigned
FUNC_3(struct RangeParser *VAR_0, unsigned char VAR_1)
{
    unsigned VAR_2 = VAR_0->ipv6.index;
    unsigned VAR_3 = VAR_0->ipv6.ellision_index;


    if (VAR_2 < 7 && VAR_3 >= 8)
        return 1;


    FUNC_1(
        &VAR_0->ipv6.tmp[8-(VAR_2-VAR_3)],
        &VAR_0->ipv6.tmp[VAR_3],
        sizeof(VAR_0->ipv6.tmp[0]) * (VAR_2-VAR_3)
        );
    FUNC_2(
        &VAR_0->ipv6.tmp[VAR_3],
        0,
        sizeof(VAR_0->ipv6.tmp[0]) * (7 - VAR_2)
    );


    if (VAR_0->ipv6.is_second)
        FUNC_0(VAR_0->ipv6.end, VAR_0->ipv6.tmp, sizeof(VAR_0->ipv6.end));
    else
        FUNC_0(VAR_0->ipv6.begin, VAR_0->ipv6.tmp, sizeof(VAR_0->ipv6.begin));

    return 0;
}
