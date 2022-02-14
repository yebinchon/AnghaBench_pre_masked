
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rd_key; } ;
struct TYPE_5__ {TYPE_1__ u; int grand_rounds; } ;
typedef TYPE_2__ CAMELLIA_KEY ;


 int FUNC_0 (int const,unsigned char const*,int ) ;

int FUNC_1(const unsigned char *VAR_0, const int VAR_1,
                     CAMELLIA_KEY *VAR_2)
{
    if (!VAR_0 || !VAR_2)
        return -1;
    if (VAR_1 != 128 && VAR_1 != 192 && VAR_1 != 256)
        return -2;
    VAR_2->grand_rounds = FUNC_0(VAR_1, VAR_0, VAR_2->u.rd_key);
    return 0;
}
