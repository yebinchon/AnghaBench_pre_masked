
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,size_t) ;

int FUNC_2(WPACKET *VAR_0, size_t VAR_1)
{
    if (VAR_1 > 0xffff)
        return 0;

    if (VAR_1 > 0xff) {
        if (!FUNC_1(VAR_0, 0x82)
                || !FUNC_0(VAR_0, VAR_1))
            return 0;
    } else {
        if (VAR_1 > 0x7f
                && !FUNC_1(VAR_0, 0x81))
            return 0;
        if (!FUNC_1(VAR_0, VAR_1))
            return 0;
    }

    return 1;
}
